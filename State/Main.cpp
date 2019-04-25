#include <conio.h>

#include "Player.h"

int main()
{
	Player p1{};
	int value;

    while ((value = _getch()) != 27)
    {
		if (value == 32)
			p1.DoJump();
		else if (value == 'a')
			p1.Idle();
		else if (value == 'e')
			p1.DoAttack();
    }

    return 0;
}
