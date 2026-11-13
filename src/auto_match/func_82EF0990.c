extern int fn_82E4FE40();
extern int fn_82EE3128();
extern int fn_82EEF998();
extern int fn_82EEFC00();
extern int fn_82EEFD30();
extern unsigned int iStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


unsigned __int64 fn_82EF0990(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 *apuStack_60 [4];
  unsigned __int64 uStack_50;
  unsigned int uStack_48;
  int iStack_44;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1ac);
  uVar2 = *(unsigned int *)(param_1 + 0x26c);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      fn_82EEFC00(param_1 + 0x48,uVar3,apuStack_60);
      uStack_50 = *apuStack_60[0];
      uStack_48 = *(unsigned int *)(apuStack_60[0] + 1);
      iStack_44 = *(int *)((int)apuStack_60[0] + 0xc);
      if (iStack_44 != 0) {
        fn_82E4FE40();
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  fn_82EEF998(param_1 + 0x48,0);
  uVar3 = 0;
  *(unsigned int *)(param_1 + 0x1ac) = 0;
  if (uVar2 != 0) {
    do {
      fn_82EEFD30(param_1 + 0x1b0,uVar3,apuStack_60);
      uStack_50 = *apuStack_60[0];
      if ((((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF) != 0) {
        fn_82E4FE40();
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)uVar2);
  }
  fn_82EE3128(param_1 + 0x1b0,0);
  *(unsigned int *)(param_1 + 0x26c) = 0;
  return 0;
}

