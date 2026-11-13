extern unsigned int *auStack_50;
extern int fn_82829E10();
extern unsigned int uStack_30;


unsigned __int64 fn_828299F0(int param_1,unsigned int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned char auStack_50 [16];
  __int64 alStack_40 [2];
  unsigned int uStack_30;
  
  alStack_40[1] = 0;
  uStack_30 = 0;
  if ((*(unsigned int *)(param_1 + 0x18) <= param_2) && (param_2 <= *(unsigned int *)(param_1 + 0x1c))) {
    alStack_40[0] = (unsigned __int64)param_2 << 0x20;
    iVar1 = *(int *)(param_1 + 0x3c);
    piVar3 = (int *)fn_82829E10(auStack_50,iVar1,alStack_40);
    iVar2 = *piVar3;
    if (iVar2 != *(int *)(iVar1 + 4)) {
      *param_3 = (*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0xc)) + param_2;
      return 1;
    }
  }
  return 0;
}

