#ifndef _MODEL_HPP
#define _MODEL_HPP


extern const int width;
extern const int height;


class Model{
	public:
		// called by game start
		virtual void initial() = 0;
		// called by every update time
		// GameMap is current game status
		// return integer array is as same as the key_state array
		virtual int *update(char GameMap[80][26]) = 0;
};

#endif