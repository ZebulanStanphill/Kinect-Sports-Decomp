typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82605AF8();
extern int fn_826072F0();
extern int fn_82607498();
extern int fn_82607760();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_821CE8A0;
extern unsigned int lbl_831BF6F0;
extern unsigned int lbl_831BF6F4;
extern unsigned int lbl_831BF6F8;
extern unsigned int lbl_831BF70C;
extern unsigned int lbl_831BF714;


void fn_82607000(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  unsigned int *puVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  int in_r0;
  bool bVar8;
  unsigned short *puVar10;
  __int64 lVar9;
  unsigned char *pbVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  int iVar15;
  double dVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  
  if (lbl_831BF6F0 == 0) {
LAB_82607050:
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if ((param_7 & 2) == 0) goto LAB_82607050;
  }
  if (lbl_831BF6F4 != 0) {
    bVar6 = true;
    if ((param_7 & 4) != 0) goto LAB_82607070;
  }
  bVar6 = false;
LAB_82607070:
  if ((lbl_831BF6F8 == 0) || (bVar8 = true, (param_7 & 1) == 0)) {
    bVar8 = false;
  }
  if ((bVar5) || (bVar5 = false, bVar6)) {
    bVar5 = true;
  }
  if (*(short *)(param_2 + 0xb0) == 0) {
    param_8[2] = 0;
    param_8[4] = 0;
    param_8[6] = 0;
    param_8[8] = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_2 + 0xa0);
    puVar13 = (unsigned int *)(param_2 + 0xa0);
    if (uVar1 < *(unsigned int *)(param_2 + 0xa4)) {
      puVar10 = (unsigned short *)(uVar1 - 0x518);
      iVar15 = ((*(unsigned int *)(param_2 + 0xa4) - uVar1) - 1) / 0x560 + 1;
      do {
        puVar10[0x2af] = 0;
        puVar10 = puVar10 + 0x2b0;
        *puVar10 = 0;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    *(unsigned short *)(param_2 + 0x270) = 0;
    *(unsigned int *)(param_2 + 0x264) = *(unsigned int *)(param_2 + 0x260);
    fVar7 = ltcg_pool_0_0f;
    dVar16 = (double)ltcg_pool_0_0f;
    *(unsigned int *)(param_2 + 0x278) = *(unsigned int *)(param_2 + 0x274);
    puVar14 = (unsigned int *)((unsigned int)(&lbl_821CE8A0 + in_r0) & 0xfffffff0);
    uVar12 = *puVar14;
    uVar17 = puVar14[1];
    uVar18 = puVar14[2];
    uVar19 = puVar14[3];
    *(unsigned short *)(param_2 + 0x284) = 0;
    *(unsigned int *)(param_2 + 0x28c) = *(unsigned int *)(param_2 + 0x288);
    *(unsigned short *)(param_2 + 0x298) = 0;
    *(unsigned int *)(param_2 + 0x2a0) = *(unsigned int *)(param_2 + 0x29c);
    *(unsigned short *)(param_2 + 0x2ac) = 0;
    puVar14 = (unsigned int *)(param_2 + 0x100U & 0xfffffff0);
    *puVar14 = uVar12;
    puVar14[1] = uVar17;
    puVar14[2] = uVar18;
    puVar14[3] = uVar19;
    *(unsigned int *)(param_2 + 0x110) = 0;
    if (bVar8) {
      *(float *)(param_2 + 0x118) = fVar7;
      *(float *)(param_2 + 0x11c) = fVar7;
      fn_826072F0(param_2,param_4,puVar13,param_3);
      fn_82605AF8(puVar13,param_2 + 0x260,param_5);
    }
    if (bVar5) {
      fn_82607498(param_2,param_3,param_4);
    }
    uVar1 = *puVar13;
    *(float *)(param_2 + 0x124) = (float)dVar16;
    *(unsigned int *)(param_2 + 0x40) = 0;
    if (uVar1 < *(unsigned int *)(param_2 + 0xa4)) {
      pbVar11 = (unsigned char *)(uVar1 - 0x51b);
      lVar9 = (unsigned __int64)((*(unsigned int *)(param_2 + 0xa4) - uVar1) - 1) / 0x560 + 1;
      do {
        pbVar2 = pbVar11 + 0x563;
        pbVar3 = pbVar11 + 0x560;
        *(short *)(pbVar11 + 0x565) = *(short *)pbVar2;
        pbVar11 = pbVar11 + 0x560;
        *pbVar11 = *pbVar3 & 0xfe;
        *(unsigned int *)(param_2 + 0x40) = (int)*(short *)pbVar2 | *(unsigned int *)(param_2 + 0x40);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if ((*(unsigned int *)(param_2 + 0x40) & 1) != 0) {
      fn_82607760(param_2,param_3);
    }
    if (lbl_831BF70C != 0) {
      iVar15 = 0;
      if (0 < *(int *)(param_2 + 0xb4)) {
        puVar14 = (unsigned int *)(param_2 + 0xb4);
        do {
          puVar14 = puVar14 + 1;
          (*(int (**)())**(unsigned int **)*puVar14)
                    (param_1,(unsigned int *)*puVar14,param_3,param_4,param_2);
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(param_2 + 0xb4));
      }
    }
    param_8[2] = (unsigned int)*(unsigned short *)(param_2 + 0x270);
    param_8[4] = (unsigned int)*(unsigned short *)(param_2 + 0x284);
    param_8[6] = (unsigned int)*(unsigned short *)(param_2 + 0x298);
    param_8[8] = (unsigned int)*(unsigned short *)(param_2 + 0x2ac);
  }
  param_8[1] = 0;
  *param_8 = 0;
  param_8[3] = *(unsigned int *)(param_2 + 0x260);
  param_8[5] = *(unsigned int *)(param_2 + 0x274);
  param_8[7] = *(unsigned int *)(param_2 + 0x288);
  param_8[9] = *(unsigned int *)(param_2 + 0x29c);
  if ((*(int *)(param_2 + 0x110) == 0) || (uVar12 = 1, lbl_831BF714 == 0)) {
    uVar12 = 0;
  }
  param_8[10] = uVar12;
  puVar14 = (unsigned int *)(param_2 + 0x100U & 0xfffffff0);
  uVar12 = puVar14[1];
  uVar17 = puVar14[2];
  uVar18 = puVar14[3];
  puVar4 = (unsigned int *)((unsigned int)(param_8 + 0xc) & 0xfffffff0);
  *puVar4 = *puVar14;
  puVar4[1] = uVar12;
  puVar4[2] = uVar17;
  puVar4[3] = uVar18;
  return;
}

