/*
File Name: inventory.h
Author: Wesley Catlett
Purpose: Contains structure definitions for Ore and Inventory.
Version History: Last updated on 03/27/25
*/


struct ore{
  char oreType[20];
  int quantity;
  char units[20];
};
typedef struct ore Ore;

typedef struct inventory{
    Ore gold;
    Ore platinum;
    Ore tritium;
} Inventory;
