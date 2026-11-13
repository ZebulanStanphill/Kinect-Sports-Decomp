extern unsigned int *auStack_30;
extern int fn_82E73A90();
extern int fn_82E74818();
extern unsigned int uStack_28;


__int64 fn_82E74AE8(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_30 [8];
  unsigned __int64 uStack_28;
  
  while (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = fn_82E74818(param_1,0,1);
    if (lVar1 < 0) {
      return lVar1;
    }
  }
  uStack_28 = 0;
  lVar1 = (**(int (***)())(**(int **)(param_1 + 0x1d8) + 0x28))(*(int **)(param_1 + 0x1d8),auStack_30);
  if (lVar1 < 0) {
    return lVar1;
  }
  if ((((unsigned __int64)(uStack_28) >> 16) & 0xFFFF) == 0) {
    return lVar1;
  }
  uVar2 = 0;
  uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x68);
  if (uVar3 != 0) {
    trapWord(6,uVar3,0);
    uVar2 = ((__int64)*(int *)(param_1 + 4) * 80000000 & 0xffffffffU) / uVar3;
  }
  fn_82E73A90(param_1,uVar2);
  return lVar1;
}

