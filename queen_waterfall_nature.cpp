#include <iostream>
#include <vector>
#include <map>

using namespace std;

class AntiqueStore {
	public:
		vector<string> inventory;
		map<string, int> priceList;

		void addInventory(string item) {
			inventory.push_back(item);
		}

		void addPrice(string item, int price) {
			priceList[item] = price;
		}

		void listInventory() {
			for (auto const &item : inventory) {
				cout << item << endl;
			}
		}

		void listPrices() {
			for (auto const &entry : priceList) {
				cout << entry.first << " - $" << entry.second << endl;
			}
		}
};

int main() {
	AntiqueStore store;

	store.addInventory("Lion door knocker");
	store.addInventory("Vintage typewriter");
	store.addInventory("Antique clock");
	store.addInventory("Antique wooden carvings");
	store.addPrice("Lion door knocker", 50);
	store.addPrice("Vintage typewriter", 75);
	store.addPrice("Antique clock", 100);
	store.addPrice("Antique wooden carvings", 150);

	cout << "Welcome to my Antique Store!" << endl;
	cout << "Today we offer the following:" << endl;
	store.listInventory();
	cout << "Prices are as follows:" << endl;
	store.listPrices();

	return 0;
}