import java.math.BigInteger;
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String num = in.next();
        int X = in.nextInt();
        int Y = in.nextInt();
        BigInteger n1 = new BigInteger(num, X);
        BigInteger n2 = new BigInteger(n1.toString(), Y);
        System.out.println(n2.toString());
    }
}