#/bin/bash

start=$(date +%s%N);


echo "**********Choose any option from any of these*********** ";
echo "1.Enter 1 to search for age:";
echo "2.Enter 2 to search for sex:";
echo "3.Enter 3 to search for cp:";
echo "4.Enter 4 to search for trtbps:";
echo "5.Enter 5 to search for chol:";
echo "6.Enter 6 to search for fbs:";
echo "7.Enter 7 to search for restcg:";
echo "8.Enter 8 to search for thalachh:";
echo "9.Enter 9 to search for exng:";
echo "10.Enter 10 to search for oldpeak:";
echo "11.Enter 11 to search for slp:";
echo "12.Enter 12 to search fcor caa:";
echo "13.Enter 13 to search for thall:";
echo "14.Enter 14 to search for output:";

echo " SORT FROM HERE ";

echo "15.Enter 15 to sort for  column 1:";
echo "16.Enter 16 to sort for  column 2:";
echo "17.Enter 17 to sort for  column 3:";
echo "18.Enter 18 to sort for  column 4:";
echo "19.Enter 19 to sort for  column 5:";
echo "20.Enter 20 to sort for  column 6:";
echo "21.Enter 21 to sort for  column 7:";
echo "22.Enter 22 to sort for  column 8:";

echo "23.Enter 23 to sort for  column 9:";
echo "24.Enter 24 to sort for  column 10:";
echo "25.Enter 25 to sort for  column 11:";
echo "26.Enter 26 to sort for  column 12:";
echo "27.Enter 27 to sort for  column 13:";
echo "28.Enter 28 to sort for  column 14:";

echo "29.Enter 29 to sort for  column 1  in reverse order:";


echo "30.Enter 30 to sort for  column 2  in reverse order:";






echo "Please put your desirable option: "
read choice;



if (($choice  == 1))
then
echo "Enter the age: (e.g.50) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$1 == patt' heart.csv

elif(($choice  == 2))
then
echo "Enter the sex: (e.g. 0 or 1) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$2 == patt' heart.csv

elif(($choice  == 3))
then
echo "Enter the CP: (e.g. 0 or 1) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$3 == patt' heart.csv

elif(($choice  == 4))
then
echo "Enter the trtbps: (e.g. 3) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$4 == patt' heart.csv

elif(($choice  == 5))
then
echo "Enter the chol: (e.g. 0 or 1) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$5 == patt' heart.csv

elif(($choice  == 6))
then
echo "Enter the fbs: (e.g. 0 or 1) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$6 == patt' heart.csv

elif(($choice  == 7))
then
echo "Enter the restecg: (e.g. 0 or 1) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$7 == patt' heart.csv

elif(($choice  == 8))
then
echo "Enter the thalachh: (e.g. 150) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$8 == patt' heart.csv

elif(($choice  == 9))
then
echo "Enter the exng: (e.g. 0 or 1) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$9 == patt' heart.csv

elif(($choice  == 10))
then
echo "Enter the oldpeak: (e.g. 1.4) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$10 == patt' heart.csv

elif(($choice  == 11))
then
echo "Enter the slp: (e.g. 2) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$11== patt' heart.csv

elif(($choice  == 12))
then
echo "Enter the caa: (e.g. 1) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$12 == patt' heart.csv

elif(($choice  == 13))
then
echo "Enter the thall: (e.g. 2) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$13 == patt' heart.csv

elif(($choice  == 14))
then
echo "Enter the output: (e.g. 0 or 1) number to search:";read pattern; awk -v patt="$pattern" -F ',' '$14 == patt' heart.csv


elif (($choice ==15))
then
echo " you can the  sorted column 1 :";sort -t "," -k1 heart.csv


elif (($choice ==16))
then
echo " you can the  sorted column 2 :";sort -t "," -k2 heart.csv

elif (($choice ==17))
then
echo " you can the  sorted column 3 :";sort -t "," -k3 heart.csv

elif (($choice ==18))
then
echo " you can the  sorted column 4 :";sort -t "," -k4 heart.csv

elif (($choice ==19))
then
echo " you can the  sorted column 5 :";sort -t "," -k5 heart.csv


elif (($choice ==20))
then
echo " you can the  sorted column 6 :";sort -t "," -k6 heart.csv

elif (($choice ==21))
then
echo " you can the  sorted column 7 :";sort -t "," -k7 heart.csv

elif (($choice ==22))
then
echo " you can the  sorted column 8 :";sort -t "," -k8 heart.csv


elif (($choice ==23))
then
echo " you can the  sorted column 9 :";sort -t "," -k9 heart.csv


elif (($choice ==24))
then
echo " you can the  sorted column 10 :";sort -t "," -k10 heart.csv

elif (($choice ==25))
then
echo " you can the  sorted column 11 :";sort -t "," -k11 heart.csv

elif (($choice ==26))
then
echo " you can the  sorted column 12 :";sort -t "," -k12 heart.csv


elif (($choice ==27))
then
echo " you can the  sorted column 13 :";sort -t "," -k13 heart.csv

elif (($choice ==28))
then
echo " you can the  sorted column 14 :";sort -t "," -k14 heart.csv



elif (($choice ==29))
then
echo " you can the  sorted column 1  in reverse order :";sort -t "," -k1 -r heart.csv


elif (($choice ==30))
then
echo " you can the  sorted column 2  in reverse order :";sort -t "," -k2 -r heart.csv

fi

end=$(date +%s%N)


echo Execution time was  " 0.$(($end - $start))" second


