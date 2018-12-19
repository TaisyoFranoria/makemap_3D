#include"scene.h"

class tool {
public:
	tool();
	~tool();	
	bool alive;
	void all();
private:
	scene* sc;
	void initialize();
	void finalize();
	void update();
	void draw();
	void update_late();
};