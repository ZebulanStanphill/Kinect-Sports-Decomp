#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern float fRam831d3bac;
extern float fRam831d3bb0;
extern float fRam831d3bb4;
extern float fRam831d3bb8;
extern float fRam831d3bc0;
extern float fRam831d3bc4;
extern float fRam831d3bc8;
extern float fRam831d3bcc;
extern float fRam831d3bd0;
extern int fn_82275128();
extern int fn_82531898();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82560100();
extern unsigned int lbl_8218E1AC;
extern float lbl_8218E8FC;
extern float lbl_8219248C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824779E0(int param_1,char param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  float afStack_60;
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [80];
  
  iVar3 = fn_82275128();
  iVar3 = *(int *)(*(int *)(iVar3 + 8) * 4 + iVar3);
  if ((iVar3 == 0) || (param_2 == '\0')) {
    uVar6 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar7 = uVar6 * 0x19660d + 0x3c6ef35f;
    fVar2 = (fRam831d3bb0 - fRam831d3bac) * ((float)(uVar6 & 0x7fffff | 0x3f800000) - lbl_821CA460)
            + fRam831d3bac;
    fVar1 = (fRam831d3bb8 - fRam831d3bb4) * ((float)(uVar7 & 0x7fffff | 0x3f800000) - lbl_821CA460)
            + fRam831d3bb4;
  }
  else {
    uVar5 = *(unsigned __int64 *)(iVar3 + 0x24);
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned __int64)uVar5 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uStack_58 = ((((unsigned __int64)(uStack_58)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)uVar5)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uVar6 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar7 = uVar6 * 0x19660d + 0x3c6ef35f;
    fVar2 = (((float)(uVar6 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8219248C +
            (((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF)) - lbl_8218E1AC;
    fVar1 = (((float)(uVar7 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8219248C +
            (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF)) - lbl_8218E1AC;
  }
  uStack_58 = CONCAT44(fVar2,fVar1);
  lbl_83265A28 = uVar7 * 0x19660d + 0x3c6ef35f;
  afStack_60 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  fn_82531898((double)((fRam831d3bd0 - fRam831d3bcc) * (afStack_60 - lbl_821CA460) +
                          fRam831d3bcc),&uStack_58);
  iVar4 = param_1 + 0xa8;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  afStack_60 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  iVar3 = (int)((afStack_60 - lbl_821CA460) * lbl_8218E8FC);
  uStack_58 = (__int64)iVar3;
  if (iVar3 == 1) {
    iVar4 = param_1 + 0xac;
  }
  else if (iVar3 == 2) {
    iVar4 = param_1 + 0xb0;
  }
  else if (iVar3 == 3) {
    iVar4 = param_1 + 0xb4;
  }
  fn_82560100((double)fRam831d3bc8,*(unsigned int *)(param_1 + 0x15c),iVar4,auStack_50);
  afStack_60 = *(float *)(param_1 + 200);
  afStack_60 =
       (float)fn_82535298(&afStack_60,*(unsigned int *)(*(int *)(param_1 + 0x15c) + 0x84c),
                                0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(&afStack_60);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0x140) =
       (fRam831d3bc4 - fRam831d3bc0) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fRam831d3bc0;
  return;
}

