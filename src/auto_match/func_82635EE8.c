extern unsigned int *auStack_20;
extern int fn_826338A0();
extern int fn_82634DF8();
extern int fn_82637090();


__int64 fn_82635EE8(int *param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned char auStack_20 [3];
  unsigned char bStack_1d;
  
  iVar1 = *param_1;
  piVar3 = param_1 + iVar1 * 0x9b4 + 4;
  fn_82634DF8(piVar3,0,0,0,param_2);
  fn_82637090(param_1 + iVar1 * 0x9b4 + 0x1c,param_2,param_1 + iVar1 * 0x9b4 + 0x18);
  if (((*(unsigned int *)(*piVar3 + 0x4db4) >> 2 & 1) == 0) &&
     (iVar2 = fn_826338A0(param_2,auStack_20), iVar2 != 0)) {
    param_1[iVar1 * 0x9b4 + 0x53] = param_1[iVar1 * 0x9b4 + 0x53] + 1;
    *(unsigned char *)((int)piVar3 + (*param_2 & 0x3f) + 0x140) =
         *(unsigned char *)((int)piVar3 + (*param_2 & 0x3f) + 0x140) | bStack_1d;
  }
  return (unsigned __int64)(unsigned int)param_1[iVar1 * 0x9b4 + 0x1d] - 1;
}

