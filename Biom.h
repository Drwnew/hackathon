#ifndef BIOM_H
#define BIOM_H
class Biom { //класс Biom
private:
	char* type_terrain[10]; //тип местности
	int kol_spawn_resources; //количество мест появления ресурсов
	int kol_buildings; //количество построек
public:
	//метод для получения случайного количества : мест появления ресурсов, количество построек
	char* getTypeTerrain(); //получение типа местности
	int getKolSpawnResource(); //получение количество мест появления ресурсов
	int getKolBuildings(); //получение количества построек
	void setTypeTerrain(char* set_type_terrain); //изменение типа местности
	void setKolSpawnResource(int set_kol_spawn_resources); //изменение количество мест появления ресурсов
	void setKolBuildings(int set_kol_buildings); //изменение количество построек
	void randKolSpawnResource(); //получения случайного количества мест появления ресурсов
	void randKolBuildings(); //получения случайного количества количество построек
};
#endif BIOM_H