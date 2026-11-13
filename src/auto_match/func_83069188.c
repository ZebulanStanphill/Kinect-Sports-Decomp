extern int fn_8306AB80();
extern unsigned int lbl_8217E8A8;
extern unsigned int lbl_8217E9F4;


void fn_83069188(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = &lbl_8217E9F4;
  puVar2 = (unsigned int *)param_1[4];
  while (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)puVar2[1];
    (*(int (**)())*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  for (puVar2 = (unsigned int *)param_1[8]; puVar2 != (unsigned int *)0x0;
      puVar2 = (unsigned int *)puVar2[2]) {
    puVar2[3] = 0;
    *puVar2 = 0;
  }
  *param_1 = &lbl_8217E8A8;
  if (param_1[3] != 0) {
    fn_8306AB80(param_1[3],param_1);
  }
  return;
}

