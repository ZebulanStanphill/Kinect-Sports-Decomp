typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_82AA66A8();
extern int fn_82ABDAA0();
extern int fn_82ABE190();
extern int fn_82ACB0F8();
extern int fn_82B81588();
extern int fn_82B815D0();


void fn_82B88B48(unsigned int *param_1,unsigned int *param_2,char param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char bVar3;
  bool bVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  int iVar7;
  char cVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char bVar13;
  unsigned __int64 uVar14;
  unsigned int *puVar15;
  unsigned int auStack_50 [20];
  
  if (((unsigned int)param_1[2] >> 0x11 & 1) == 0) {
    cVar8 = fn_82ABDAA0(param_1);
    if ((cVar8 == '\0') && ((*(unsigned int *)(param_1[7] + 0x4c) >> 0x16 & 1) != 0)) {
      uVar11 = param_2[1];
      param_2[1] = uVar11 | 0x10000000;
      param_2[1] = (*(unsigned int *)(param_1[7] + 0x4c) >> 0x17 & 1) << 0x1b |
                   uVar11 & 0xf7ffffff | 0x10000000;
    }
  }
  else {
    uVar11 = param_2[1];
    param_2[1] = uVar11 | 0x10000000;
    param_2[1] = (param_1[2] & 0x40000) << 9 | uVar11 & 0xf7ffffff | 0x10000000;
  }
  if (((param_2[1] & 0x10000000) != 0) && (((unsigned int)param_1[2] >> 5 & 1) != 0)) {
    for (puVar15 = (unsigned int *)param_1[1]; (puVar15 != (unsigned int *)0x0 && ((*puVar15 & 0xe000000) == 0));
        puVar15 = (unsigned int *)puVar15[2]) {
    }
    if ((*puVar15 & 0x1fe0000) == 0x400000) {
      param_2[1] = param_2[1] & 0xe7ffffff;
    }
  }
  bVar5 = false;
  uVar11 = (unsigned int)param_1[2] >> 7 & 0x7f;
  if ((uVar11 == 0) || (bVar4 = true, 0x1f < uVar11)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar11 = param_1[2];
    uVar12 = *param_2;
    *param_2 = uVar12 & 0x3ffffff | 0xc8000000;
    param_2[2] = ((uVar11 >> 7) - 1) * 0x1000000 & 0x1f000000 | param_2[2] & 0xe0ffffff;
    if ((param_1[2] & 1) != 0) {
      *param_2 = uVar12 & 0x3ffffff | 0xc9000000;
    }
    *param_2 = (param_1[2] & 0x1e) << 0xf | *param_2 & 0xfff0ffff;
    for (puVar15 = (unsigned int *)param_1[1]; puVar15 != (unsigned int *)0x0; puVar15 = (unsigned int *)puVar15[2]) {
      if ((puVar15[4] != 0) && ((*puVar15 & 0xe000000) != 0)) {
        if (((unsigned int)param_1[2] >> 5 & 1) != 0) {
          *param_2 = *param_2 | 0x8000;
        }
        if ((*puVar15 & 0x10) != 0) {
          *param_2 = *param_2 | 0x40;
        }
        *param_2 = *puVar15 >> 0x11 & 0x3f | *param_2 & 0xffffffc0;
        break;
      }
    }
    uVar14 = 0;
    param_2[2] = param_2[2] | 0xe0000000;
    if (0x7ffff < (param_1[2] & 0x380000)) {
      auStack_50[0] = 0;
      uVar14 = fn_82B815D0(param_1,0,param_2,0,auStack_50);
      param_2[1] = (auStack_50[0] & 1) << 0x1a | param_2[1] & 0xfbffffff;
      *(char *)((int)param_2 + 5) = (char)(auStack_50[0] >> 1);
      param_2[2] = (auStack_50[0] & 0x400) << 0x15 | param_2[2] & 0x7fffffff;
      *(char *)((int)param_2 + 9) = (char)(auStack_50[0] >> 0xb);
      param_2[1] = (auStack_50[0] & 0x200) << 0x16 | param_2[1] & 0x7fffffff;
    }
    if (0xfffff < (param_1[2] & 0x380000)) {
      auStack_50[0] = 0;
      uVar6 = fn_82B815D0(param_1,1,param_2,uVar14,auStack_50);
      param_2[1] = (auStack_50[0] & 1) << 0x19 | param_2[1] & 0xfdffffff;
      param_2[2] = (auStack_50[0] & 0x400) << 0x14 | param_2[2] & 0xbfffffff;
      *(char *)((int)param_2 + 6) = (char)(auStack_50[0] >> 1);
      *(char *)((int)param_2 + 10) = (char)(auStack_50[0] >> 0xb);
      if ((uVar6 & 0xffffffff) != 0) {
        if ((uVar14 & 0xffffffff) == 0) {
          uVar11 = (auStack_50[0] & 0x200) << 0x16 | param_2[1] & 0x7fffffff;
        }
        else {
          uVar11 = (auStack_50[0] & 0x200) << 0x15 | param_2[1] & 0xbfffffff;
        }
        param_2[1] = uVar11;
      }
      uVar14 = uVar6 + uVar14;
    }
    if (0x17ffff < (param_1[2] & 0x380000)) {
      auStack_50[0] = 0;
      iVar7 = fn_82B815D0(param_1,2,param_2,uVar14,auStack_50);
      param_2[1] = (auStack_50[0] & 1) << 0x18 | param_2[1] & 0xfeffffff;
      param_2[2] = (auStack_50[0] & 0x400) << 0x13 | param_2[2] & 0xdfffffff;
      *(char *)((int)param_2 + 7) = (char)(auStack_50[0] >> 1);
      *(char *)((int)param_2 + 0xb) = (char)(auStack_50[0] >> 0xb);
      if (iVar7 != 0) {
        if ((uVar14 & 0xffffffff) == 0) {
          uVar11 = (auStack_50[0] & 0x200) << 0x16 | param_2[1] & 0x7fffffff;
        }
        else {
          uVar11 = (auStack_50[0] & 0x200) << 0x15 | param_2[1] & 0xbfffffff;
        }
        param_2[1] = uVar11;
      }
    }
    uVar11 = param_2[1];
    if ((((uVar11 & 0x20000000) != 0) && ((uVar11 & 0x80000000) == 0)) &&
       ((uVar11 & 0x40000000) == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c0);
    }
    uVar11 = (unsigned int)param_1[2] >> 7 & 0x7f;
    if ((0x14 < uVar11) && (uVar11 < 0x19)) {
      bVar13 = *(unsigned char *)((int)param_2 + 5) & 3;
      bVar3 = *(unsigned char *)((int)param_2 + 6) & 3;
      *(unsigned char *)((int)param_2 + 5) =
           ((bVar13 - 2 & 3) << 2 | bVar13 - 1 & 3) << 2 | (bVar13 + 1) * '@' | bVar13;
      *(unsigned char *)((int)param_2 + 6) =
           ((bVar3 - 2 & 3) << 2 | bVar3 - 1 & 3) << 2 | (bVar3 + 1) * '@' | bVar3;
    }
    goto LAB_82b892b0;
  }
  if (param_3 == '\0') {
    *(unsigned char *)(param_2 + 2) = 0xe2;
  }
  else {
    uVar11 = *(unsigned int *)(((unsigned int)param_1 & 0xfffffffe) + 0x24);
    if ((uVar11 & 1) == 0) {
      iVar7 = (uVar11 & 0xfffffffe) - 0x28;
    }
    else {
      iVar7 = 0;
    }
    uVar11 = *(unsigned int *)(iVar7 + 8) >> 0x13 & 7;
    if (uVar11 == 0) {
      param_2[2] = param_2[2] | 0x80000000;
    }
    if (uVar11 == 1) {
      param_2[2] = param_2[2] | 0x40000000;
    }
  }
  uVar11 = (((unsigned int)param_1[2] >> 7) - 0x20) * 0x4000000 | *param_2 & 0x3ffffff;
  *param_2 = uVar11;
  if ((param_1[2] & 1) != 0) {
    *param_2 = uVar11 | 0x2000000;
  }
  *param_2 = *param_2 & 0xff0fffff | (param_1[2] << 0x13 | *param_2) & 0xf00000;
  for (puVar15 = (unsigned int *)param_1[1]; puVar15 != (unsigned int *)0x0; puVar15 = (unsigned int *)puVar15[2]) {
    if ((puVar15[4] != 0) && ((*puVar15 & 0xe000000) != 0)) {
      if (((unsigned int)param_1[2] >> 5 & 1) == 0) {
        if ((*puVar15 & 0x10) != 0) {
          *param_2 = *param_2 | 0x4000;
        }
        *param_2 = *puVar15 >> 9 & 0x3f00 | *param_2 & 0xffffc0ff;
      }
      else {
        uVar11 = *param_2;
        *param_2 = uVar11 | 0x8000;
        *param_2 = *puVar15 >> 0x11 & 0x3f | uVar11 & 0xffffffc0 | 0x8000;
      }
      goto LAB_82b890ac;
    }
  }
  cVar8 = fn_82ABDAA0(param_1);
  if (cVar8 != '\0') {
    if ((param_1[2] & 0x380000) == 0) {
      puVar15 = (unsigned int *)*param_1;
      while( true ) {
        if (puVar15 == (unsigned int *)0x0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c0);
        }
        if ((*puVar15 & 0xe000000) != 0) break;
        puVar15 = (unsigned int *)puVar15[1];
      }
    }
    else {
      puVar15 = (unsigned int *)param_1[0xb];
    }
    cVar8 = fn_82ABE190(puVar15);
    if (cVar8 != '\0') {
      *param_2 = ((*puVar15 >> 0xd & 0xf) << 0x10 | *puVar15 >> 0xd & 0x3f0) << 4 |
                 *param_2 & 0xff0fc0ff;
    }
  }
