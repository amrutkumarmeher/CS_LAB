<<<<<<< HEAD
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
=======
// WAP to display a matrix
public class Program18 {
    public static void main(String[] args) {
        int a[][] = {{1,2,3},{4,5,6},{7,8,9}};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j<3;j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
>>>>>>> 75b82e3897a9a40b3f38e86e88e4b20aa29c3846
    }
}
