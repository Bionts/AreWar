#include "textsdl.h"
void textsdl::process()
{
	wintext=SDL_CreateWindow("arewar",0,0,480,800,SDL_WINDOW_SHOWN);
if(wintext != 0 )
{	rentext=SDL_CreateRenderer(wintext,-1,);
}
	
	}