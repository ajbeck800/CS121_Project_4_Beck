# CS121_Project_4_Beck
## (lab) OOP horse race

constant integer NUM_HORSES\
constant integer TRACK_LENGTH

### main():
&nbsp;&nbsp;make an array of 5 0 values, call it horses\
&nbsp;&nbsp;set keepGoing to true

&nbsp;&nbsp;while keepGoing:\
&nbsp;&nbsp;&nbsp;&nbsp;run through each horse in array:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;advance that horse\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print that horse's lane\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if that horse won:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;set keepGoing to false\
&nbsp;&nbsp;&nbsp;&nbsp;ask user for input to start next turn

### function advance (integer horseNum, array horses):
&nbsp;&nbsp;random number generator that stores 1 or 0 in coin\
&nbsp;&nbsp;add coin to horse's position value in the array

### function printLane(integer horseNum, array horses):
&nbsp;&nbsp;for i from zero to TRACK_LENGTH:\
&nbsp;&nbsp;&nbsp;&nbsp;if current loop index is equal to the horse's value:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print the horseNum\
&nbsp;&nbsp;&nbsp;&nbsp;else:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print .

### function isWinner(integer horseNum, array horses):
&nbsp;&nbsp;result = false\
&nbsp;&nbsp;if a horse's value is equal to TRACK_LENGTH:\
&nbsp;&nbsp;&nbsp;&nbsp;result = true\
&nbsp;&nbsp;&nbsp;&nbsp;print Horse {horseNum} wins!!!\
&nbsp;&nbsp;return result