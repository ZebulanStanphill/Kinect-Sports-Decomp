extern int free();
extern unsigned int lbl_820014D4;


void fn_8265BE78(unsigned int *param_1)

{
  *param_1 = &lbl_820014D4;
  if (*(char *)(param_1 + 2) != '\0') {
    free(param_1[1]);
  }
  param_1[1] = 0;
  *(unsigned char *)(param_1 + 2) = 0;
  return;
}

