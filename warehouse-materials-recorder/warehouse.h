#ifndef WAREHOUSE_H
#define WAREHOUSE_H


#define MAX_NAME_LENGTH 50
#define MAX_LOCATION_LENGTH 20
#define MAX_ITEMS 100

typedef struct {
	char name[MAX_NAME_LENGTH];
	int quantity;
	char location[MAX_LOCATION_LENGTH];
} Item;

void addItem(Item warehouse[], int *numItems);
void removeItem(Item warehouse[], int *numItems);
void displayWarehouse(Item warehouse[], int numItems);

#endif

