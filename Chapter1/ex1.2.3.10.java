import java.util.Scanner;
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String line = in.nextLine();
        String pattern = "\\b[a-z]\\d\\d\\b";
        System.out.println(line.replaceAll(pattern, "***"));
    }
}