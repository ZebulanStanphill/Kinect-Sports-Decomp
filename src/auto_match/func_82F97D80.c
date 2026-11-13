extern unsigned int *auStack_40;
extern unsigned int fStack_30;
extern int fn_82F97130();
extern int fn_82F97268();
extern unsigned int uStack_44;


void fn_82F97D80(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  double dVar4;
  unsigned int uStack_44;
  unsigned char auStack_40 [16];
  float fStack_30;
  
  puVar2 = *(unsigned int **)(param_1 + 4);
  puVar1 = &uStack_44;
  lVar3 = 6;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (**(int (***)())(param_1 + 8))(param_1,param_2,auStack_40);
  if (fStack_30 == *(float *)(param_1 + 0xc)) {
    fn_82F97268(param_1,param_2);
  }
  else {
    dVar4 = (double)fn_82F97130();
    *(float *)(param_1 + 0xc) = (float)dVar4;
  }
  return;
}

