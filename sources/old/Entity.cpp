#include "Entity.h"

Entity::Entity(float x, float y, float w, float h) {
	hitbox.x = x;
	hitbox.y = y;
	hitbox.w = w;
	hitbox.h = h;
}

Entity::~Entity() {
	//delete hitbox;
}

void Entity::setTexture(LTexture* t) {
	texture = t;
}

void Entity::render(float cameraX, float cameraY) {
	texture->render(cameraX, cameraY);
}

float Entity::getX() {
	return hitbox.x;
}

float Entity::getY() {
	return hitbox.y;
}

int Entity::getWidth() {
	return hitbox.w;
}

int Entity::getHeight() {
	return hitbox.h;
}
/*
bool Entity::collidedWith(Entity *other) {
	return SDL_HasIntersection(hitbox, other->hitbox);
}
*/