#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size() {
	answer = wide * height;
}

void Rectangle::Draw() {
	printf("矩形の面積:%d\n",answer); 
}
