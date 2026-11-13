extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_8229EEA0();
extern int fn_823599A8();
extern int fn_82359C18();
extern int fn_8242E3E0();
extern int fn_82430D80();
extern int fn_82522588();
extern unsigned int iStack_44;
extern unsigned int lbl_821B90AC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8242E168(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_50 [2];
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char **ppuStack_40;
  unsigned int *puStack_3c;
  unsigned char ***pppuStack_30;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
  iVar1 = **(int **)(iVar4 + 0x1e0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d0) == 1)) {
    *(unsigned int *)(iVar1 + 0x1d0) = 0;
  }
  *(unsigned int *)(*(int *)(iVar4 + 0x1e0) + 0x2c) = 1;
  for (uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
      (uVar5 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x34); uVar5 = uVar5 + 8) {
    puVar3 = (unsigned int *)fn_82522588(auStack_48,uVar5);
    fn_82430D80(*puVar3,0xc,2);
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x94) + 0x5c) != 0) {
    fn_8229EEA0();
  }
  *(unsigned int *)(*(int *)(param_1 + 0x174) + 0x120) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x174) + 0x170) = 0xffffffff;
  iVar4 = fn_8225F160();
  if (*(int *)(iVar4 + 8) == 1) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x1d4) == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
      iVar4 = *(int *)(*(int *)(iVar4 + 0x1d4) * 4 + *(int *)(iVar4 + 0x1c4));
    }
    if ((*(int *)(*(int *)(iVar4 + 0x40) + 0xf8) != 0) &&
       (iVar4 = fn_8242E3E0(param_1), iVar4 == 0)) {
      auStack_50[0] = 0;
      puStack_3c = auStack_50;
      pppuStack_30 = &ppuStack_40;
      ppuStack_40 = &lbl_821B90AC;
      fn_823599A8(param_1,&ppuStack_40);
      fn_82359C18(&ppuStack_40);
    }
  }
  iVar4 = fn_8242E3E0(param_1);
  if ((iVar4 != 0) &&
     (iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0x93c), iVar4 != 0)) {
    *(unsigned char *)(iVar4 + 0x30) = 0;
    uVar2 = ltcg_pool_0_0f;
    *(unsigned int *)(iVar4 + 0x50) = lbl_821CA460;
    *(unsigned int *)(iVar4 + 0x54) = uVar2;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x174) + 300) = 1;
  *(unsigned int *)(*(int *)(param_1 + 0x174) + 0x11c) = 0;
  return;
}

