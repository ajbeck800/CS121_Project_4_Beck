# CS121_Project_4_Beck
## (lab) OOP horse race
```
constant integer NUM_HORSES
constant integer TRACK_LENGTH
```

### main():
```
make an array of 5 0 values, call it horses
set keepGoing to true

while keepGoing:
    run through each horse in array:
        advance that horse
        print that horse's lane
        if that horse won:
            set keepGoing to false
        ask user for input to start next turn
```

### function advance (integer horseNum, array horses):
```
random number generator that stores 1 or 0 in coin
add coin to horse's position value in the array
```

### function printLane(integer horseNum, array horses):
```
for i from zero to TRACK_LENGTH:
    if current loop index is equal to the horse's value:
        print the horseNum
    else:
        print .
```

### function isWinner(integer horseNum, array horses):
```
result = false
if a horse's value is equal to TRACK_LENGTH:
    result = true
    print Horse {horseNum} wins!!!
return result
```