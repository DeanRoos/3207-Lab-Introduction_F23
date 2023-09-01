#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){

  // rang()/26 will generate an int between 0 and 25, and adding that to 'A' will give us each of the 26 upper case letters of the alphabet
  return 'A' + (rand()%26);

}