#include <vector>
#include "olcPixelGameEngine.h"

class Polygon
{
	int x;
	int y;
	std::vector<olc::vf2d> point_list = {{0,0} ,{0,50},{50,50},{50,0}};
	std::vector<olc::vf2d> uv_list = {{0,0} ,{0,1},{1,1},{1,0}}
	olc::Decal texture;
public:
	Polygon(int _x, int _y, olc::Decal input_texture)
	{
		//std::vector<olc::vf2d> input,
		//point_list = input;
		x = _x;
		y = _y;
		texture = input_texture;
	}
	Draw(olc::PixelGameEngine engine)
	{
		auto drawCopy = point_list
		for (int i=0;i<point_list.size();i++)
			{
				point_list[i].x += x
				point_list[i].y += y
			}
		engine.drawPolygonDecal(texture,point_list, uv_list)
	}
};