LAB_82b890ac:
  if ((param_1[2] & 0x380000) == 0) goto LAB_82b892b0;
  uVar14 = 0;
  if ((param_3 != '\0') &&
     (uVar14 = (unsigned __int64)((param_2[2] & 0x80000000) == 0), (param_2[2] & 0x40000000) == 0)) {
    uVar14 = uVar14 + 1;
  }
  auStack_50[0] = 0;
  uVar6 = fn_82B815D0(param_1,0,param_2,uVar14,auStack_50);
  uVar11 = auStack_50[0];
  if ((uVar6 & 0xffffffff) != 0) {
    if ((uVar6 + uVar14 & 0xffffffff) == 2) {
      uVar12 = (auStack_50[0] & 0x200) << 0x15 | param_2[1] & 0xbfffffff;
    }
    else {
      uVar12 = (auStack_50[0] & 0x200) << 0x16 | param_2[1] & 0x7fffffff;
    }
    param_2[1] = uVar12;
  }
  uVar9 = 0x100000;
  uVar10 = ((unsigned __int64)auStack_50[0] & 1) << 0x18 | (unsigned __int64)param_2[1] & 0xfffffffffeffffff;
  *(char *)((int)param_2 + 0xb) = (char)(auStack_50[0] >> 0xb);
  param_2[1] = (unsigned int)uVar10;
  if ((param_1[2] & 0x380000) < 0x100000) {
    param_2[2] = (auStack_50[0] & 0x400) << 0x13 | param_2[2] & 0xdfffffff;
    uVar14 = fn_82B81588(auStack_50[0] >> 1 & 0xff);
    if (param_3 != '\0') {
      uVar11 = *(unsigned int *)(((unsigned int)param_1 & 0xfffffffe) + 0x24);
      if ((uVar11 & 1) == 0) {
        iVar7 = (uVar11 & 0xfffffffe) - 0x28;
      }
      else {
        iVar7 = 0;
      }
      if ((uVar9 & 0xffffffff) < ((unsigned __int64)*(unsigned int *)(iVar7 + 8) & 0x380000)) {
        uVar6 = fn_82B81588(uVar10 & 0xff);
        bVar13 = (unsigned char)(((((uVar14 & 0xffffffff) >> 2) - 2 & 3) << 2 |
                        ((uVar6 & 0xffffffff) >> 2) - 1 & 0xfffffff3) << 2) & 0x3c |
                 (((unsigned char)uVar14 & 3) + 1) * '@' | (unsigned char)uVar6 & 3;
        goto LAB_82b892ac;
      }
    }
    uVar6 = (uVar14 & 0xffffffff) >> 2 & 3;
    bVar13 = (unsigned char)((((uVar14 & 3) - 2 & 3) << 2 | uVar6 - 1 & 0xfffffff3) << 2) & 0x3c |
             ((char)(uVar14 & 3) + '\x01') * '@' | (unsigned char)uVar6;
  }
  else {
    auStack_50[0] = 0;
    fn_82B815D0(param_1,1,param_2,uVar6 + uVar14,auStack_50);
    uVar14 = (unsigned __int64)(auStack_50[0] >> 0xb) & 0xff;
    if ((auStack_50[0] >> 0xb & 1) != 0) {
      *param_2 = *param_2 & 0x3ffffff | (*param_2 & 0xfc000000) + 0x4000000;
    }
    param_2[2] = (unsigned int)(uVar14 << 0x1c) & 0x20000000 | param_2[2] & 0xdfffffff;
    bVar13 = (unsigned char)((uVar14 >> 2 & 0xc | uVar14 >> 2 & 3) << 2) |
             (((unsigned char)(uVar11 >> 1) & 3) + 1) * '@' | (unsigned char)(auStack_50[0] >> 1) & 3;
  }
