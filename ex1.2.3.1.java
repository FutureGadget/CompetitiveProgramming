import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double d = in.nextDouble();
        // 총 7 digit, 소숫점 뒤 3 digit
        System.out.format("%7.3f", d);
    }
}