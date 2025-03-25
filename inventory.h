struct ore{
  char oreType[20];
  int quantity;
  char units[20];
} gold,platinum,tritium;
typedef struct ore Ore;

typedef struct inventory{
    Ore gold;
    Ore platinum;
    Ore tritium;
} Inventory;
