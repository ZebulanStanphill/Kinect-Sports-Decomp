extern int fn_8265C940();
extern int fn_82A1FB60();
extern unsigned int lbl_8315D2EC;


unsigned __int64 fn_82A21078(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_8265C940(0x3c,lbl_8315D2EC);
  uVar1 = lbl_8315D2EC;
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 0x20) = 0;
    *(unsigned int *)(iVar2 + 0x24) = 8;
    iVar3 = fn_8265C940(0x20,uVar1);
    *(int *)(iVar2 + 0x1c) = iVar3;
    if (iVar3 != 0) {
      RtlInitializeCriticalSection(iVar2);
      *(unsigned int *)(iVar2 + 0x28) = param_2;
      *(unsigned int *)(iVar2 + 0x38) = 1;
      *(int *)(iVar2 + 0x2c) = iVar2 + 0x2c;
      *(int *)(iVar2 + 0x30) = iVar2 + 0x2c;
      *param_1 = iVar2;
      return 0;
    }
    fn_82A1FB60();
  }
  return 8;
}

