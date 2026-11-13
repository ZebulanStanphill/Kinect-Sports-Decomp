extern int fn_8256E1D8();


int fn_8266D3E0(unsigned int *param_1,unsigned int *param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  if (param_1 != param_2) {
    iVar1 = param_3 - (int)param_1;
    puVar3 = param_1 + 2;
    do {
      fn_8256E1D8(param_3,puVar3[-2],puVar3[-1]);
      param_3 = param_3 + 0xc;
      *(unsigned int *)((int)puVar3 + iVar1) = *puVar3;
      puVar2 = puVar3 + 1;
      puVar3 = puVar3 + 3;
    } while (puVar2 != param_2);
  }
  return param_3;
}

