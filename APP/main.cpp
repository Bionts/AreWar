#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>
#include <SDL2/SDL.h>
#include "SDL_net.h"
#include "call/textsdl.cc"

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char* argv[])
{
Textsdl* bont=new Textsdl();

bool a= bont->init("AreWar",0,0,480,800,SDL_WINDOW_SHOWN);	
	return 0;
	}