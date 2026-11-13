typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int fStack_8c;
extern unsigned int fStack_9c;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82275128();
extern int fn_824779E0();
extern int fn_82478560();
extern int fn_82531898();
extern int fn_82539560();
extern int fn_8253D030();
extern int fn_8253D108();
extern int fn_82579288();
extern int fn_825795A8();
extern int fn_82F4EBC0();
extern int fn_82F4EFF8();
extern int fn_82F50108();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_82195900;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C6928;
extern unsigned int lbl_831D3B50;
extern unsigned int lbl_831D3B58;
extern unsigned int lbl_831D3B5C;
extern unsigned int lbl_831D3B60;
extern unsigned int lbl_831D3B64;
extern unsigned int lbl_831D3B6C;
extern unsigned int lbl_831D3B94;
extern unsigned int lbl_831D3BA4;


unsigned __int64 fn_82477FB0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  float fStack_d0;
  float fStack_cc;
  __int64 lStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b0;
  float fStack_ac;
  unsigned char auStack_a0 [4];
  float fStack_9c;
  unsigned char auStack_90 [4];
  float fStack_8c;
  float afStack_80 [4];
  float afStack_70 [28];
  
  iVar6 = (int)in_r0;
  if (*(int *)(param_1 + 0x15c) == 0) {
    return 0;
  }
  uVar9 = 0;
  dVar12 = (double)ltcg_pool_0_0f;
  bVar3 = false;
  fStack_cc = ltcg_pool_0_0f;
  fStack_d0 = ltcg_pool_0_0f;
  if (lbl_831D3B50 == 0) {
    if (*(int *)(param_1 + 0x160) == 0) {
      iVar6 = fn_82275128();
      uVar4 = fn_82F4EBC0(*(unsigned int *)(iVar6 + 8) & 0xff);
      uVar7 = fn_82F4EFF8();
      uVar7 = uVar7 & 0xff;
    }
    else {
      piVar8 = *(int **)(*(int *)(param_1 + 0x160) + 0xb60);
      iVar6 = fn_82275128();
      uVar4 = fn_82F4EBC0(*(unsigned int *)(iVar6 + 8) & 0xff);
      uVar7 = (**(int (***)())(*piVar8 + 4))(piVar8);
    }
    iVar6 = (int)in_r0;
    if (((uVar4 & 0xffffffff) == 0) || (uVar7 == 0)) goto LAB_82478380;
    fn_82F50108(uVar4,10,2,&fStack_c0,0,0,0);
    fn_82F50108(uVar4,0xf,2,&fStack_b0,0,0,0);
    fn_82F50108(uVar4,8,2,afStack_80,0,0,0);
    fn_82F50108(uVar4,0xd,2,afStack_70,0,0,0);
    fn_82F50108(uVar4,1,2,auStack_90,0,0,0);
    fn_82F50108(uVar4,6,2,auStack_a0,0,0,0);
    iVar6 = (int)in_r0;
    iVar5 = 0;
    if ((fStack_9c * lbl_82193B00 < fStack_bc) && (fStack_9c * lbl_82193B00 < fStack_ac)) {
      iVar5 = 1;
    }
    if ((iVar5 != *(int *)(param_1 + 0x124)) && (*(int *)(param_1 + 0x124) = iVar5, iVar5 != 0)) {
      if (lbl_831D3B94 == 0) {
        iVar5 = 0;
        lStack_c8 = (__int64)(0x500 / lbl_831D3B6C);
        dVar13 = (double)lStack_c8;
        dVar11 = dVar12;
        if (0 < lbl_831D3B6C) {
          do {
            fn_82478560(dVar11,param_1);
            dVar11 = (double)(float)(dVar11 + dVar13);
            if (lbl_831D3BA4 != 0) {
              fn_824779E0(param_1,0);
            }
            iVar6 = (int)in_r0;
            iVar5 = iVar5 + 1;
          } while (iVar5 < lbl_831D3B6C);
        }
      }
      else {
        if (*(char *)(param_1 + 300) != '\0') goto LAB_824782c8;
        *(float *)(param_1 + 0x130) = (float)dVar12;
        *(unsigned int *)(param_1 + 0x134) = 0;
        *(unsigned char *)(param_1 + 300) = 1;
        *(unsigned char **)(param_1 + 0x180) = &lbl_831C6928;
        *(unsigned int *)(param_1 + 0x184) = 0xe;
      }
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    }
LAB_824782c8:
    if (fStack_9c < fStack_8c + lbl_831D3B60) {
      return 0;
    }
    bVar10 = fStack_ac < fStack_bc;
    if (bVar10) {
      fStack_ac = fStack_bc;
    }
    if ((fStack_ac < fStack_8c + lbl_831D3B60) || (fStack_9c <= fStack_ac)) goto LAB_82478380;
    if (bVar10) {
      afStack_70[0] = afStack_80[0];
      fStack_b0 = fStack_c0;
    }
    dVar11 = (double)(fStack_b0 - afStack_70[0]);
    if ((dVar11 < -(double)lbl_831D3B5C) || ((double)lbl_831D3B5C <= dVar11)) goto LAB_82478380;
    dVar11 = (double)fn_82539560(dVar11,(double)lbl_831D3B58,-(double)lbl_831D3B58,dVar12,
                                  (double)lbl_82195900);
    fStack_d0 = (float)dVar11;
    fStack_cc = lbl_831D3B64;
  }
  else {
    iVar5 = fn_82275128();
    iVar5 = *(int *)(*(int *)(iVar5 + 8) * 4 + iVar5);
    if (iVar5 == 0) {
      return 0;
    }
    if ((*(char *)(iVar5 + 0x40) == '\0') || (bVar3 = true, *(char *)(iVar5 + 0x42) == '\0')) {
      bVar3 = false;
    }
    if (!bVar3) {
      return 0;
    }
    fStack_d0 = *(float *)(iVar5 + 0x24);
    fStack_cc = *(float *)(iVar5 + 0x28);
  }
  bVar3 = true;
LAB_82478380:
  if (bVar3) {
    fn_82531898((double)lbl_82005748,&fStack_d0);
    fn_82531898(dVar12,&fStack_d0);
    if (*(int *)(*(int *)(param_1 + 0x15c) + 0x234) != 0) {
      fn_8253D108(*(int *)(param_1 + 0x15c) + 0x1f0);
    }
    piVar8 = (int *)fn_82579288(*(unsigned int *)(*(int *)(param_1 + 0x15c) + 0x6d0));
    if ((piVar8 != (int *)0x0) &&
       (iVar5 = fn_825795A8(piVar8,afStack_80,afStack_70,4), iVar5 == 1)) {
      uVar9 = 1;
      puVar1 = (unsigned int *)(iVar6 + *(int *)(piVar8[4] + 4) & 0xfffffff0);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar2 = (unsigned int *)(iVar6 + param_2 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
    }
    *(unsigned short *)(piVar8 + 0x67) = 0;
    piVar8[100] = piVar8[99];
    *(unsigned char *)(piVar8[0x62] + *piVar8 + 0x754) = 0;
    fn_8253D030(dVar12,(unsigned __int64)*(unsigned int *)(param_1 + 0x15c) + 0x1f0);
    return uVar9;
  }
  return 0;
}

