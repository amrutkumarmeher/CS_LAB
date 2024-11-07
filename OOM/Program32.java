// WAP to create a FileOutputStream object & write "GPBGH" to a file "filename.txt".
import java.io.FileOutputStream;

public class Program32 {
    public static void main(String[] args) {
        int i;
        String s = "GPBGH";
        FileOutputStream fout;
        try {
            fout = new FileOutputStream("filename.txt");
            for(i = 0;i<s.length();i++){
                fout.write(s.charAt(i));
            }
            fout.close();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
