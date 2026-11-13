extern unsigned int lbl_820260A8;
extern unsigned int lbl_820260C8;


void fn_828C4390(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[4];
  *param_1 = &lbl_820260C8;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  puVar1 = (unsigned int *)param_1[5];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  *param_1 = &lbl_820260A8;
  return;
}

