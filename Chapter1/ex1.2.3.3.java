import java.util.Date;
import java.text.*;
import java.util.Locale;
import java.io.*;
class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String date = in.readLine();
        SimpleDateFormat d = new SimpleDateFormat("dd MMMM yyyy");
        SimpleDateFormat sdf = new SimpleDateFormat("EEEE");
        System.out.println(sdf.format(d.parse(date)));
    }
}