#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed '1!n;d' | sed -e 's/:.*//' | rev | sort -r | sed -n "$FT_LINE1 $FT_LINE2 p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed 's/$/./' | tr -d '\n'
