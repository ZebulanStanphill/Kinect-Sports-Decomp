#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_68;
extern int fn_824731D8();
extern int fn_82536690();
extern int fn_8265CA20();
extern int fn_82837D98();
extern int fn_82F63CA0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


void fn_82473038(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar7;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  int iVar9;
  double dVar10;
  __int64 lStack_70;
  unsigned int auStack_68 [2];
  unsigned __int64 uStack_60;
  unsigned int uStack_58;
  
  piVar7 = (int *)(param_1 + 0x1c);
  uStack_60 = 0;
  uVar8 = 0;
  uStack_58 = 0;
  do {
    if ((*piVar7 != 0) && (param_2 != uVar8)) {
      lStack_70 = CONCAT44(uVar8,(((unsigned __int64)(lStack_70) >> 32) & 0xFFFFFFFF));
      fn_82536690(&uStack_60,&lStack_70);
    }
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 0x41;
  } while (uVar8 < 6);
  iVar2 = *(int *)(param_2 * 0x104 + param_1 + 0x1c);
  if (iVar2 != 0) {
    fn_82837D98(*(unsigned int *)(iVar2 + 0x14),0,&lStack_70);
    fn_824731D8(param_1,0,(((unsigned __int64)(lStack_70) >> 0) & 0xFFFFFFFF));
  }
  iVar2 = (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
  uVar6 = 1;
  if ((((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) != (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF)) {
    iVar5 = (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF);
    dVar10 = (double)lbl_821CA460;
    iVar9 = (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF);
    do {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0xc) <= (uVar6 & 0xffffffff)) break;
      uStack_60 = (__int64)(iVar5 >> 2);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar1 = (int)((float)uStack_60 *
                   (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar10));
      lStack_70 = (__int64)iVar1;
      iVar1 = iVar1 * 4;
      iVar3 = iVar1 + iVar2;
      iVar1 = *(int *)(iVar1 + iVar2);
      iVar4 = iVar3 + 4;
      fn_82F63CA0(iVar3,iVar4,(iVar9 - iVar4 >> 2) << 2);
      iVar9 = iVar9 + -4;
      iVar5 = iVar5 + -4;
      fn_82837D98(*(unsigned int *)(*(int *)(iVar1 * 0x104 + param_1 + 0x1c) + 0x14),0,auStack_68);
      fn_824731D8(param_1,uVar6,auStack_68[0]);
      uVar6 = uVar6 + 1;
    } while (iVar2 != iVar9);
  }
  if (iVar2 != 0) {
    fn_8265CA20(iVar2);
  }
  return;
}

