#include <iostream>
#include <fstream>
#include <string>
#include "voxel.h"
#include "sculptor.h"
using namespace std;

int main(){
  
    Sculptor XBOXSS(15,60,35);
  // P1
    XBOXSS.setColor(1,1,1,0.75);
    XBOXSS.putSphere(4,49,29,5);
    XBOXSS.cutBox(0,15,30,60,24,29);
  // P2
    XBOXSS.setColor(1,1,1,1);
    XBOXSS.putBox(0,13,0,55,0,29);
    XBOXSS.cutEllipsoid(0,38,14,1,13,13);
    XBOXSS.setColor(0,0,0,1);
    XBOXSS.putEllipsoid(0,38,14,1,13,13);
  // P3
    XBOXSS.cutBox(3,4,50,51,28,29);
    XBOXSS.setColor(0.7,0.7,0.7,1);
    XBOXSS.putBox(3,4,50,51,28,29);
  // P4
    XBOXSS.cutBox(2,3,49,50,28,29);
    XBOXSS.setColor(0.7,0.7,0.7,1);
    XBOXSS.putBox(2,3,49,50,28,29);
  // P5
    XBOXSS.cutBox(4,5,49,50,28,29);
    XBOXSS.setColor(0.7,0.7,0.7,1);
    XBOXSS.putBox(4,5,49,50,28,29);
  // P6
    XBOXSS.cutBox(3,4,48,49,28,29);
    XBOXSS.setColor(0.7,0.7,0.7,1);
    XBOXSS.putBox(3,4,48,49,28,29);
  // P7
    XBOXSS.cutBox(9,11,4,8,25,29);
    XBOXSS.setColor(0,0,0,1);
    XBOXSS.putBox(9,10,4,8,25,29);
  // P8
    XBOXSS.cutBox(9,11,9,11,25,29);
    XBOXSS.setColor(0,0,0,1);
    XBOXSS.putBox(9,11,9,11,25,29);

  XBOXSS.writeOFF((char*)"XBOX_SERIES_S.off");

}
