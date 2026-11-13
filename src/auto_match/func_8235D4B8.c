extern int fn_8225F160();
extern int fn_82512E18();
extern int fn_8265CA20();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int iStack_48;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_38;


unsigned int fn_8235D4B8(int param_1,unsigned int *param_2)

{
  __int64 *plVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  __int64 *plVar5;
  __int64 lStack_50;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  unsigned int uStack_38;
  
  iVar2 = fn_8225F160();
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 == 4) {
    uVar3 = 0;
  }
  else {
    plVar5 = *(__int64 **)(param_1 + 0x1bb4);
    plVar1 = *(__int64 **)(param_1 + 0x1bb8);
    iStack_40 = 0;
    iStack_3c = 0;
    uStack_38 = 0;
    for (; plVar5 != plVar1; plVar5 = (__int64 *)((int)plVar5 + 0xc)) {
      iStack_48 = *(int *)(plVar5 + 1);
      lStack_50 = *plVar5;
      if (iStack_48 == iVar2) {
        fn_82512E18(&iStack_40,&lStack_50);
      }
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = (int)((float)(__int64)((iStack_3c - iStack_40) / 0xc) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    lStack_50 = (__int64)iVar2;
    iVar2 = iVar2 * 0xc;
    iVar4 = iVar2 + iStack_40;
    uVar3 = *(unsigned int *)(iVar2 + iStack_40);
    iStack_48 = *(unsigned int *)(iVar4 + 8);
    *param_2 = *(unsigned int *)(iVar4 + 4);
    if (iStack_40 != 0) {
      fn_8265CA20();
    }
  }
  return uVar3;
}

