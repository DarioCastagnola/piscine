cat /etc/passwd | grep -v "^#" | awk 'NR % 2 == 0 {print $1}' FS=":" | rev | sort -r | head -$FT_LINE2 | tail +$FT_LINE1 | xargs | awk '{$1=$1}; {printf $0 }; END {printf "."}' OFS=", "
