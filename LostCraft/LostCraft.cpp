// LostCraft.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "AdvScenario.h"


int _tmain(int argc, _TCHAR* argv[])
{
<<<<<<< HEAD
	Scenario s;
	s.myHero.setName();
=======
	AdvScenario s;
	((Hero *)s.rHero)->setName();
>>>>>>> polymorphism
	s.state = true;
	while(s.state)
	{
		s.choice();
		s.round = 0;
		s.state = s.challenge();
	}
	PC;
	return 0;
}

