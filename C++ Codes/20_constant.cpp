/* When you do not want others (or yourself) to change 
existing variable values, use the const keyword 
(this will declare the variable as "constant", which means 
unchangeable and read-only): */

const int myNum = 15;  // myNum will always be 15
//myNum = 10;  // error: assignment of read-only variable 'myNum'

const int minutesPerHour = 60;
const float PI = 3.14;

const int minutesPerHour = 60; // it will work

/* const int minutesPerHour;
minutesPerHour = 60; // error
it will not work */
