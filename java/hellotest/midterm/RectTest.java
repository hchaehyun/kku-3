//202023615 함채현 Java프로그래밍2(8765) 2주차 과제

class Rect{
        private int width;
        private int height;

        public Rect(int width, int height){
            this.width = width;
            this.height = height;
        }

        public boolean equals(Object obj){
            Rect r = (Rect) obj;
            if(width*height == r.width*r.height && width == r.height && height == r.width)
                return true;
            else
                return false;
        }

        public String toString(){
            return "w=" + width + ", h=" + height;

        }

    }

    public class RectTest{
        public static void main(String args[]){

            Rect a = new Rect(2,3);
            Rect b = new Rect(3,2);
            Rect c = new Rect(1,6);

            System.out.println(a);
            System.out.println(b);
            System.out.println(c);
            System.out.println(a.equals(b));
            System.out.println(a.equals(c));

        }
    }

