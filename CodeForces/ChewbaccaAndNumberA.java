/*
Author : Tishad07
Time   : 6/9/2023 12:17:55 AM +06 GMT
*/

import java.util.*;

public class ChewbaccaAndNumberA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long x = sc.nextLong();
        ArrayList<Integer> v = new ArrayList<Integer>();
        while(x>0) {
            v.add((int)(x%10));
            x/=10;
        }
        Collections.reverse(v);
        int first = v.get(0);
        for(int i=0;i<v.size();++i) {
            int dif = 9-v.get(i);
            if(dif<v.get(i)) {
                v.set(i, dif);
            }
        }
        if(v.get(0)==0) v.set(0, first);
        for(int i=0;i<v.size();++i) {
            System.out.print(v.get(i));
        }
        System.out.println();
    }
}
