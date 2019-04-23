#include "Player.h"
#include "InventoryComponent.h"
#include "CollisionComponent.h"

int main()
{
	Player p1{};

    p1.AddComponent<InventoryComponent>("MainInventory");
    p1.AddComponent<InventoryComponent>("BonusInventory");
    p1.AddComponent<CollisionComponent>("Collision");

    p1.Update();

    p1.RemoveComponent("BonusInventory");

    p1.Update();

	return 0;
}
