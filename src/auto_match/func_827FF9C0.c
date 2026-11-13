extern int fn_827FF0D0();
extern unsigned int uStack_1a;


void fn_827FF9C0(int *param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned short uVar3;
  double extraout_f1;
  unsigned short uStack_1a;
  
  iVar2 = *(int *)(*param_1 + 0x30);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(unsigned short *)(*param_1 + 0x22);
  }
  iVar1 = fn_827FF0D0();
  uStack_1a = (unsigned short)(__int64)((double)(*(float *)(iVar2 + 0x28) * (float)uVar3) * extraout_f1);
  *param_3 = iVar1 * (unsigned int)uStack_1a * 4 + *(int *)(iVar2 + 0x24);
  return;
}

