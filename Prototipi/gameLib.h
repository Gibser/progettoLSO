#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include <unistd.h>
#define MAX_USERS 8

struct cell{
  int playerSD; //Socket descriptor
  int isWareHouse;
  int isObstacle;
  char object;
  
};

struct mapObjects{
    int n_obstacles;
    int n_items;
    int n_warehouses;
};


int randNumb();
void initializeMatrix(struct cell **map,int rows,int cols);
void createMap(struct mapObjects* info,int rows,int cols,struct cell **map);
void printMatrix();
int min(int rows,int cols);