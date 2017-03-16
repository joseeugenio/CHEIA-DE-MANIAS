#include<stdio.h>
#include<string.h>

void ApresentaMenu(void)
{
	printf("\n\nOpcoes:\n"
			"\n\t1 - Cadastrar	ocorrencias"
			"\n\t2 - Listar	ocorrencias"
			"\n\t9 - Encerrar\n\n");
}

typedef struct
{
    char nome[31],
         endereco[51],
         curso[31];
    int matricula[11];
}tAluno;

tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char *curso)
{
    int tam;
    tam = sizeof(curso) / sizeof(curso[0]);
    return tam;
}

int qCadastro=0;

void CadastrarOcorrencias()
{
        printf("Nome do aluno: ");
        fflush(stdin);
        fgets(gAlunos[qCadastro].nome, 31, stdin);
        printf("Endereco do aluno: ");
        fflush(stdin);
        fgets(gAlunos[qCadastro].endereco, 51, stdin);
        printf("Curso do aluno: ");
        fflush(stdin);
        fgets(gAlunos[qCadastro].curso, 31, stdin);
        printf("Matri´cula do aluno: ");
        fflush(stdin);
        fgets(gAlunos[qCadastro].matricula, 11, stdin);
        qCadastro++;
}
void Lista()
{
    int i;
    for (i = 0; i < qCadastro; i++){
        printf("Nome: %s\nEndereco:%s \nCurso:%s \nMatricula: %s",
         gAlunos[qCadastro].nome ,gAlunos[qCadastro].endereco ,gAlunos[qCadastro].curso ,gAlunos[qCadastro].matricula );
    }
}
int main()
{

    printf("Ola, esse programa faz um controle"
			"de cadastros de alunos\n");

    char opcao;
	while(1) {
		ApresentaMenu();
		printf("Escolha uma opcao do menu: ");
        fflush(stdin);
		scanf("%c%*c", &opcao);

		if (opcao == '9') {
			break;
		}

		switch (opcao) {
			case '1': CadastrarOcorrencias();
				break;
            case '2': Lista();
				break;
			default:
				printf("Opcao \'%c\' invalida, tente novamente.\n", opcao);
		}
	}

	printf("Obrigado por utilizar esse programa.");

	return 0;

}

