extern int fn_82BE4EE8();
extern unsigned int lbl_820E9050;


void fn_82BE42C8(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[0x1b];
  *param_1 = &lbl_820E9050;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  fn_82BE4EE8(param_1);
  return;
}

