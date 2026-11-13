#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82637550();
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82641C20();
extern int fn_82641DA0();
extern int fn_82641EF8();
extern int fn_82642F50();
extern int fn_82643B08();
extern int fn_82644FE8();
extern int fn_82645110();
extern int fn_82647258();
extern int fn_8264B3F8();
extern int fn_8264B4A0();
extern unsigned int uStack_80;


void fn_8264C398(unsigned __int64 *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned __int64 *puVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned int *puVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  int *piVar18;
  unsigned int uStack_80;
  
  uVar12 = *(unsigned __int64 *)(param_2 + 0xe) & param_1[4];
  uVar10 = *(unsigned __int64 *)(param_2 + 8);
  uVar14 = *(unsigned __int64 *)(param_2 + 0xc) & param_1[3];
  uVar9 = param_1[1];
  uVar17 = *(unsigned __int64 *)(param_2 + 10) & param_1[2];
  iVar1 = *(int *)(param_1 + 0x6b4);
  if ((*(unsigned __int64 *)(param_2 + 6) & *param_1) != 0) {
    fn_82641EF8(param_1,*(unsigned __int64 *)(param_2 + 6) & *param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if ((uVar10 & uVar9) != 0) {
    fn_82641EF8(param_1,uVar10 & uVar9,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar17 != 0) {
    if ((uVar17 & 0x1e0000) != 0) {
      uVar17 = fn_82642F50(param_1,uVar17);
    }
    if ((param_1[5] & uVar17) != 0) {
      uVar17 = fn_826417C8(param_1,uVar17,*(unsigned int *)(param_1 + 0x528));
    }
    if ((uVar17 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar17 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar17 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar17 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar17 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if (uVar14 != 0) {
    if ((uVar14 & 0xffffffff) != 0) {
      fn_82641DA0(param_1,uVar14 << 0x20);
    }
    if ((uVar14 & 0x7ffffc00000000) != 0) {
      fn_82641B60(param_1,(uVar14 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
    }
    param_1[3] = 0;
  }
  if (uVar12 != 0) {
    if ((uVar12 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar12 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar12 & 0x7e000000000000) << 9);
    }
    if ((uVar12 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar12 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar12 << 0x1a,0x2300,param_1 + 0x537);
    }
    if (((uVar12 & 0xc000000000000000) != 0) &&
       (((param_1[0x558] & 0x8000000000000000) != 0 || ((param_1[0x558] & 0x4000000000000000) != 0))
       )) {
      fn_82647258(param_1);
    }
    param_1[4] = 0;
  }
  puVar6 = *(unsigned int **)(param_1 + 6);
  if (*(unsigned int **)(param_1 + 7) < puVar6) {
    puVar6 = (unsigned int *)fn_82645110(param_1);
  }
  uVar2 = param_2[0x1b];
  uVar5 = uVar2 << 0x19 | uVar2 >> 7;
  if (((int)uVar5 < 0) && ((*(unsigned char *)((int)param_1 + 0x2abc) & 0x80) == 0)) {
    puVar6[1] = 0xc0006300;
    puVar6 = puVar6 + 2;
    *puVar6 = 0;
  }
  uVar13 = *(unsigned int *)((int)param_1 + 0x325c);
  puVar7 = (unsigned int *)0x0;
  if (((*(unsigned char *)((int)param_1 + 0x2abc) & 1) != 0) && ((uVar2 & 0x800) != 0)) {
    puVar7 = *(unsigned int **)((int)param_1 + 0x347c);
    uVar13 = 1;
    if (*(unsigned int **)(param_1 + 0x690) < puVar7 + 4) {
      puVar7 = (unsigned int *)fn_82643B08(param_1 + 0x68e);
    }
    *puVar7 = puVar6;
    *(unsigned int **)((int)param_1 + 0x347c) = puVar7 + 4;
    puVar6[1] = 0xc0006000;
    puVar6 = puVar6 + 2;
    *puVar6 = 0xffffffff;
  }
  if ((uVar2 & 0x20) == 0) {
    puVar15 = (unsigned int *)param_2[0x1d];
    uVar16 = 0;
LAB_8264c860:
    iVar11 = uVar16 + 1;
    uVar3 = puVar15[1];
    uVar16 = uVar16 + 1;
    puVar6[1] = uVar13 | 0xc0013f00;
    uVar4 = puVar15[iVar11 * 2];
    puVar6[2] = (puVar15 + iVar11 * 2)[1];
    puVar6 = puVar6 + 3;
    *puVar6 = uVar4 & 0xffffff;
    if (uVar16 == uVar3) {
      puVar15 = (unsigned int *)*puVar15;
      uVar16 = 0;
      if (puVar15 == (unsigned int *)0x0) goto LAB_8264c740;
    }
    *(unsigned int **)(param_1 + 6) = puVar6;
    if (*(unsigned int **)(param_1 + 7) < puVar6) {
      puVar6 = (unsigned int *)fn_82645110(param_1);
    }
    goto LAB_8264c860;
  }
  *(unsigned int **)(param_1 + 6) = puVar6;
  if (puVar6 != (unsigned int *)(*(int *)((int)param_1 + 0x3b24) + -4)) {
    fn_82645110(param_1);
  }
  piVar18 = (int *)param_2[0x1d];
  do {
    fn_82644FE8(param_1,piVar18 + 2,piVar18[1]);
    piVar18 = (int *)*piVar18;
  } while (piVar18 != (int *)0x0);
  puVar6 = *(unsigned int **)(param_1 + 6);
  if (*(unsigned int **)(param_1 + 7) < puVar6) {
    puVar6 = (unsigned int *)fn_82645110(param_1);
  }
LAB_8264c740:
  if (puVar7 != (unsigned int *)0x0) {
    puVar6[1] = 0xc0006000;
    puVar6[2] = 0x80000000;
    puVar6[3] = 0xc0015a01;
    puVar6[4] = 0x1a;
    puVar6[5] = (((unsigned int)(puVar7 + 1) >> 0x14) + 0x200 & 0x1000) + ((unsigned int)(puVar7 + 1) & 0x1ffffffe)
                | 1;
    puVar6[6] = 0xc0004601;
    puVar6 = puVar6 + 7;
    *puVar6 = 0x19;
  }
  if ((int)uVar5 < 0) {
    puVar6[1] = 0xc0006000;
    puVar6[2] = *(unsigned int *)((int)param_1 + 0x3254);
    puVar6[3] = 0xc0006100;
    puVar6 = puVar6 + 4;
    *puVar6 = *(unsigned int *)(param_1 + 0x64b);
  }
  *(unsigned int **)(param_1 + 6) = puVar6;
  if ((*(unsigned char *)((int)param_1 + 0x2abc) & 0x80) == 0) {
    uVar2 = param_2[0x1e];
    if (((uVar2 != 0) && ((*(unsigned char *)((int)param_1 + 0x2abc) & 0x20) != 0)) &&
       (param_2[2] != *(unsigned int *)((int)param_1 + 0x2a9c))) {
      puVar6 = *(unsigned int **)((int)param_1 + 0x34f4);
      if (*(unsigned int **)(param_1 + 0x69f) < puVar6 + 1) {
        puVar6 = (unsigned int *)fn_82643B08(param_1 + 0x69d);
      }
      *puVar6 = uVar2;
      *(unsigned int **)((int)param_1 + 0x34f4) = puVar6 + 1;
    }
    uVar2 = *(unsigned int *)((int)param_1 + 0x2a9c);
    param_2[2] = uVar2;
    if (param_2[0x1c] != 0) {
      fn_8264B3F8(uVar2,param_2[0x1c],0);
    }
  }
  else {
    uVar5 = *(unsigned int *)(param_1 + 0x554);
    uVar13 = *param_2;
    *(unsigned int *)(iVar1 + 0x6c) = uVar2 & 0x40 | *(unsigned int *)(iVar1 + 0x6c) | 0x20;
    if (((uVar5 & uVar13) != 0) || (param_2[0x1c] != 0)) {
      puVar8 = *(unsigned __int64 **)(param_1 + 0x6b5);
      if (*(unsigned __int64 **)((int)param_1 + 0x35ac) <= puVar8) {
        puVar8 = (unsigned __int64 *)fn_8264B4A0(param_1);
      }
      *puVar8 = CONCAT44((unsigned int)param_2 >> 2 | uStack_80 & 0x80000000,0xffffffff);
      *(unsigned __int64 **)(param_1 + 0x6b5) = puVar8 + 1;
    }
  }
  uVar17 = *(unsigned __int64 *)(param_2 + 0x18);
  if ((uVar17 & 0x1c00000000000) != 0x1c00000000000) {
    uVar2 = *(unsigned int *)(param_1 + 0x519);
    fn_82637550(param_1,(*(int *)((int)param_1 + 0x28c4) << 0x11) >> 0x11,
                      (*(int *)((int)param_1 + 0x28c4) << 1) >> 0x11,
                      (int)(uVar2 << 0x11 | uVar2 >> 0xf) >> 0x11,(int)(uVar2 << 1) >> 0x11);
  }
  uVar12 = *(unsigned __int64 *)(param_2 + 0x12);
  uVar10 = *(unsigned __int64 *)(param_2 + 0x14);
  uVar9 = *(unsigned __int64 *)(param_2 + 0x16);
  *param_1 = ~*(unsigned __int64 *)(param_2 + 0x10);
  param_1[1] = ~uVar12;
  param_1[2] = ~uVar10;
  param_1[3] = ~uVar9;
  param_1[4] = ~uVar17;
  return;
}

