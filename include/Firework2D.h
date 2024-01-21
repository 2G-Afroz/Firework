#ifndef FIREWORK2D_H
#define FIREWORK2D_H

#include "../include/Particle2D.h"


class Firework2D : public Particle2D {
	private:
		bool exploder;
		Sound wistle, brust;
		float vol;
	public:
		Firework2D(Vector2 position, Vector2 velocity, Vector2 acceleration, Color color , int size, bool exploder, Sound wistle, Sound brust);

		void update();
};

#endif