import java.util.Scanner;
 
public class main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        //char u = '-' + '.';
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '.') System.out.print("0");
            else if (s.charAt(i) == '-' && s.charAt(i + 1) == '.') {
                System.out.print("1");
                i++;
            }
            else if (s.charAt(i) == '-' && s.charAt(i + 1) == '-') {
                System.out.print("2");
                i++;
            }
        }
    }
}