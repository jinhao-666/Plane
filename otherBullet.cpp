#include "otherBullet.h"

OtherBullet::OtherBullet(double x,double y,int k=1):Bullet(x,y,k)
{
    this->setBulletPix(QPixmap(":/Images/bullet002.png"));
}
OtherBullet::~OtherBullet()
{

}
