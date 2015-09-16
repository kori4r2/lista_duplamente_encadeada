#include <stdio.h>
#include <stdlib.h>
#include "hospital_list.h"

int main(int argc, char *argv[]){

	LIST *full_list = NULL, *special_list = NULL;

	full_list = get_list(stdin);
	special_list = get_special_list(full_list);

	printf("Fila geral original\n");
	print_ids(full_list);
	printf("Fila preferencial\n");
	print_ids(special_list);

	update_list(full_list);
	printf("Fila geral atualizada\n");
	print_ids(full_list);

	printf("Resultado esperado fila preferencial\n");
	print_positions(special_list);
	printf("Resultado esperado fila geral\n");
	print_positions(full_list);

	delete_list(&full_list);
	delete_list(&special_list);

	return 0;
}
