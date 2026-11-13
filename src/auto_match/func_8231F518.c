#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern int fn_822C72E0();
extern int fn_8230C220();
extern int fn_8231F730();
extern int fn_823C2148();
extern int fn_823CDBB0();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8231F518(double param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int in_r0;
  int iVar7;
  unsigned __int64 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  uVar8 = 1;
  dVar11 = (double)ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x48) != 0) {
    dVar9 = (double)(float)((double)*(float *)(param_2 + 0x48) - param_1);
    dVar12 = -dVar9;
    dVar10 = dVar11;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar12 < dVar11) << 2) | (unsigned int)(NAN(dVar12) || NAN(dVar11)) << 2))
        < 0.0) {
      dVar10 = dVar9;
    }
    *(float *)(param_2 + 0x48) = (float)dVar10;
  }
  if (((double)*(float *)(param_2 + 0x48) == dVar11) || (*(char *)(param_2 + 0x50) != '\0')) {
    iVar1 = *(int *)(param_2 + 0x4c);
    if (iVar1 == 0) {
      if (*(char *)(param_2 + 0x50) == '\0') {
        *(unsigned char *)(param_2 + 0x50) = 1;
        *(unsigned int *)(param_2 + 0x48) = lbl_82193B00;
        fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                          0xffffffff821ae9cc);
      }
      else if ((double)*(float *)(param_2 + 0x48) == dVar11) {
        iVar1 = *(int *)(param_2 + 0x40);
        uStack_24 = 1;
        uVar8 = 0;
        iVar7 = *(int *)(param_2 + 0xc);
        uVar2 = *(unsigned int *)(param_2 + 0x10);
        uStack_30 = 0;
        uStack_2c = *(unsigned int *)(iVar1 + 0x28);
        puVar4 = (unsigned int *)(iVar1 + 0x80U & 0xfffffff0);
        uVar13 = puVar4[1];
        uVar14 = puVar4[2];
        uVar15 = puVar4[3];
        uStack_28 = *(unsigned int *)(iVar1 + 0x2c);
        uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFFFF) << 8))) | ((((unsigned __int64)((((unsigned __int64)(uStack_50) >> 8) & 0xFFFFFF) & 0xffff)) & ((unsigned __int64)0xFFFFFF)) << 8));
        uStack_50 = (unsigned int)(((unsigned __int64)(uStack_50) >> 8) & 0xFFFFFF);
        uVar3 = *(unsigned int *)(iVar7 + 0x2c);
        puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
        *puVar5 = *puVar4;
        puVar5[1] = uVar13;
        puVar5[2] = uVar14;
        puVar5[3] = uVar15;
        fn_823CDBB0(uVar2,*(unsigned int *)(iVar7 + 0x28),uVar3,auStack_40,&uStack_50,1);
        fn_823C2148(*(unsigned int *)(param_2 + 0x10),0,1);
      }
    }
    else {
      iVar7 = *(int *)(param_2 + 0x44);
      if ((iVar7 == 0) || (iVar1 != 1)) {
        iVar7 = fn_8231F730(param_2,*(unsigned int *)(param_2 + 0x40));
      }
      if (iVar7 == 0) {
        *(float *)(param_2 + 0x48) = (float)dVar11;
        *(unsigned int *)(param_2 + 0x4c) = 0;
      }
      else {
        *(int *)(param_2 + 0x4c) = iVar1 + -1;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        uVar6 = lbl_83265A28 & 0x7fffff;
        *(int *)(param_2 + 0x40) = iVar7;
        *(float *)(param_2 + 0x48) =
             (float)((double)((float)(uVar6 | 0x3f800000) - lbl_821CA460) * dVar11 +
                    (double)lbl_821917B4);
      }
    }
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if ((*(int *)(iVar1 + 0x58) != 0x11) && (*(int *)(iVar1 + 0x54) != 0x11)) {
    uStack_50 = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x28);
    uStack_4c = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x2c);
    fn_8230C220(iVar1 + 0xa18,&uStack_50);
  }
  return uVar8;
}