LAB_82b892ac:
  *(unsigned char *)((int)param_2 + 7) = bVar13;
LAB_82b892b0:
  if ((param_3 == '\0') && (((unsigned int)param_1[2] >> 5 & 1) != 0)) {
    for (puVar15 = (unsigned int *)param_1[1];
        (puVar15 != (unsigned int *)0x0 && ((puVar15[4] == 0 || ((*puVar15 & 0xe000000) == 0))));
        puVar15 = (unsigned int *)puVar15[2]) {
    }
    bVar4 = false;
    for (puVar1 = *(unsigned int **)puVar15[4]; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[1]) {
      if ((*puVar1 & 0xe000000) != 0) {
        puVar2 = (unsigned int *)puVar1[3];
        if ((((unsigned int)puVar2[2] >> 5 & 1) != 0) && (((*puVar1 >> 0x11 ^ *param_2 & 0x3f) & 0xff) == 0)
           ) {
          uVar11 = (unsigned int)puVar2[2] >> 7 & 0x7f;
          if ((uVar11 == 0x79) || (uVar11 == 0x7a)) {
            bVar5 = true;
            bVar4 = (bool)(uVar11 == 0x7a | bVar4);
          }
          else if ((puVar2 != param_1) && (cVar8 = fn_82ACB0F8(puVar2,param_1), cVar8 != '\0')) {
            return;
          }
        }
      }
    }
    if ((bVar5) && (*param_2 = *param_2 | 0x4000, bVar4)) {
      for (puVar15 = *(unsigned int **)puVar15[4]; puVar15 != (unsigned int *)0x0; puVar15 = (unsigned int *)puVar15[1]) {
        uVar11 = *puVar15;
        if (((uVar11 & 0xe000000) != 0) && ((*(unsigned int *)(puVar15[3] + 8) & 0x3f80) == 0x3d00)) {
          uVar12 = *param_2;
          if ((uVar11 >> 0x11 & 0xff) == (uVar12 & 0x3f)) {
            *param_2 = uVar12 & 0xff00ffff | (uVar11 >> 0xd & 0xf) << 0x10 | uVar12 & 0xf0000;
          }
        }
      }
    }
  }
  return;
}

