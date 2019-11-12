// draw_shape_main.cc
#include <iostream>
#include <string>
#include <vector>
#include "draw_shape.h"

using namespace std;

int main() {
  vector<Shape*> shapes;

  int row, col;
  cin >> row >> col;
  Canvas canvas(row, col);
  canvas.Clear();
  canvas.Print();

  while (true) {
	string tok;
	cin >> tok;
	if (tok == "add") {
  	  string type;
  	  cin >> type;
	  int x, y, dis;
	  std::cin >> y >> x >> dis;
	  char brush;
	  Shape* temp;
  	  if (type == "rect") {
        // 이 부분은 직접 작성
		int height;
		std::cin >> height >> brush;
		temp = new Rectangle(x,y,dis,height,brush);
  	  }
  	  else if (type == "tri_up") {
        // 이 부분은 직접 작성
		std::cin >> brush;
		temp = new UpTriangle(x,y,dis,brush);
  	  }
  	  else if (type == "tri_down") {
        // 이 부분은 직접 작성
		std::cin >> brush;
		temp = new DownTriangle(x,y,dis,brush);
  	  }
  	  else if (type == "diamond") {
        // 이 부분은 직접 작성
		std::cin >> brush;
		temp = new Diamond(x,y,dis,brush);
  	  }
  	  else continue;
	  shapes.push_back(temp);
	} 
    else if (tok == "draw") {
      	   canvas.Clear();
      	   for (int i = 0; i < shapes.size(); ++i) shapes[i]->Draw(canvas);
           canvas.Print();
  	} 
    else if (tok == "delete") {
        // 이 부분은 직접 작성
			int idx;
			std::cin >> idx;
			if(idx < shapes.size()) shapes.erase(shapes.begin()+idx);
   	} 
    else if (tok == "dump") {
        // 이 부분은 직접 작성
			for(int i=0; i<shapes.size(); i++){
				std::cout << i << ' ';
				shapes[i]->Print();
			}
    } 
    else if (tok == "resize") {
		int row,col;
		cin >> row >> col;
		canvas.Resize(row,col);
   	} 
    else {
      	break;
   	}
  }

  for (int i = 0; i < shapes.size(); ++i) delete shapes[i];
  shapes.clear();
  return 0;
}

