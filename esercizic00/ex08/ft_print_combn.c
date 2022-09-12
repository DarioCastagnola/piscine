/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:27:45 by dcastagn          #+#    #+#             */
/*   Updated: 2022/09/12 14:27:53 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⢿⣿⣶⣶⣶⣶⣶⣶⣤⣤⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣟⢶⣳⢮⣇⠿⣽⣿⣿⣿⣿⣟⣿⣿⣿⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⠟⣽⣿⣿⡞⢧⣏⡷⣎⠿⣽⣿⢿⣿⣿⢿⣷⣿⣞⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⡯⣼⣿⣿⡿⡘⢧⢚⣿⣾⡽⣹⢿⣿⣻⣿⣿⡟⣿⡟⣼⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠃⣽⣿⢿⣇⣽⣾⣈⣻⣿⣿⣿⣿⢿⣟⣻⣿⣿⣿⣞⣽⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣼⣿⡏⣾⣿⣿⣿⣿⣿⣿⠿⢿⣿⣿⡟⡶⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⢻⠍⠀⠈⠙⠻⣿⣷⢫⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⣰⣿⣿⣿⣿⣿⢿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⢀⠹⢿⣿⣿⣿⡷⣏⣾⢻⢧⡻⣽⢿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⡿⢁⢦⣼⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⡙⢿⣿⣿⣜⣷⣯⡳⣽⣿⣿⣻⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣶⠟⡛⣿⣿⣿⣿⣿⣶⠶⠖⠒⠀⠀⠀⠠⡐⡩⢿⣿⣿⣿⢷⣻⣷⣿⣳⣟⡾⣽⣻⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⠿⣿⣿⣿⣿⣿⣰⣮⣷⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠣⢥⣙⡿⣿⡿⣯⣿⣿⣿⣯⢷⢯⣟⣳⠿⣜⣻⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠙⠛⠛⠻⢿⣿⣿⣿⣿⡿⠟⠃⠀⠀⠀⠀⠀⠴⣘⢇⠺⣼⣳⣿⣿⣿⣿⣿⡿⣿⣛⡾⣭⢟⣽⡹⢶⣹⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⢀⠰⣈⣞⣿⣿⣿⣿⢿⣿⣿⡿⣽⡳⢯⣷⣝⣾⢯⡟⣭⣷⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⢀⡀⠀⠀⠴⢾⢿⣿⣿⣿⣿⣿⣿⣿⡿⣏⢿⡱⣏⢯⡻⣟⠿⣧⣻⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡏⠀⠀⠀⠀⠀⠀⠉⢷⣌⠢⡍⢾⢻⡽⣻⣿⡿⡿⢧⡛⣜⢣⢛⡜⣲⢽⣸⣛⣶⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣇⠀⠀⠀⠀⠀⠀⠀⠈⠻⢂⠉⢎⣳⡿⠟⡏⠱⡉⠆⠱⡈⢆⢣⡘⢬⣛⣶⣿⣿⣿⣿⣟⣷⣿⣿⣿⣻⣿⡀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⠟⠛⠀⠃⠀⠁⠀⠈⠄⡑⣈⢦⣽⣾⣿⣿⣿⢿⣻⣽⣿⣿⣿⡿⣞⣳⣿⣇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠀⠀⡄⣶⣜⣶⣿⣿⣿⠻⣝⡷⣿⣟⣿⣿⣿⣿⡿⣽⣏⡷⣿⣿⡄⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠠⡴⠶⠟⠊⠔⣰⠿⠏⠱⣈⠻⣼⣿⣿⢾⣿⣿⣿⣿⣽⣳⢾⣽⣿⣿⣿⡄⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠷⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠈⠀⠀⠀⠡⣀⣻⣿⣿⣯⣿⣿⣿⣿⡷⣯⣟⡿⣾⣿⣿⣿⣷⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡃⠘⢿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣶⣿⣿⣟⣷⣿⣿⣿⣿⣽⣳⣯⣿⣿⣿⣿⣿⣿⡄
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣇⠀⠈⢿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣼⣿⣿⢿⡼⣿⣿⣿⣿⢧⣏⣿⣹⣿⣿⣿⣿⣿⣿⡇
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⢤⣦⣼⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⢢⣿⣿⡿⣯⣟⣿⣿⣿⣿⣟⡿⣾⣟⣿⣿⣿⣿⣿⢿⣿⡇
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠠⠌⠻⣿⣿⣆⠀⠀⠀⠤⡀⠀⢀⠠⠀⡀⢀⠠⢄⣧⣿⣿⣿⣟⡷⣿⣻⣿⣿⣿⣽⣻⡷⣿⣿⣿⣿⣿⡿⣿⣿⡇
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠄⢃⠐⡀⠻⣿⣧⣄⠀⠀⠙⠦⣄⢂⠡⠐⡠⣚⣾⣿⣿⣿⣻⢾⣟⣿⣿⣿⣿⡷⣯⣿⣽⣿⣽⣿⣿⣿⣿⣿⣿⠃
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠈⠤⡀⠀⠐⢻⡽⠿⣷⣤⠀⠀⠀⠀⢂⠱⣰⢻⣿⣿⣟⣳⢯⣿⣾⣿⣿⣿⣿⣟⣿⣞⣷⣿⣿⣿⣿⣿⣿⣿⡿⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠈⢼⠃⠀⠀⢨⣿⣷⣌⠏⡄⠡⢌⣲⣌⠙⠤⢋⣾⡿⡽⣯⣟⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣯⣿⣿⡿⠃⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡅⠀⠀⠀⠀⣰⣿⣿⣿⣯⡙⣿⢆⣻⣿⡆⠌⡱⢾⣱⢟⣳⣟⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠁⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣾⣿⡇⠀⠀⠀⢠⣿⣿⣿⣿⣿⣶⢡⢋⡴⣿⣿⠀⠱⣯⢇⣻⡼⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀
⠀⠀⠀⠀⢀⣀⣤⣴⣶⣿⣿⣿⣿⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣷⣾⣷⣽⣿⠀⠣⡜⢭⣖⡻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀
⠀⣠⣶⡿⢟⣿⣿⣿⣿⣿⣿⢿⣿⡄⠀⠀⢠⣿⣿⣿⣿⡿⢿⡏⢩⠉⡉⢻⣿⡅⠣⡜⣣⢞⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀
⢰⣿⣿⣿⣿⣿⠿⠛⠉⠉⠀⢸⣿⡇⣾⣄⣿⣿⣿⣿⡯⢁⠃⠌⠂⠡⠀⠈⣿⣯⠐⡥⢳⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠉⠉⠉⠉⠀⠀⠀⠀⠀⢀⣾⡿⠁⡜⣿⣿⣿⣿⡿⠃⠁⠀⠀⠀⠀⠀⠐⣿⠃⡜⡸⢧⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢀⣀⣤⣤⣶⡿⢋⠀⣹⣿⣿⣿⣿⣯⣥⣤⣤⣤⣤⣤⣤⣤⣼⣿⢐⡸⣓⢯⣿⣿⣿⣿⣿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣠⣴⣶⣿⢿⣿⣿⡿⠋⢁⢂⢐⣾⡿⠁⠉⠉⠉⠉⠉⠉⠉⠉⠙⠛⠛⠻⢿⣦⣱⡹⣾⣿⣿⣿⠏⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣾⣿⣿⢏⣠⣾⠿⠋⠀⠀⠀⣦⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡶⢿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠘⢿⣿⡟⣯⣀⠀⢀⣤⣰⣾⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣷⣯⣾⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠘⣿⣷⣸⣿⣶⣾⣼⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⢸⣿⣻⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠙⠛⠛⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡿⢢⢷⣿⣿⡗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⡏⢳⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡿⢈⠱⣾⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣇⢀⣲⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣯⣅⣺⣿⣿⠿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⡛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢤⡴⣿⡶⣤⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
