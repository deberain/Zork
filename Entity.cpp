#include "Entity.h"

//Enter Methods for Entity
Entity::Entity(string name, string description, int HP, int ATK, int DEF, float ACC, float CRT, int KG = 0, float grams = 0)
    :name(name), description(description), HP(HP), ATK(ATK), DEF(DEF), ACC(ACC), CRT(CRT)
{
    this->mass.setWeight(KG, grams);
}
