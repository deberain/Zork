#ifndef ITEM_H_
#define ITEM_H_

#include <map>
#include <string>
#include <iostream>
using namespace std;

enum Type {Weapon = 0, Armor = 1, Accessory = 2, Consumable = 3, KeyItem = 4};

class Item {
private:
	string description;
	string longDescription;
    Type type;
	int weightGrams;
	float value;
    bool equipped = false;
    float ATK = 0;
    float DEF = 0;
    float HP = 0;
    string info;
public:
    Item () {};
    Item (string description, string info, Type type, int inWeight, float inValue, float HP, float ATK, float DEF);
    Item(const Item& oldItem);
    Item (string description);
	string getShortDescription();
    string getLongDescription();
    string getTypeAsString();
	int getWeight();
	void setWeight(int weightGrams);
    float getValue() { return value;};
	void setValue(float value);
    float getATK() { return ATK; };
    void setATK(float ATK) { this->ATK = ATK; };
    float getDEF() { return DEF; };
    void setDEF(float DEF) { this->DEF = DEF; };
    float getHP() { return HP; };
    void setHP(float HP) { this->HP = HP; };
    bool getEquipped() { return equipped; };
    void setEquipped(bool equipped) { this->equipped = equipped; };
    Type getType() { return type; };
    string getVendorDescription();
    string getItemInfo();
};

#endif /*ITEM_H_*/
