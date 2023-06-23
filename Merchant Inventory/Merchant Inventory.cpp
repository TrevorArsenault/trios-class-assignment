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
		int choice;




		do
		{
			cout << "\nMerchants Inventory\n\n";
			cout << "0 - Quit\n";
			cout << "1 - Buy\n";
			cout << "2 - Sell\n";
			

			cout << "Choice: ";
			cin >> choice;

			switch (choice)
			{
			case 0:
				cout << "Good-bye.\n";
				break;
			case 1:
				cout << "What would you like to buy?" << std::endl;
				cin >> wallet;
				break;
			case 2:

				cout << "What would you like to sell? " << std::endl;
				cin >> wallet;

		
				break;
			
			default:
				cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
			}
		} while (choice != 0);

		return 0;
	}

