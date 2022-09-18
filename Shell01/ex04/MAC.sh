ifconfig -a ether | grep "ether" | cut -c 7- | tr -d '[:blank:]'
