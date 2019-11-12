#ifndef draw_shape_h
#define draw_shape_h

#include<vector>

class Canvas{
	public:
		Canvas(int, int);
		~Canvas();

		void Resize(int, int);
		bool DrawPixel(int, int, char);
		void Print();
		void Clear();
	private:
		std::vector<std::vector<char> > *canvas;
};

class Shape {
        public:
            Shape();
            Shape(int x, int y, int length, char ch);
            virtual void Draw(Canvas&) = 0;
			virtual void Print() = 0;
			virtual ~Shape();

        protected:
                // 모든 도형에 공통적인 속성 정의
			int _x, _y;
			int _length;
			char _ch;
};

class Rectangle:public Shape{
		public:
			Rectangle(int x, int y, int length, int width, char ch);
			virtual void Draw(Canvas&);
			virtual void Print();
			virtual ~Rectangle();
		protected:
			int _width;
};

class UpTriangle:public Shape{
		public:
			UpTriangle(int x, int y, int length, char ch);
			virtual void Draw(Canvas&);
			virtual void Print();
			virtual ~UpTriangle();
};

class DownTriangle:public Shape{
		public:
			DownTriangle(int x, int y, int length, char ch);
			virtual void Draw(Canvas&);
			virtual void Print();
			virtual ~DownTriangle();
};

class Diamond:public Shape{
		public:
			Diamond(int x, int y, int length, char ch);
			virtual void Draw(Canvas&);
			virtual void Print();
			virtual ~Diamond();
};
#endif
