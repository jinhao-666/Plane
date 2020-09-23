#include "otherAircraft.h"

OtherAircraft::OtherAircraft(int k)
{
    setAircraftPix(QPixmap(":/Images/enemy002.png"));
    setLevel(k);
    setSpeed(k);
    setHealth(1);
    int rand=qrand()%(WIDTH-OTHER_AIRCRAFT_SIZE);//设置敌机初始出现位置x坐标
    setXpos(rand);
    setYpos(-OTHER_AIRCRAFT_SIZE);

}
OtherAircraft::~OtherAircraft()
{

}

void OtherAircraft::explode()
{
    setAircraftPix(QPixmap(":/Images/boommm.png"));
    setAlive(false);
}
