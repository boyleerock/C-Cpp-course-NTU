class Point2D
{
      public:    
            Point2D();   
            Point2D(int x, int y);   
            int getX();
            int getY();
            Point2D operator+(Point2D &p); // 更+笲衡    
            Point2D operator-(Point2D &p); // 更-笲衡
            Point2D operator*(Point2D &p);//更猭
            Point2D operator+(int num);
            //更+笲衡 xのy禸计
 
      private:   
            int X;   
            int Y;
};
