

#Author: Atharva Marathe

#!/bin/bash
echo Enter the address of the file
read INPUT
input=$INPUT
while IFS= read -r line
do
  echo "$line"
done < "$input"
