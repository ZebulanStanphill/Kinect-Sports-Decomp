extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_82720090();
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82010394;


void fn_82720798(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int aiStack_30 [2];
  unsigned char **ppuStack_28;
  int iStack_24;
  int iStack_20;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_30,uVar4,uVar1,0xffffffffffffffff,0);
    iVar2 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 8) != 0) {
      iStack_24 = *(int *)(param_1 + 0x1c) + -1;
      ppuStack_28 = &lbl_82010394;
      iStack_20 = (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc) >> 4) + *(int *)(iVar2 + 0x1c) * 0x20
                  + -0x24;
      fn_82720090(iVar2,*(int *)(param_1 + 8),aiStack_30,&ppuStack_28);
      ppuStack_28 = &lbl_8200C4D4;
    }
    puVar3 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar3);
    *puVar3 = 0;
    lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_30[0] + 8) - 1;
    *(int *)(aiStack_30[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_30[0]);
    }
  }
  return;
}

