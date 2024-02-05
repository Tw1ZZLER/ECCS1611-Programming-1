import java.util.*;

public class SentinelValue2 {
    public static void main(String args[]) {
        Scanner werWerwer = new Scanner(System.in); 
        ArrayList<Integer> ere8erue = new ArrayList<Integer>(); 
        int fje8rjg = 0; System.out.print("Enter integers, -1 to quit: "); 
        while (werWerwer.hasNextInt()) {
            fje8rjg=werWerwer.nextInt();
            ere8erue.add(fje8rjg);
        }
        double fje8rg=0;
        for (int hhgghhgg:ere8erue) 
            fje8rg+=hhgghhgg;
        double fhwher8erh=fje8rg/ere8erue.size();
        fhwher8erh = ((int)(100 * fhwher8erh)) / 100.00;
        System.out.println("Number of inputs: " 
        + ere8erue.size() 
        + "\nAverage of all inputs: " 
        + fhwher8erh 
        + "\nMinimum input: " 
        + Collections.min(ere8erue) 
        + "\nMaximum input: " 
        + Collections.max(ere8erue));
        werWerwer.close();
    }
}

// funny obfuscation