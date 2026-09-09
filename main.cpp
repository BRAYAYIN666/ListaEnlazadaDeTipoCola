#include <iostream>
#include "Queue.h"

int main() {
	Queue<int> queue;

	if (queue.isEmpty()) {
		std::cout << "¿Esta vacia? Si" << std::endl;
	} else {
		std::cout << "¿Esta vacia? No" << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		queue.push(i);
	}
	

	std::cout << "Elemento al frente (peek): " << queue.peek() << std::endl;

	std::cout << "Sacando elementos con pop:" << std::endl;
	while (!queue.isEmpty()) {
		int valor = queue.pop();
		std::cout << "  -> " << valor << std::endl;
	}

	if (queue.isEmpty()) {
		std::cout << "¿Esta vacia ahora? Si" << std::endl;
	} else {
		std::cout << "¿Esta vacia ahora? No" << std::endl;
	}

	try {
		queue.pop();
	} catch (const std::runtime_error &e) {
		std::cout << "Error capturado: " << e.what() << std::endl;
	}
    return 0;
}