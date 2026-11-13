extern int fn_8248F8E8();
extern unsigned int lbl_821BED18;
extern unsigned int lbl_821BEDF0;


void fn_82494190(unsigned int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[2];
  piVar3 = (int *)param_1[1];
  *param_1 = &lbl_821BEDF0;
  for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    puVar2 = (unsigned int *)*piVar3;
    if (puVar2 != (unsigned int *)0x0) {
      (*(int (**)())*puVar2)(puVar2,1);
    }
  }
  if (param_1[1] != 0) {
    fn_8248F8E8(param_1[1]);
  }
  {
    unsigned int *v = param_1 + 1;
    v[0] = 0; v[1] = 0; v[2] = 0;
  }
  *param_1 = &lbl_821BED18;
  return;
}

