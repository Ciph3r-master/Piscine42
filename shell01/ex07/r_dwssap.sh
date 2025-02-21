cat /etc/passwd | tr -d "//" |  sed 's/:.*//' | awk 'NR % 2 == 0' | rev | sort -r | awk 'NR >= $FT_LINE1 && NR <= $FT_LINE2' | tr '\n' ", " | sed 's/.$/./'
