extern int fn_82A81780();


unsigned __int64
fn_82A705D8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  
  fn_82A81780(param_3,param_5,*(unsigned short *)(param_1 + 0xae));
  if (1 < (int)param_5) {
    iVar3 = 1;
    do {
      sVar2 = (short)iVar3 + 1;
      piVar1 = (int *)(iVar3 * 4 + param_3);
      iVar3 = (int)sVar2;
      *piVar1 = (piVar1[-1] * *(int *)(param_1 + 0x278) + 0x20 >> 6) + *piVar1;
    } while ((int)sVar2 < (int)param_5);
  }
  return 1;
}

