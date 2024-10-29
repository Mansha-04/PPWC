In this code we are taking a number from user input
Then we check each digit of the number
If the digit is 0 we change it to 1 and vice versa
In order to do this, we have taken variables intpart and decipart to separate the number's integer and decimal parts respectively
We also take the help of variables such as res, place and div to help with our code's logic. Initially res=0,place=1 and div=10
Then we shall check the sign of the number. Here we are also using boolean variable b such that b=true when the number is negative
Then we check whether intpart is 0 or not. If it is 0 we set res to 1
Then we check each digit in intpart and swap the 0 and 1 in it (if any)
Next we do the same thing for decipart
The res variable is used to store our formatted number 
The place variable denotes the place value of each digit of the number extracted using the while loop 
The div variable is used to place the extracted digits of decipart into their appropriate place
Now we check whether b is true or false
If b is true the input number is negative then the formatted number will also be printed with a minus sign
