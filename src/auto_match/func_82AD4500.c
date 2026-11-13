typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDA10();
extern int fn_82AC6740();
extern int fn_82AC68F0();
extern int fn_82AD34E8();
extern int fn_82B44B88();
extern int fn_82B8F130();
extern int fn_82B8F328();
extern int fn_82B8F618();


/* WARNING: Type propagation algorithm not settling */

unsigned int fn_82AD4500(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  bool bVar7;
  char cVar9;
  unsigned int uVar8;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  int *piVar13;
  unsigned int uVar14;
  int iVar15;
  
  uVar1 = *(unsigned int *)((param_2 & 0xfffffffe) + 4);
  do {
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    piVar13 = (int *)(uVar1 + 0xc);
    for (puVar12 = *(unsigned int **)(uVar1 + 0xc); puVar12 != (unsigned int *)0x0; puVar12 = (unsigned int *)puVar12[2]) {
      uVar11 = *puVar12;
      uVar4 = (unsigned __int64)*(unsigned int *)(uVar11 + 0x30) & 0x7ffff;
      if ((*(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28)) &
          1 << ((unsigned int)uVar4 & 0x1f)) != 0) {
        if ((param_2 == uVar11) ||
           (uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff, bVar7 = true,
           (*(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar11 + 0x28)) &
           1 << ((unsigned int)uVar4 & 0x1f)) == 0)) {
          bVar7 = false;
        }
        if (!bVar7) {
          if ((*(unsigned int *)(uVar1 + 0x1c) & 1) == 0) {
            uVar11 = *(unsigned int *)(uVar1 + 0x1c);
            iVar15 = uVar1 + 0x18;
          }
          else {
            uVar11 = *(unsigned int *)(uVar1 + 0x24);
            iVar15 = uVar1 + 0x20;
          }
          uVar11 = -(unsigned int)((uVar11 & 1) == 0) & uVar11;
          goto joined_r0x82ad4630;
        }
      }
    }
    cVar9 = fn_82B8F618(uVar1,param_2);
    if (cVar9 == '\0') {
      return uVar1;
    }
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
LAB_82ad466c:
  if (iVar15 == uVar1 + 0x20) {
    return uVar1;
  }
  uVar11 = *(unsigned int *)(uVar1 + 0x24);
  iVar15 = uVar1 + 0x20;
  if ((uVar11 & 1) != 0) {
    return uVar1;
  }
joined_r0x82ad4630:
  if (uVar11 == 0) {
    return uVar1;
  }
  while ((cVar9 = fn_82AC6740(uVar11), cVar9 == '\0' ||
         (cVar9 = fn_82ABDA10(uVar11), cVar9 != '\0'))) {
    uVar11 = *(unsigned int *)((uVar11 & 0xfffffffe) + 0x28);
    if (((uVar11 & 1) != 0) || (uVar11 == 0)) goto LAB_82ad466c;
  }
  if (uVar11 == 0) {
    return uVar1;
  }
  uVar8 = fn_82AC68F0(param_1);
  uVar11 = uVar1 & 0xfffffffe;
  piVar3 = (int *)(uVar8 & 0xfffffffe);
  piVar3[1] = *(int *)(uVar11 + 4);
  *(int **)(*(unsigned int *)(uVar11 + 4) & 0xfffffffe) = piVar3 + 1;
  *piVar3 = uVar11 + 4;
  *(int **)(uVar11 + 4) = piVar3;
  while (puVar2 = (unsigned int *)*piVar13, puVar2 != (unsigned int *)0x0) {
    fn_82B8F130(*puVar2,puVar2,uVar8);
    if ((unsigned int *)*piVar13 == puVar2) {
      piVar13 = puVar2 + 2;
    }
  }
  fn_82B8F328(uVar1,uVar8,param_1);
  fn_82AD34E8(uVar8 + 0x20,uVar1 + 0x20);
  for (uVar11 = *(unsigned int *)(uVar8 + 0x24); ((uVar11 & 1) == 0 && (uVar11 != 0));
      uVar11 = *(unsigned int *)((uVar11 & 0xfffffffe) + 0x28)) {
    *(unsigned int *)(uVar11 + 0x1c) = uVar8;
  }
  uVar14 = 0;
  uVar11 = *(unsigned int *)(uVar1 + 0x1c);
