// TP.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.


#include <cstdio> // em C substituir por #include <stdio.h>

int main() {
	int q;
	char e;
	while (scanf("%d %c", &q, &e) != EOF) {

		//Indica que Rick deseja fazer uma medicao
		if (e == 'p') {
			
		}

		//Recipiente quebrou e precisa ser removido
		if (e == 'r') {

		}

		//Indica a inclusao de um recipiente na lista
		if (e == 'i') {

		}
		// veja que a funcao bar() sempre retorna 1, entao o programa sempre
		// vai imprimir 1.
		// Troque essa funcao (inclusive o nome dela) caso queira tirar uma nota
		// melhor no TP!
		printf("%d\n", bar());
	}
	return 0;
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
