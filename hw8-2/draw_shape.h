#ifndef draw_shape_h
#define draw_shape_h

class Shape {
        public:
                Shape();
                Shape(int x, int y, int length, char ch);

                virtual double GetArea() = 0;
                virtual double GetPerimeter() = 0;
				virtual bool Check(int x, int y);
                void Draw(int canvas_width, int canvas_height);

        protected:
                // 모든 도형에 공통적인 속성 정의
				int _x, _y;
				int _length;
				char _ch;
};

class Rectangle:public Shape{
		public:
				Rectangle(int x, int y, int length, int width, char ch);
				virtual double GetArea();
				virtual double GetPerimeter();
				virtual bool Check(int x, int y);
//				virtual void Draw(int canvas_width, int canvae_height);
		protected:
				int _width;
};

class Square:public Shape{
		public:
				Square(int x, int y, int length, char ch);
				virtual double GetArea();
				virtual double GetPerimeter();
				virtual bool Check(int x, int y);
//				virtual void Draw(int canvas_width, int canvae_height);
};

class Diamond:public Shape{
		public:
				Diamond(int x, int y, int length, char ch);
				virtual double GetArea();
				virtual double GetPerimeter();
				virtual bool Check(int x, int y);
//				virtual void Draw(int canvas_width, int canvae_height);
};

#endif
