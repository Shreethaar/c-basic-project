#include <stdio.h>
#include "warehouse.h"

int main() {
	Item warehouse[MAX_ITEMS];
	int numItems=0;
	int choice;

	do {
		printf("\nWareshouse Materials Recorder\n");
		printf("1. Add Item\n");
		printf("2. Remove Item\n");
		printf("3. Display Warehouse\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				addItem(warehouse,&numItems);
				break;
			case 2:
				removeItem(warehouse,&numItems);
				break;
			case 3:
				displayWarehouse(warehouse,numItems);
				break;
			case 4:
				printf("Exiting...\n");
				break;
			default:
				printf("Choice Input Invalid, recheck again");
		}
	}
	while(choice!=4);
	return 0; //exit gracefully
}

