#include <stdio.h>
#include <string.h>
#include "warehouse.h"

void addItem(Item warehouse[], int *numItems) {
	if(*numItems < MAX_ITEMS) {
		printf("Enter name of item:");
		scanf("%s",warehouse[*numItems].name);
		printf("Enter quantity:");
		scanf("%d",&warehouse[*numItems].quantity);
		printf("Enter location:");
		scanf("%s",warehouse[*numItems].location);
		(*numItems)++;
	}
	else {
		printf("Warehouse is full.\n");
	}

}

void removeItem(Item warehouse[], int *numItems) {
	char itemName[MAX_NAME_LENGTH];
	printf("Enter te name of the item to remove:\n");
	scanf("%s",itemName);
	for(int i=0;i<*numItems;i++) {
		if(strcmp(warehouse[i].name,itemName)==0) {
			(*numItems)--;
			warehouse[i]=warehouse[*numItems];
			printf("Item successfully removed.\n");
			return;
		}
	}
	printf("Item not found.\n");
}

void displayWarehouse(Item warehouse[], int numItems) {
	printf("Warehouse Inventory:\n");
	printf("%-20s %-10s %-10s\n","Name","Quantity","Location");
	for(int i=0;i<numItems;i++) {
		printf("%-20s %-10d %-10s\n", warehouse[i].name, warehouse[i].quantity, warehouse[i].location);
	}
}

