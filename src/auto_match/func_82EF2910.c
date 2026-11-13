extern unsigned int *auStack_58;
extern int fn_82E4FE40();
extern int fn_82EF1C08();
extern int fn_82EF1D58();
extern unsigned int iStack_38;


unsigned __int64 fn_82EF2910(int param_1)

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int aiStack_60 [2];
  unsigned __int64 auStack_58 [4];
  int iStack_38;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x3b8) != 0) {
    do {
      fn_82EF1D58(param_1 + 0x50,uVar3,aiStack_60);
      puVar1 = auStack_58;
      lVar4 = 5;
      puVar2 = (unsigned __int64 *)(aiStack_60[0] + -8);
      do {
        puVar2 = puVar2 + 1;
        puVar1 = puVar1 + 1;
        *puVar1 = *puVar2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      if (iStack_38 != 0) {
        fn_82E4FE40();
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x3b8));
  }
  fn_82EF1C08(param_1 + 0x50,0);
  *(unsigned int *)(param_1 + 0x3b8) = 0;
  return 0;
}

