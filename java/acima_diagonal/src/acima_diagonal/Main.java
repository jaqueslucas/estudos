package acima_diagonal;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
	
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, soma;
	    

	    System.out.print("Qual a ordem da matriz?");
	    n = sc.nextInt();
	    
	    int mat[][] = new int[n][n];
	    
	    for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				System.out.printf("Elemento[%d,%d]: ",i,j);
				mat[i][j] = sc.nextInt();
			}
	    }
	    
	    soma = 0;
	    System.out.print("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = ");
	    for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if (i<j) {
				soma = soma + mat[i][j];	
				}
			}
	    }
	    System.out.print(soma); 
	    
	}

}
