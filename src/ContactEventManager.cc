#include "ContactEventManager.hh"
#include "GameObject.hh"
#include<iostream>

ContactEventManager::ContactEventManager(std::vector<GameObject*>*& gameObkectsDeleteList;)
{
   this->gameObkectsDeleteList = gameObkectsDeleteList;
}

ContactEventManager::~ContactEventManager()
{
}

void ContactEventManager::BeginContact(b2Contact *contact)
{
  //b2ContactListener::BeginContact(contact);

  GameObject* goA{(GameObject*) contact->GetFixtureA()->GetBody()->GetUserData().pointer};
  GameObject* goB{(GameObject*) contact->GetFixtureB()->GetBody()->GetUserData().pointer};

  if(goA && goB)
  {
    if(goB->GetTagName().compare("chest") == 0)
    {
      //std::cout << "Destroy chest" << std::endl;
      gameObjectDeleteList->push_back(goB);
    }
  }
}
void ContactEventManager::EndContact(b2Contact *contact)
{
  //b2ContactListener::EndContact(contact);
}