extern int fn_8229E090();
extern int fn_8265CA20();


void fn_82508588(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int (**pcVar2)();
  
  if (param_1 == 2) {
    fn_8265CA20(param_2);
  }
  else {
    uVar1 = *(unsigned int *)param_2[2];
    if (param_1 == 0) {
      pcVar2 = (int (**)())*param_2;
    }
    else {
      if (param_1 != 1) {
        return;
      }
      pcVar2 = (int (**)())param_2[1];
    }
    if (pcVar2 != (int (**)())0x0) {
      (*pcVar2)();
      fn_8229E090(uVar1,0,1);
    }
  }
  return;
}

