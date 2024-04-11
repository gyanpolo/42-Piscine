cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | rev | sort -r | sed 's/.*://' |  tr '\n' ', '
