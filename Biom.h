#ifndef BIOM_H
#define BIOM_H
class Biom { //����� Biom
private:
	char* type_terrain[10]; //��� ���������
	int kol_spawn_resources; //���������� ���� ��������� ��������
	int kol_buildings; //���������� ��������
public:
	//����� ��� ��������� ���������� ���������� : ���� ��������� ��������, ���������� ��������
	char* getTypeTerrain(); //��������� ���� ���������
	int getKolSpawnResource(); //��������� ���������� ���� ��������� ��������
	int getKolBuildings(); //��������� ���������� ��������
	void setTypeTerrain(char* set_type_terrain); //��������� ���� ���������
	void setKolSpawnResource(int set_kol_spawn_resources); //��������� ���������� ���� ��������� ��������
	void setKolBuildings(int set_kol_buildings); //��������� ���������� ��������
	void randKolSpawnResource(); //��������� ���������� ���������� ���� ��������� ��������
	void randKolBuildings(); //��������� ���������� ���������� ���������� ��������
};
#endif BIOM_H