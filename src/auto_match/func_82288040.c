extern int fn_8225F160();
extern int fn_8228ABB8();
extern int fn_8234F338();
extern int fn_82484768();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82A81CC0();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82288040(int param_1,int param_2)

{
  float fVar1;
  char *pcVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  float afStack_40 [2];
  __int64 alStack_38 [7];
  
  pcVar4 = strstr((char *)(*(int *)(param_1 + 0x11f0) + 0x234),"boxing");
  if (pcVar4 == (char *)0x0) {
    uVar8 = (__int64)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    if ((__int64)uVar8 < 1) {
      uVar5 = 0;
      goto LAB_822880c4;
    }
  }
  else {
    uVar5 = fn_82A81CC0((unsigned __int64)*(unsigned int *)(param_1 + 0x11f0) + 0x844);
    uVar8 = (unsigned __int64)lbl_83265A28;
    uVar5 = (unsigned int)LZCOUNT((uVar5 & 0xff) - 1) >> 5;
LAB_822880c4:
    if (uVar5 == 0) {
      lbl_83265A28 = (int)uVar8 * 0x19660d + 0x3c6ef35f;
      uVar5 = *(unsigned int *)(param_1 + 0x1230);
      afStack_40[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      fVar1 = (afStack_40[0] - lbl_821CA460) * (float)(__int64)*(int *)(param_1 + 0x1238);
      goto LAB_82288178;
    }
  }
  lbl_83265A28 = (int)uVar8 * 0x19660d + 0x3c6ef35f;
  uVar5 = *(unsigned int *)(param_1 + 0x122c);
  afStack_40[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  fVar1 = (afStack_40[0] - lbl_821CA460) * (float)(__int64)*(int *)(param_1 + 0x1234);
LAB_82288178:
  alStack_38[0] = (__int64)(int)fVar1;
  lVar9 = (unsigned __int64)(unsigned int)(int)fVar1 * 0x24 + (unsigned __int64)uVar5;
  iVar6 = fn_8225F160();
  iVar6 = param_2 * 0x28 + iVar6;
  fn_82F68CC0(iVar6 + 300,lVar9,0x24);
  *(unsigned int *)(iVar6 + 0x150) = 1;
  uVar2 = fn_8251F720(lVar9 + 0x20,0);
  uVar3 = fn_82484768(*(unsigned int *)(param_1 + 0x11f0));
  fn_8234F338((unsigned __int64)*(unsigned int *)(param_1 + 0x11f0) + 0x234,uVar3,alStack_38,afStack_40);
  fn_8228ABB8(param_1,param_2,uVar2,alStack_38,afStack_40);
  iVar6 = param_2 * 0x40 + param_1;
  *(unsigned int *)(iVar6 + 0x6a8) = 2;
  uVar7 = fn_82484768(*(unsigned int *)(param_1 + 0x11f0));
  *(unsigned int *)(iVar6 + 0x6c4) = uVar7;
  *(unsigned int *)(iVar6 + 0x6b8) = 0;
  *(unsigned int *)(iVar6 + 0x6bc) = 1;
  fn_8251FA58(uVar2);
  return;
}

