extern int fn_8256E1D8();


int fn_8266D210(unsigned int *param_1,unsigned int *param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  if (param_1 != param_2) {
    iVar1 = param_3 - (int)param_2;
    puVar3 = param_2 + 2;
    do {
      puVar4 = puVar3 + -3;
      param_3 = param_3 + -0xc;
      fn_8256E1D8(param_3,puVar3[-5],puVar3[-4]);
      puVar2 = puVar3 + -5;
      *(unsigned int *)((int)puVar4 + iVar1) = *puVar4;
      puVar3 = puVar4;
    } while (puVar2 != param_1);
  }
  return param_3;
}

