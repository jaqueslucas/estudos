package matriz_geral;

import java.util.Locale;
import java.util.Scanner;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,c,l;
		double soma;
		
		System.out.print("Qual a ordem da matriz? ");
		n = sc.nextInt();
		
		double mat[][] = new double[n][n];
		
		for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				System.out.printf("Elemento[%d,%d]: ",i,j);
				mat[i][j] = sc.nextDouble();	
				
			}
		}
		
		soma = 0;
		
		for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(mat[i][j] > 0) {
					soma = soma + mat[i][j]; 
				}
				
			}
		}
		
		
		System.out.printf("\nSOMA DOS POSITIVOS: %.1f\n\n",soma);
		
		System.out.printf("Escolha uma linha:");
		l = sc.nextInt();
		
		System.out.print("LINHA ESCOLHIDA: "); 
		
		for(int j=0;j<n;j++) {
			System.out.print(mat[l][j]+" ");
		}
		
		System.out.println();
		System.out.println();
		System.out.printf("Escolha uma coluna:");
		c = sc.nextInt();
		
		
		System.out.print("COLUNA ESCOLHIDA: "); 
		
		for(int i=0;i<n;i++) {
			System.out.print(mat[i][c]+" ");
		}
		
		System.out.println();
		System.out.println();
		System.out.print("DIAGONAL PRINCIPAL: ");
		
		for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				System.out.print(mat[i][i]+" "); 
			}
		}
		
		double matA[][] = new double [n][n];
				
		for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(mat[i][j]<0) {
					matA[i][j] = mat[i][j] * mat[i][j];
				}
				else {
					matA[i][j] = mat[i][j];
				}
				
			}
		}
		
		System.out.println();
		System.out.println();
		System.out.println("MATRIZ ALTERADA:"); 
		
		for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				System.out.print(matA[i][j]+" ");
			}
			System.out.println();	
		}
		
	}

}
