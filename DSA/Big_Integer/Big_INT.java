import java.io.*;
import java.util.*;
import java.math.BigInteger;                     

class Big_INT {                                     
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(      
      new InputStreamReader(System.in));
    PrintWriter pw = new PrintWriter(            
      new BufferedWriter(new OutputStreamWriter(System.out))); 
    int caseNo = 0;
    while (true) {
      StringTokenizer st = new StringTokenizer(br.readLine());
      int N = Integer.parseInt(st.nextToken());  
      int F = Integer.parseInt(st.nextToken());  
      if (N == 0 && F == 0) break;
      BigInteger sum = BigInteger.ZERO;          
      for (int i = 0; i < N; ++i) {              
        BigInteger V = new BigInteger(br.readLine()); 
        sum = sum.add(V);                        
      }
      pw.printf("Bill #%d costs ", ++caseNo);
      pw.printf(sum.toString());
      pw.printf(": each friend should pay ");
      pw.printf(sum.divide(BigInteger.valueOf(F)).toString());
      pw.printf("\n\n");
    }
    pw.close();
  }
}
