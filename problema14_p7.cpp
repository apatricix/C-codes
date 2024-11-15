#include <stdio.h>

void captura(int arr[], int num) {
	printf("Ingrese los elementos del arreglo:\n");
	for (int i = 0; i < num; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
}

void cuenta(int arr[], int num) {
	int contado[10] = {0}; 
	
	for (int i = 0; i < n; i++) {
		int numero = arr[i];
		if (cont[numero - 1] == 0) {  
			int cont = 0;
			for (int j = 0; j < n; j++) {
				if (arr[j] == numero) {
					cont++;
				}
			}
			printf("El número %d aparece %d veces\n", numero, cont);
			cont[numero - 1] = 1; 
	}
}

void imprime(int arr[], int num) {
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int n;
	printf("Ingrese el tamaño del arreglo: ");
	scanf("%d", &num);
	
	int arr[n];
	
	captura(arr, num);
	
	printf("Arreglo generado:\n");
	imprime(arr, num);
	
	printf("Frecuencia de cada elemento:\n");
	cuenta(arr, num);
	
	return 0;
}

