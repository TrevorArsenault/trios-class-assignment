#include <iostream>
#include <string>
#include <vector>


using namespace std;



//Represent an item - done
//




class InventoryItem
{
public:
    float cost;
    std::string name;
    int quantity;
};


	int main()
	{


		InventoryItem playerItems[3];



		playerItems[0].cost = 5;
		playerItems[0].name = "Dagger";
		playerItems[0].quantity = 1;



		playerItems[1].cost = 25;
		playerItems[1].name = "Ruby";
		playerItems[1].quantity = 1;



		playerItems[2].cost = 10;
		playerItems[2].name = "Medicine";
		playerItems[2].quantity = 1;



		InventoryItem npcItems[3];



		npcItems[0].cost = 5;
		npcItems[0].name = "Sword";
		npcItems[0].quantity = 3;



		npcItems[1].cost = 30;
		npcItems[1].name = "Diamond";
		npcItems[1].quantity = 2;



		npcItems[2].cost = 20;
		npcItems[2].name = "Gun";
		npcItems[2].quantity = 1;



		int wallet = 10



		cout << "Merchant Item : " << npcItems[0].name << "\n";
		cout << "Cost of Item : " << npcItems[0].cost << "\n\n";
		cout << "Quantity of Item(s) : " << npcItems[0].quantity << "\n\n";

		cout << "Merchant Item : " << npcItems[1].name << "\n";
		cout << "Cost of Item : " << npcItems[1].cost << "\n\n";
		cout << "Quantity of Item(s) : " << npcItems[1].quantity << "\n\n";

		cout << "Merchant Item : " << npcItems[2].name << "\n";
		cout << "Cost of Item : " << npcItems[2].cost << "\n\n";
		cout << "Quantity of Item(s) : " << npcItems[2].quantity << "\n\n";
		



		

		return 0;












































		
	}

