extern int fn_8294B7A8();
extern int fn_829558B0();
extern int fn_82969030();
extern int fn_8296E438();
extern int fn_82971580();
extern int fn_82994908();


unsigned __int64 fn_82995AC8(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  
  uVar3 = fn_829558B0();
  if (-1 < (int)uVar3) {
    fn_8294B7A8(param_1);
    uVar5 = 0;
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar4);
        *(unsigned int *)(param_1 + 0x100) = uVar5;
        *(unsigned int **)(param_1 + 0x104) = puVar2;
        if (((*puVar2 & 0xfff00000) != 0) && (uVar3 = fn_82994908(param_1), (int)uVar3 < 0)) {
          return uVar3;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < uVar1);
    }
    uVar3 = fn_8296E438(param_1);
    if (((-1 < (int)uVar3) && (uVar3 = fn_82971580(param_1), -1 < (int)uVar3)) &&
       (uVar3 = fn_82969030(param_1), -1 < (int)uVar3)) {
      fn_8294B7A8(param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

