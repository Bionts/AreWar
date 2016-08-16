#ifndef _TEXTSDL_
#define _TEXTSDL_
class textsdl{
	public:
	char text1[250];
	void process();
	void process2();
	private:
	SDL_Window* wintext;
	SDL_Renderer* rentext;
	SDL_Surface* surtext;
	SDL_Texture* textext;
	std::string text2;
	};
#endif