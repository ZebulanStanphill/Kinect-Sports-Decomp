extern unsigned int lbl_821C0F1C;


void fn_824D7E60(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[4];
  *param_1 = &lbl_821C0F1C;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  return;
}

