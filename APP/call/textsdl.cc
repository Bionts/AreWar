#include "textsdl.h"
#include "SDL_ttf.h"

bool Textsdl::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{

 // attempt to initialize SDL

 if(SDL_Init(SDL_INIT_EVERYTHING) == 0)

 {

 std::cout << "SDL init success\n";

 // init the window

 wintext = SDL_CreateWindow(title, xpos, ypos,width, height, flags); 
	if(wintext != 0) // window init success

 {

 std::cout << "window creation success\n";

 rentext= SDL_CreateRenderer(wintext, -1, 0);

 if(rentext != 0) // renderer init success

 {

 std::cout << "renderer creation success\n";

 SDL_SetRenderDrawColor(rentext, 

 255,255,255,255);

 }

 else

 {

 std::cout << "renderer init fail\n";

 return false; // renderer init fail

 }

 }

 else

 {

 std::cout << "window init fail\n";

 return false; // window init fail

 }

 }

 else

 {

 std::cout << "SDL init fail\n";

 return false; // SDL init fail

 }

 std::cout << "init success\n";

 return true;

} ;
