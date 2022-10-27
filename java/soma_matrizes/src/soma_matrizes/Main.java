package soma_matrizes;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int m,n;
	    

	    System.out.print("Qual a quantidade de linhas da matriz? ");
	    m = sc.nextInt();
	    System.out.print("Qual a quantidade de colunas da matriz? ");
	    n = sc.nextInt();
	    
	    int a[][] = new int[m][n];
	    int b[][] = new int[m][n];
	    int c[][] = new int[m][n];
	    
	    System.out.println("Digite os valores da matriz A: ");
	    for (int i=0;i<m;i++) {
	    	for(int j=0;j<n;j++) {
	    		System.out.printf("Elemento [%d,%d]:",i,j);
	    		a[i][j] = sc.nextInt();
	    	}
	    }
	    
	    System.out.println("Digite os valores da matriz B: ");
	    for (int i=0;i<m;i++) {
	    	for(int j=0;j<n;j++) {
	    		System.out.printf("Elemento [%d,%d]:",i,j);
	    		b[i][j] = sc.nextInt();
	    	}
	    }
	    
	    for (int i=0;i<m;i++) {
	    	for(int j=0;j<n;j++) {
	    		c[i][j] = b[i][j] + a[i][j];
	    		
	    	}
	    }
	    
	    System.out.println("MATRIZ SOMA");
	    for (int i=0;i<m;i++) {
	    	
	    	for(int j=0;j<n;j++) {
	    		System.out.print(c[i][j]+" ");
	    		
	    	}
	    	System.out.println();
	    }
	}

}
