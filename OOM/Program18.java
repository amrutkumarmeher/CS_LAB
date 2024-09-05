class demo{
    int x;
}
public class Program18 {
    public static void main(String[] args) {
        demo obj[] = new demo[3];
        obj[0] = new demo();
        obj[1] = new demo();
        obj[2] = new demo();
        obj[0].x = 100;
        obj[1].x = 200;
        obj[2].x = 300;
        System.out.println(obj[0].x);
        System.out.println(obj[1].x);
        System.out.println(obj[2].x);
    }
}
