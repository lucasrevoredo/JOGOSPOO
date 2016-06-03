#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char* args[])
{

	bool sair = false;
	string jog1, jog2;

	int vida1 = 20, vida2 = 20;
	int ataque = 4;
	int defesa = 2;

	cout << "digite o nome do primeiro jogador: " << endl;
	cin >> jog1;

	cout << "digite o nome do segundo jogador: " << endl;
	cin >> jog2;

	while (sair == false){

		cout << "A: " << ataque << "                  " << "A: " << ataque << endl;
		cout << "D: " << defesa << "                  " << "D: " << defesa << endl;
		cout << "vida: " << vida1 << "              " << "vida: " << vida2 << endl;
		cout << " O			   O" << endl;
		cout << ".T./		         \\.T." << endl;
		cout << " ^			   ^" << endl;
		cout << jog1 << "	                " << jog2 << endl;
		
		system("pause");

		int dado6;

		//adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		//gera um numero aleatorio
		dado6 = rand() % 6 + 1;
		//gera um dano no jogador1
		if (dado6 > 4){

			vida1 = vida1 - dado6;
			cout << jog1 << " dano:" << -dado6 << endl;
			cout << jog2 << " acertou!" << endl;
			cin.get();
		}

		else if (dado6 <= 4)
		{

			cout << jog2 << " errou!" << endl;
			cin.get();
		}
		//mesma coisa para o segundo jogador
		dado6 = rand() % 6 + 1;
		if (dado6 > 4){

			vida1 = vida1 - dado6;
			cout << jog1 << " dano:" << -dado6 << endl;
			cout << jog2 << " acertou!" << endl;
			cin.get();
		}

		else if (dado6 <= 4)
		{

			cout << jog1 << " errou!" << endl;
			cin.get();
		}

		system("cls");

		//se sair não limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
        }
		//se continuar então limpa a tela
		else system("cls");
		}

	cout << "Fim de jogo" << endl;

	if (vida1 > 0) cout << jog1 << " venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << " venceu!" << endl;
	else cout << "os dois perderam!" << endl;


	return 0;

}


