import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;
import java.util.Scanner;

public class passwordGenerator {
    
    final static String ALPHA_STR   = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    final static String NUMERIC_STR = "0123456789";
    final static String SYMBOL_STR  = "+-*/?!@#$%&";
    
    public static void main(String args[]) {
        System.out.print("Password length: ");
        Scanner cin = new Scanner(System.in);
        int size = cin.nextInt();
        String result = makePassword(size);
        System.out.println("Password: " + result);
        cin.close();
    }
    
    /**
     * Generates a random password.
     * @param length the length of the password
     * @return a password of the given length with one digit and one special symbol
     */
    public static String makePassword(int length) {
       
        // create storage for a bunch of one-character long strings, plus a random number generator object
        ArrayList<String> strChars = new ArrayList<String>();
        
        // select random alphabetical characters 
        for (int i = 0; i < length - 2; i++) 
            strChars.add(randomCharacter(ALPHA_STR));
      
        // add one numeric and one symbol character to the list...
        strChars.add(randomCharacter(NUMERIC_STR));
        strChars.add(randomCharacter(SYMBOL_STR));

        // Shuffle the list
        Collections.shuffle(strChars);
        
        // Use a StringBuffer to construct our password
        StringBuffer password = new StringBuffer();
        for (String s : strChars) {
            password.append(s);
        }
        
        // and return the created password
        return password.toString();
   }
   
   /**
    * Randomly select a one-character long substring
    * @param str the string to be used
    * @return a substring of length 1 from the passed string
    */
    public static String randomCharacter(String str) {
        Random rnd = new Random();
        int loc = rnd.nextInt(str.length());
        return str.substring(loc, loc + 1);
    }
     
}