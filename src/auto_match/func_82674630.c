extern int fn_82526B90();


unsigned int * fn_82674630(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)param_3[1];
  iVar2 = 0;
  if (0 < *param_3) {
    do {
      iVar1 = fn_82526B90(*puVar3,param_2);
      if (iVar1 == 0) {
        return puVar3;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar2 < *param_3);
  }
  return (unsigned int *)0x0;
}

