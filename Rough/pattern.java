public class pattern {
    public static void main(String[] args) {
        char token = '*';
        for (int i = 10; i >= 0; i--) {
            for (int j = i + 1; j > 0; j--) {
                System.out.print(token);
            }
            System.out.println();
        }
    }
}