joined_r0x82ad4760:
  uVar5 = uVar11;
  if ((uVar5 & 1) == 0) {
    do {
      if (uVar5 == 0) break;
      cVar9 = fn_82ABDA10(uVar5);
      if (cVar9 != '\0') {
        uVar11 = uVar5 & 0xfffffffe;
        puVar12 = (unsigned int *)(uVar11 + 0x24);
        *(unsigned int *)((*(unsigned int *)(uVar11 + 0x28) & 0xfffffffe) + 0x24) = *puVar12;
        *(unsigned int *)(*puVar12 & 0xfffffffe) = *(unsigned int *)(uVar11 + 0x28);
        *puVar12 = *(unsigned int *)(uVar8 + 0x18);
        *(unsigned int *)(*(unsigned int *)(uVar8 + 0x18) & 0xfffffffe) = uVar11;
        *(unsigned int *)(uVar11 + 0x28) = uVar8 - 0xc | 1;
        *(unsigned int *)(uVar8 + 0x18) = uVar11 + 0x28;
        *(unsigned int *)(uVar5 + 0x1c) = uVar8;
      }
      if (uVar14 == 0) {
        uVar11 = *(unsigned int *)(uVar1 + 0x1c);
        if (uVar5 != (-(unsigned int)((uVar11 & 1) == 0) & uVar11)) goto joined_r0x82ad4760;
LAB_82ad4828:
        uVar11 = *(unsigned int *)((uVar5 & 0xfffffffe) + 0x28);
        uVar14 = uVar5;
      }
      else {
        uVar11 = *(unsigned int *)((uVar14 & 0xfffffffe) + 0x28);
        if (uVar5 == (-(unsigned int)((uVar11 & 1) == 0) & uVar11)) goto LAB_82ad4828;
      }
      uVar5 = uVar11;
      if ((uVar5 & 1) != 0) break;
    } while( true );
  }
  *(unsigned int *)(uVar8 + 0x54) = *(unsigned int *)(uVar1 + 0x54);
  uVar11 = *(unsigned int *)(param_1 + 0x268);
  if (uVar11 < *(int *)(param_1 + 0x26c) * 0x44 + uVar11) {
    puVar12 = (unsigned int *)(uVar11 + 0x10);
    do {
      uVar11 = puVar12[-2];
      if ((uVar11 != 0) && ((*(unsigned int *)(uVar11 + 0x30) >> 0x16 & 1) != 0)) {
        do {
          uVar11 = *(unsigned int *)(uVar11 + 0x50);
          if (uVar11 == 0) break;
        } while ((*(unsigned int *)(uVar11 + 0x30) & 0x400000) != 0);
        puVar12[-2] = uVar11;
      }
      if (puVar12[-2] == uVar1) {
        puVar12[-2] = uVar8;
      }
      uVar11 = *puVar12;
      if ((uVar11 != 0) && ((*(unsigned int *)(uVar11 + 0x30) >> 0x16 & 1) != 0)) {
        do {
          uVar11 = *(unsigned int *)(uVar11 + 0x50);
          if (uVar11 == 0) break;
        } while ((*(unsigned int *)(uVar11 + 0x30) & 0x400000) != 0);
        *puVar12 = uVar11;
      }
      if (*puVar12 == uVar1) {
        *puVar12 = uVar8;
      }
      uVar11 = puVar12[-1];
      if ((uVar11 != 0) && ((*(unsigned int *)(uVar11 + 0x30) >> 0x16 & 1) != 0)) {
        do {
          uVar11 = *(unsigned int *)(uVar11 + 0x50);
          if (uVar11 == 0) break;
        } while ((*(unsigned int *)(uVar11 + 0x30) & 0x400000) != 0);
        puVar12[-1] = uVar11;
      }
      if (puVar12[-1] == uVar1) {
        puVar12[-1] = uVar8;
      }
      puVar10 = puVar12 + 0xd;
      puVar12 = puVar12 + 0x11;
    } while (puVar10 < (unsigned int *)(*(int *)(param_1 + 0x26c) * 0x44 + *(int *)(param_1 + 0x268)));
  }
  uVar11 = *(unsigned int *)(uVar8 + 0x4c);
  *(unsigned int *)(uVar8 + 0x30) =
       *(unsigned int *)(uVar8 + 0x30) & 0xff7fffff | *(unsigned int *)(uVar1 + 0x30) & 0x800000;
  uVar14 = *(unsigned int *)(uVar1 + 0x4c) & 0x400000;
  *(unsigned int *)(uVar8 + 0x4c) = uVar14 | uVar11 & 0xffbfffff;
  uVar5 = *(unsigned int *)(uVar1 + 0x4c) & 0x800000;
  *(unsigned int *)(uVar8 + 0x4c) = uVar5 | uVar14 | uVar11 & 0xff3fffff;
  *(unsigned int *)(uVar8 + 0x70) = *(unsigned int *)(uVar1 + 0x70);
  uVar6 = *(unsigned int *)(uVar1 + 0x4c) & 0x1000000;
  *(unsigned int *)(uVar8 + 0x4c) = uVar6 | uVar5 | uVar14 | uVar11 & 0xfe3fffff;
  *(unsigned int *)(uVar8 + 0x4c) =
       *(unsigned int *)(uVar1 + 0x4c) & 0x2000000 | uVar6 | uVar5 | uVar14 | uVar11 & 0xfc3fffff;
  *(unsigned int *)(uVar8 + 0x6c) = *(unsigned int *)(uVar1 + 0x6c);
  *(unsigned int *)(uVar8 + 0x48) = *(unsigned int *)(uVar1 + 0x48);
  fn_82B44B88(param_1);
  return uVar8;
}

