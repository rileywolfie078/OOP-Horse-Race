#include <iostream>
#include <random>
#include "horse.h"

std::random_devide rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
	Horse::position = 0;
	Horse::index = 0;
	Horse::trackLength = 20;
}

void Horse::init(int index, int trackLength){
	Horse::position = 0;
	Horse::index = index;
	Horse::trackLength = trackLength;
}

void Horse::advance(){
	int coin = dist(rd);
	Horse::position += coin;
}

void Horse::printLane(){
	for (int pos = 0; pos < Horse::trackLength; pos++){
		if (pos == Horse::position){
			std::cout << Horse::index;
		} else {
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

bool Horse::isWinner(){
	bool result = false;
	if (Horse::position >= Horse::trackLength){
		result = true;
		std::cout << "Horse Number" << Horse::index << "won the race!!!" << std::endl;
	}
	return result;
}

