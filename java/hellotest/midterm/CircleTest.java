class Circle{
    int x, y, radius;
    public Circle(int x, int y, int radius){
        this.x = x;
        this.y = y;
        this.radius = radius;
    }

}

public class CircleTest {
    public static void main(String[] args){
        Circle a = new Circle(2, 3, 5);
        Circle b = new Circle(1, 3, 5);
        Circle c = new Circle(2, 3, 5);

        System.out.println(a);
        System.out.println(b);

        System.out.println(a.equals(b));
        System.out.println(a.equals(c));
    }
}

//tostring override 해야함
//equals override
