#include<iostream>
#include<stdlib.h>

using namespace std;

void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  


/* burbbleSort 
   Um dos primeiros algoritmos de ordenacao que foram criados.
   A cada iteracao o algoritmo é seprado em pares se caso
   estiverem na ordem errada sua ordem e trocada!

   Complexidade:
   Melhor caso: O(n) -> elementos ja estao ordenados
   Pior Caso: O(n²) -> percorre o vetor n² vezes
   */
void bubbleSort(int array[], int n){
    cout << " <> Burble Sort <>" <<endl;
    int aux;
    for(int contador=1;contador<n;contador++){
        for(int i=0;i<n-1;i++){
            cout << "-------------------------------------------------------------------------------" <<endl;
            cout<< "Comparando " << array[i] <<" e " << array[i+1] << endl;;
            if(array[i] > array[i+1]){
                cout<< "Trocou, pois " << array[i] << " > " << array[i+1] <<endl;
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                cout<< "vetor atual ->";
                printArray(array,n);
                cout << "-------------------------------------------------------------------------------" <<endl;
            }
        }
    }
}
    
/* Select Sort 

    Assim com o BurbbleSort é nescessario percorrer a lista toda para cada movimentacao.
    Ocupa pouca memoria.
    Ruim para casos de vetores muito grandes
    Complexidade:
    Melhor caso: O(n)
    Pior caso : O(n²)
    
*/
void selectSort(int v[], int n){

}    
void insertionSort(int arr[], int n){  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
    while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;
    printArray(arr,9);  
    }  
}  
    
int main()  
{  
    int arrayBurbble[] = { 12, 11, 13, 5, 6,28,38,48,150,0,5,6,4};  
    int n0 = sizeof(arrayBurbble) / sizeof(arrayBurbble[0]);
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "------------------------------BurbleSort---------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    bubbleSort(arr,n0);  
    
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-----------------------------Fim - BurbleSort----------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;

    int arraySelect[] = { 42, 211, 13, 5, 6,28,358,48,150,0,5,6,4};  
    int n1 = sizeof(arraySelect) / sizeof(arraySelect[0]);
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "------------------------------SelectSort---------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    selectSort(arraySelect,n1);  
    
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-----------------------------Fim - SelectSort----------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;

    int arrayInsertion[] = { 42, 211, 13, 5, 6,28,358,48,150,0,5,6,4};  
    int n2 = sizeof(arrayInsertion) / sizeof(arrayInsertion[0]);
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "------------------------------InsertionSort------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    selectSort(arrayInsertion,n2);  
    
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-----------------------------Fim - InsertionSort--------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    cout << "-------------------------------------------------------------------------------" <<endl;
    insertionSort(arrayInsertion, n);
    printArray(arr, n);
    system("pause");
    return 0;
}