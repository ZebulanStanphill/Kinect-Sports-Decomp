extern int master_selection();
extern int prepare_for_output_pass();
extern int finish_output_pass();


void jinit_master_decompress(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())*(int *)(param_1 + 4))(param_1,1,0x1c);
  *(unsigned int **)(param_1 + 0x180) = puVar1;
  *puVar1 = prepare_for_output_pass;
  puVar1[1] = finish_output_pass;
  *(unsigned char *)(puVar1 + 2) = 0;
  master_selection(param_1);
  return;
}

