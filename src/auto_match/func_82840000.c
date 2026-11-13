extern int fn_82837D98();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack_10;
extern unsigned int iStack_20;
extern unsigned int iStack_c;
extern unsigned int uStack_18;


void fn_82840000(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int iStack_20;
  unsigned int uStack_18;
  int iStack_10;
  int iStack_c;
  
  iStack_20 = param_3;
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
    iStack_20 = *(int *)(param_1 + 0x28);
  }
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  for (uStack_18 = 0; uStack_18 < *(unsigned int *)(iStack00000014 + 0x20); uStack_18 = uStack_18 + 1) {
    iVar1 = *(int *)(*(int *)(*(int *)(iStack00000014 + 0x24) + uStack_18 * 0xc) + 4);
    for (iStack_10 = 0; iStack_10 < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x12); iStack_10 = iStack_10 + 1)
    {
      if (*(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34 + 0xc) == 0) {
        iVar2 = iStack0000001c + *(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34);
        if (*(int *)(iStack_20 + *(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34 + 4) * 4) != 0) {
          fn_82837D98(*(unsigned int *)
                         (iStack_20 + *(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34 + 4) * 4),0,
                        iVar2 + 4);
        }
        *(unsigned int *)(iVar2 + 8) =
             *(unsigned int *)(iStack_20 + *(int *)(*(int *)(iVar1 + 4) + iStack_10 * 0x34 + 4) * 4);
      }
    }
    for (iStack_c = 0; iStack_c < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x14); iStack_c = iStack_c + 1) {
      if (*(int *)(*(int *)(iVar1 + 8) + iStack_c * 0x34 + 0xc) == 0) {
        fn_82837D98(*(unsigned int *)
                       (iStack_20 + *(int *)(*(int *)(iVar1 + 8) + iStack_c * 0x34 + 4) * 4),0,
                      iStack0000001c + *(int *)(*(int *)(iVar1 + 8) + iStack_c * 0x34) + 4);
      }
    }
  }
  return;
}

