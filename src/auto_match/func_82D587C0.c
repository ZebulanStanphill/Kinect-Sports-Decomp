extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82D587C0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)(param_3 * 0x20 + param_1 + 8);
  puVar3 = (unsigned int *)((param_3 + -5) * 4 + param_1);
  lVar2 = 8;
  do {
    fn_82CE4040(param_2);
    fn_82CE4118(puVar3[8]);
    puVar3 = puVar3 + 8;
    *puVar3 = (int)param_2;
    fn_82CE4040(param_2);
    fn_82CE4118(puVar1[1]);
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 1;
    *puVar1 = (int)param_2;
  } while (lVar2 != 0);
  return;
}

