#include "Biom.h"
#include <random>
#include <time.h>

char* Biom::getTypeTerrain() {
	return *type_terrain;
}

int Biom::getKolSpawnResource() {
	return kol_spawn_resources;
}

int Biom::getKolBuildings() {
	return kol_buildings;
}

void Biom::setTypeTerrain(char* set_type_terrain) {
	*type_terrain = set_type_terrain;
}

void Biom::setKolSpawnResource(int set_kol_spawn_resources) {
	kol_spawn_resources = set_kol_spawn_resources;
}

void Biom::setKolBuildings(int set_kol_buildings) {
	kol_buildings = set_kol_buildings;
}

void Biom::randKolSpawnResource() {
	srand(time(NULL)); setKolSpawnResource(rand() % 20);
}

void Biom::randKolBuildings() {
	srand(time(NULL)); setKolBuildings(rand() % 10);
}