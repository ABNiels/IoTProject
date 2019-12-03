#!/bin/bash
temp=( $(echo "$QUERY_STRING" | grep -oP "(?<==).*(?=&)|(?<==).*(?=$)") )
cmd="${temp[0]}"
val="${temp[1]}"
printf "Content-type: text/html\n\n"
echo "ledBlink $cmd $val"
ledBlink $cmd $val
