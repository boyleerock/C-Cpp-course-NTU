class Point2D
{
      public:    
            Point2D();   
            Point2D(int x, int y);   
            int getX();
            int getY();
            Point2D operator+(Point2D &p); // ����+�B��l    
            Point2D operator-(Point2D &p); // ����-�B��l
            Point2D operator*(Point2D &p);//�������k
            Point2D operator+(int num);
            //����+�B��l �Ox��y�b�U�[�W�@�Ʀr
 
      private:   
            int X;   
            int Y;
};
