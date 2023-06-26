
#include <iostream>
#include <string>
#include <vector>


	using namespace std;


	//Represent an item - done
	

	class InventoryItem
	{
	private:
		float cost;
		std::string name;
		int quantity;


	public:

		

		InventoryItem()
		{}


		InventoryItem(float _cost, std::string _name, int _quantity)
		{
			cost = _cost;
			name = _name;
			quantity = _quantity;
		}

		void ChangeQuantity(int newQuantity)
		{
			quantity = newQuantity;
		}
	};


	int main()
	{
		InventoryItem playerItems[3];


		playerItems[0] = InventoryItem(5.0f, "Dagger", 1);

		playerItems[1] = InventoryItem(25.0f, "Ruby", 1);

		playerItems[2] = InventoryItem(10.0f, "Medicine", 1);
	

		InventoryItem npcItems[3];


		npcItems[0] = InventoryItem(5.0f, "Sword", 3);
	
		npcItems[1] = InventoryItem(30.0f, "Diamond", 3);
	
		npcItems[2] = InventoryItem(20.0f, "Gun", 1);

		
	

		float playerWalletAmount = 10.0f;

		char choice;
		 

		

		do
		{
			cout << "Welcome to the Merchants Inventory" << endl;
			cout << "How can I help you?" << endl;
			cout << "[b]uy   [s]ell   [l]eave" << endl;


			cin >> choice;


			if (choice == 'b')
			{
				cout << "What would you like to purchase?" << endl;
				cout << "Merchant Item : " << endl;
				cout << " [a] Sword......$5" << endl; 
				cout << " [b] Diamond....$30" << endl;
				cout << " [c] Gun........$20" << endl;


				cin >> choice; 
				switch (choice)
				{
				case 'a':
					cout << "Item Purchased" << endl;
					break;
				case 'b':
					cout << "Item Purchased" << endl;
					break;
				case 'c':
					cout << "Item Purchased" << endl;
					break;
				default:
					cout << "Sold Out!" << endl;

				}
			
				
			}
			else if (choice == 's')
			{
				cout << "What would you like to sell?" << endl;
				cout << "Players Item : " << endl;
				cout << "[a] Dagger.....$5" << endl;
				cout << "[b] Ruby.......$25" << endl;
				cout << "[c] Medicine...$10" << endl;

				cin >> choice;
				switch (choice)
				{
				case 'a':
					cout << "Item Sold" << endl;
					break;
				case 'b':
					cout << "Item Sold" << endl;
					break;
				case 'c':
					cout << "Item Sold" << endl;
					break;
				}

			}
			else (choice == 'l')
		   ;{
				return 0;
			}


		} while (choice != 'l');


		return 0;
	}