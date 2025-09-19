#include <string>
#include <iostream>
#include "horse.h"

Horse::Horse(){
  Horse::position = 0;
} // end constructor

Horse::Horse(){
  Horse::index = 0;
} // end constructor

Horse::Horse(){
  Horse::trackLength = 15;
} // end constructor

void Horse::init(std::int index, std::int trackLength){
  Horse::index = index;
  Horse::trackLength = trackLength;
} //end init

void Horse::advance(){
  Horse::position = position += coin;
} //end advance

void Horse::printLane(){
  for (int index = 0; index < trackLength; index++){
    if (position == index){
      std::cout << index;
    } // end if
    else {
      std::cout << ".";
    } // end else
} //end printLane

std::bool Horse::isWinner(){
  bool result = false;
    if (horses[horseNum] == TRACK_LENGTH){
      result = true;
      std::cout << "Horse " << horseNum << " wins!!!" << std::endl;
    } // end if
  return result;
} // end getName
