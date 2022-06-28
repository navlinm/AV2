#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

Sculptor::Sculptor(int _nx, int _ny, int _nz){
  nx=_nx;
  ny=_ny;
  nz=_nz;
  r=0.5;
  g=0.5; 
  b=0.5;
  a=0.5;
  // Alocação dinâmica da matriz 3d
  v = new Voxel**[nx];
   for (int i=0; i<nx; i++){
    v[i] = new Voxel*[ny];
    for (int j=0; j<ny; j++){
      v[i][j]= new Voxel[nz];
    }
  }
}
Sculptor::~Sculptor(){
  for(int i=0; i<nx; i++){
    for (int j=0; j<ny; j++){
      delete[] v[i][j];
    }
  }
  for (int i=0; i<nx; i++){
    delete[] v[i];
  }
  delete[] v;
  nx=0;
  ny=0;
  nz=0;
}
void Sculptor::setColor(float r1, float g1, float b1, float alpha){
  r=r1;
  g=g1;
  b=b1;
  a=alpha;
}
void Sculptor::putVoxel(int x, int y, int z){
  if(x>=0 && y>=0 && z>=0 && x<=nx && y<=ny && z<=nz){
    v[x][y][z].isOn=true;
    v[x][y][z].r=r;
    v[x][y][z].g=g;
    v[x][y][z].b=b;
    v[x][y][z].a=a;
  }
}
void Sculptor::cutVoxel(int x, int y, int z){
  v[x][y][z].isOn=false;
}
void Sculptor::putBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_){
  for(int x=x0_; x<x1_; x++){
   for (int y=y0_; y<y1_; y++){
      for (int z=z0_; z<z1_; z++){
        v[x][y][z].isOn=true;
        v[x][y][z].r=r;
        v[x][y][z].g=g;
        v[x][y][z].b=b;
        v[x][y][z].a=a;
      }
    }
  }
}
