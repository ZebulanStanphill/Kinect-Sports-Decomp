#define true 1
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82641C20();
extern int fn_82641DA0();
extern int fn_82641EF8();
extern int fn_82642F50();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_82647258();
extern unsigned int lbl_82195F48;
extern unsigned int lbl_82195F4C;
extern unsigned int lbl_821CC168;
extern unsigned int lbl_821CC16C;
extern unsigned int lbl_821CC170;
extern unsigned int lbl_821CC24C;
extern unsigned int lbl_821CC250;
extern unsigned int lbl_821CC254;
extern unsigned int lbl_821CC270;
extern unsigned int lbl_821CC308;
extern unsigned int lbl_821CC3A0;
extern unsigned int lbl_821CC3A4;


void fn_82640F10(__int64 *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  unsigned char *puVar9;
  unsigned int uVar11;
  unsigned __int64 uVar10;
  unsigned int *puVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  int iVar16;
  __int64 lVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  
  puVar1 = *(unsigned int **)((int)param_1 + 0x3144);
  *(unsigned int *)((int)param_1 + 0x2974) = *(unsigned int *)((int)param_1 + 0x2974) & 0xfffffffc | 1;
  param_1[3] = param_1[3] | 0x4000000000000;
  iVar13 = 0;
  uVar5 = (unsigned int)param_2;
  if ((*(unsigned int *)(param_1 + 0x52f) & 3) == 2) {
    iVar16 = (int)(param_2 - 0x10) * 0xc;
    iVar4 = (int)((param_2 - 0x10 & 0xffffffff) << 3);
    iVar13 = *(int *)(&lbl_821CC254 + iVar16);
    *(unsigned int *)(param_1 + 0x531) = *(unsigned int *)(&lbl_821CC24C + iVar16);
    *(unsigned int *)((int)param_1 + 0x298c) = *(unsigned int *)(&lbl_821CC250 + iVar16);
    *(unsigned int *)(param_1 + 0x532) = *(unsigned int *)(&lbl_821CC254 + iVar16);
    *(unsigned int *)((int)param_1 + 0x2994) = *(unsigned int *)(&lbl_821CC3A0 + iVar4);
    *(unsigned int *)(param_1 + 0x533) = *(unsigned int *)(&lbl_821CC3A4 + iVar4);
    *(unsigned int *)((int)param_1 + 0x299c) = 0x61412107;
    *(unsigned int *)(param_1 + 0x534) = 0x66462606;
  }
  else {
    iVar16 = uVar5 * 0xc;
    *(unsigned int *)(param_1 + 0x531) = *(unsigned int *)(&lbl_821CC168 + iVar16);
    iVar4 = (int)((param_2 & 0xffffffff) << 3);
    *(unsigned int *)((int)param_1 + 0x298c) = *(unsigned int *)(&lbl_821CC16C + iVar16);
    *(unsigned int *)(param_1 + 0x532) = *(unsigned int *)(&lbl_821CC170 + iVar16);
    if ((*puVar1 & 0x80000000) == 0) {
      puVar9 = &lbl_821CC270;
      uVar11 = 0x30201000;
    }
    else {
      puVar9 = &lbl_821CC308;
      uVar11 = 0x61412101;
    }
    *(unsigned int *)((int)param_1 + 0x2994) = *(unsigned int *)(puVar9 + iVar4);
    *(unsigned int *)(param_1 + 0x533) = *(unsigned int *)(puVar9 + iVar4 + 4);
    *(unsigned int *)(param_1 + 0x534) = uVar11;
    *(unsigned int *)((int)param_1 + 0x299c) = uVar11;
  }
  uVar10 = param_1[3];
  param_1[3] = uVar10 | 0x3f8000000000;
  uVar19 = param_1[2];
  uVar15 = param_1[4];
  lVar17 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar17 != 0) {
    fn_82641EF8(param_1,lVar17,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar19 != 0) {
    if ((uVar19 & 0x1e0000) != 0) {
      uVar19 = fn_82642F50(param_1,uVar19);
    }
    if ((param_1[5] & uVar19) != 0) {
      uVar19 = fn_826417C8(param_1,uVar19,*(unsigned int *)(param_1 + 0x528));
    }
    if ((uVar19 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar19 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar19 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar19 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar19 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar19 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar19 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar19 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if ((uVar10 | 0x3f8000000000) != 0) {
    if ((uVar10 & 0xffffffff) != 0) {
      fn_82641DA0(param_1,uVar10 << 0x20);
    }
    fn_82641B60(param_1,(uVar10 & 0x7ffffc00000000 | 0x3f8000000000) << 9,0x2280,
                      (int)param_1 + 0x2964);
    param_1[3] = 0;
  }
  if (uVar15 != 0) {
    if ((uVar15 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar15 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar15 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar15 & 0x7e000000000000) << 9);
    }
    if ((uVar15 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar15 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar15 << 0x1a,0x2300,param_1 + 0x537);
    }
    if (((uVar15 & 0xc000000000000000) != 0) &&
       (((*(unsigned char *)(param_1 + 0x558) & 0x80) != 0 || ((*(unsigned char *)(param_1 + 0x558) & 0x40) != 0)))) {
      fn_82647258(param_1);
    }
    param_1[4] = 0;
  }
  while( true ) {
    uVar6 = *(unsigned int *)(param_1 + 6);
    if (*(unsigned int *)(param_1 + 7) < uVar6) {
      uVar6 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar6 + 4) = 0x2102;
    *(unsigned int *)(uVar6 + 8) = param_3;
    uVar19 = param_5;
    if (0xffff < (param_5 & 0xffffffff)) {
      uVar14 = *(unsigned int *)(&lbl_82195F48 + (int)((param_2 & 0xffffffff) << 3));
      trapWord(6,(unsigned __int64)uVar14,0);
      uVar19 = (__int64)(int)((unsigned int)(0xffff / (unsigned __int64)uVar14) & 0xfffffffe) *
               (__int64)(int)uVar14;
    }
    uVar15 = (unsigned __int64)puVar1[6];
    uVar10 = (unsigned __int64)(*puVar1 >> 0x1d) & 3;
    uVar14 = (unsigned int)(*(unsigned char *)((int)param_1 + 0x304b) != 0) << 8 |
             *(unsigned char *)((int)param_1 + *(unsigned char *)((int)param_1 + 0x304b) + 0x300a) & 0x3f;
    if ((*(unsigned int *)(param_1 + 0x52f) & 3) == 2) {
      uVar8 = (__int64)(int)(unsigned int)uVar19 * (__int64)iVar13;
      uVar15 = uVar15 + (param_4 & 0x3fffffff) * 4;
      uVar20 = (unsigned int)((uVar8 & 0xffffffff) << 0x10) | uVar5 & 0x3f | 0x900;
      iVar16 = ((int)((uVar15 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
               ((unsigned int)uVar15 & 0x1fffffff);
      uVar18 = (unsigned int)((uVar8 & 0xffffffff) << 1) & 0xfffffe | (unsigned int)(uVar10 << 0x1e);
    }
    else {
      uVar8 = (param_4 & 0x7fffffff) * 2 + uVar15;
      uVar2 = (unsigned int)((uVar19 & 0xffffffff) << 0x10) | uVar5 & 0x3f;
      uVar20 = uVar2 | 0x100;
      iVar16 = ((int)((uVar8 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar8 & 0x1fffffff);
      uVar3 = (unsigned int)(uVar10 << 0x1e);
      uVar18 = (unsigned int)uVar19 & 0xffffff | uVar3;
      if ((*puVar1 & 0x80000000) != 0) {
        uVar15 = (param_4 & 0x3fffffff) * 4 + uVar15;
        uVar18 = (unsigned int)((uVar19 & 0xffffffff) << 1) & 0xfffffe | uVar3;
        uVar20 = uVar2 | 0x900;
        iVar16 = ((int)((uVar15 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
                 ((unsigned int)uVar15 & 0x1fffffff);
      }
    }
    if ((*(unsigned char *)((int)param_1 + 0x2abc) & 1) == 0) {
      *(unsigned int *)(uVar6 + 0xc) = 0xc0032201;
      *(unsigned int *)(uVar6 + 0x10) = uVar14;
      *(unsigned int *)(uVar6 + 0x14) = uVar20;
      *(int *)(uVar6 + 0x18) = iVar16;
      puVar12 = (unsigned int *)(uVar6 + 0x1c);
      *puVar12 = uVar18;
    }
    else {
      piVar7 = *(int **)((int)param_1 + 0x347c);
      if (*(int **)(param_1 + 0x690) < piVar7 + 4) {
        piVar7 = (int *)fn_82643B08(param_1 + 0x68e);
      }
      *piVar7 = (int)(uVar6 + 8);
      *(int **)((int)param_1 + 0x347c) = piVar7 + 4;
      *(unsigned int *)(uVar6 + 0xc) = 0xc0006000;
      *(unsigned int *)(uVar6 + 0x10) = 0xffffffff;
      *(unsigned int *)(uVar6 + 0x14) = 0xc0032201;
      *(unsigned int *)(uVar6 + 0x18) = uVar14;
      *(unsigned int *)(uVar6 + 0x1c) = uVar20;
      *(int *)(uVar6 + 0x20) = iVar16;
      *(unsigned int *)(uVar6 + 0x24) = uVar18;
      *(unsigned int *)(uVar6 + 0x28) = 0xc0006000;
      *(unsigned int *)(uVar6 + 0x2c) = 0x80000000;
      *(unsigned int *)(uVar6 + 0x30) = 0xc0015a01;
      *(unsigned int *)(uVar6 + 0x34) = 0x1a;
      *(unsigned int *)(uVar6 + 0x38) =
           (((unsigned int)(piVar7 + 1) >> 0x14) + 0x200 & 0x1000) + ((unsigned int)(piVar7 + 1) & 0x1ffffffe) | 1;
      *(unsigned int *)(uVar6 + 0x3c) = 0xc0004601;
      puVar12 = (unsigned int *)(uVar6 + 0x40);
      *puVar12 = 0x19;
    }
    *(unsigned int **)(param_1 + 6) = puVar12;
    if (param_5 - uVar19 == 0) break;
    param_5 = (unsigned __int64)*(unsigned int *)(&lbl_82195F4C + (int)((param_2 & 0xffffffff) << 3)) +
              (param_5 - uVar19);
    param_4 = (uVar19 - *(unsigned int *)(&lbl_82195F4C + (int)((param_2 & 0xffffffff) << 3))) + param_4;
  }
  return;
}

