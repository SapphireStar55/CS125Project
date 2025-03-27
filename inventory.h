/*
File Name: inventory.h
Author: Wesley Catlett
Purpose: Contains the structure and type definitions for Ore and Inventory.
Version History: Last updated on 03/27/25
*/

//Ore definition
typedef struct ore{
  char oreType[20];
  int quantity;
  char units[20];
} Ore;

//Inventory definition
typedef struct inventory{
    Ore gold;
    Ore platinum;
    Ore tritium;
} Inventory;
