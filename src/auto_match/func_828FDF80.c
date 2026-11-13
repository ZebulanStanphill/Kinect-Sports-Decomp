typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828FA8D8();
extern int fn_828FC7D8();
extern int fn_828FDE70();


unsigned __int64 fn_828FDF80(unsigned int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int *piVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned int uVar12;
  int *piVar13;
  unsigned int uVar14;
  
  iVar4 = *(int *)(param_2 + 0x30);
  bVar1 = false;
  *(unsigned int *)(param_2 + 0x58) = param_1[0x18] << 2;
  lVar10 = 1;
  if (iVar4 == 0x1f) {
    lVar10 = 2;
  }
  if (param_1[0x1f] != 0) {
    if ((((iVar4 == 0x1a) || (iVar4 == 0x19)) || (iVar4 == 0x1c)) || (iVar4 == 0x1e)) {
      uVar5 = 0x7e9;
      uVar6 = 0xffffffff8202cb88;
LAB_828fe044:
      fn_828FA8D8(*param_1,param_2 + 0x10,uVar5,uVar6);
      return 0xffffffff80004005;
    }
    if (((((iVar4 == 0x14) || (iVar4 == 0x15)) ||
         ((iVar4 == 0x16 || ((iVar4 == 0x17 || (iVar4 == 0x18)))))) &&
        (*(int *)(param_2 + 0x48) != 0)) && (*(int *)(*(int *)(param_2 + 0x48) + 0x10) == 0)) {
      uVar5 = 0x7ea;
      uVar6 = 0xffffffff8202cbd8;
      goto LAB_828fe044;
    }
  }
  iVar4 = *(int *)(param_2 + 0x3c);
  lVar11 = lVar10;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0x19)) {
    lVar11 = lVar10 + 1;
    bVar1 = *(int *)(iVar4 + 0x10) == -1;
    if (*(int *)(iVar4 + 0x14) != 0) {
      fn_828FA8D8(*param_1,param_2 + 0x10,0x7de,0xffffffff8202caf8);
      param_1[0x13] = 1;
    }
    iVar4 = *(int *)(iVar4 + 0x28);
    if (iVar4 != 0) {
      if (((int)param_1[0xe] < 4) || (5 < (int)param_1[0xe])) {
        fn_828FA8D8(*param_1,param_2 + 0x10,0x7d8,0xffffffff8202caa0);
        param_1[0x13] = 1;
      }
      else {
        bVar1 = *(int *)(iVar4 + 0x10) == -1 || bVar1;
        if (*(int *)(iVar4 + 0x28) != 0) {
          fn_828FA8D8(*param_1,param_2 + 0x10,0x7d9,0xffffffff8202cb38);
          param_1[0x13] = 1;
        }
        lVar11 = lVar10 + 2;
      }
    }
  }
  if ((*(int *)(param_2 + 0x40) != 0) && (*(int *)(*(int *)(param_2 + 0x40) + 4) == 0x19)) {
    iVar4 = param_1[0xe];
    if (((-1 < iVar4) && (iVar4 < 2)) || ((5 < iVar4 && (iVar4 < 0xb)))) {
      fn_828FA8D8(*param_1,param_2 + 0x10,0x7e5,0xffffffff8202ca6c);
      param_1[0x13] = 1;
    }
    iVar4 = *(int *)(param_2 + 0x40);
    lVar11 = lVar11 + 1;
    if (*(int *)(iVar4 + 0x10) == -1) {
      bVar1 = true;
    }
    if ((*(int *)(iVar4 + 0x14) != 0) && (*(int *)(iVar4 + 0x14) != 0xd000000)) {
      fn_828FA8D8(*param_1,param_2 + 0x10,0x7e3,0xffffffff8202ca3c);
      param_1[0x13] = 1;
    }
    if (*(int *)(iVar4 + 0x28) != 0) {
      fn_828FA8D8(*param_1,param_2 + 0x10,0x7e4,0xffffffff8202c9f0);
      param_1[0x13] = 1;
    }
  }
  piVar9 = (int *)(param_2 + 0x44);
  uVar12 = 0;
  piVar13 = piVar9;
  do {
    iVar4 = *piVar13;
    lVar10 = lVar11;
    if (iVar4 == 0) break;
    iVar3 = *(int *)(param_2 + 0x30);
    lVar10 = lVar11 + 1;
    if (((iVar3 != 0x51) && (iVar3 != 0x30)) && (iVar3 != 0x2f)) {
      if (*(int *)(iVar4 + 0x10) == -1) {
        bVar1 = true;
      }
      iVar4 = *(int *)(iVar4 + 0x28);
      if (iVar4 != 0) {
        if (*(int *)(iVar4 + 0x10) == -1) {
          bVar1 = true;
        }
        if (*(int *)(iVar4 + 0x28) != 0) {
          fn_828FA8D8(*param_1,param_2 + 0x10,0x7d9,0xffffffff8202cb38);
          param_1[0x13] = 1;
        }
        if (param_1[0xe] != 0) {
          lVar10 = lVar11 + 2;
        }
      }
    }
    uVar12 = uVar12 + 1;
    piVar13 = piVar13 + 1;
    lVar11 = lVar10;
  } while (uVar12 < 4);
  uVar5 = fn_828FDE70(param_1,lVar10);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar12 = param_1[0x18];
  uVar14 = *(unsigned int *)(param_2 + 0x30);
  if ((uVar14 == 3) &&
     (((iVar4 = param_1[0xe], -1 < iVar4 && (iVar4 < 6)) || ((9 < iVar4 && (iVar4 < 0x10)))))) {
    iVar4 = *(int *)(param_2 + 0x48);
    uVar8 = 0x7000000;
    uVar14 = 2;
    uVar7 = *(unsigned int *)(iVar4 + 0x14);
    if (uVar7 < 0x7000001) {
      if (uVar7 == 0x7000000) {
        uVar8 = 0x8000000;
      }
      else if (uVar7 == 0) {
        uVar8 = 0x1000000;
      }
      else if (uVar7 == 0x1000000) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x2000000;
        if (uVar7 != 0x2000000) {
          if (uVar7 != 0x3000000) {
            uVar8 = 0x4000000;
            if (uVar7 == 0x4000000) {
              uVar8 = 0x5000000;
              goto LAB_828fe398;
            }
            if (uVar7 != 0x5000000) {
              bVar2 = uVar7 == 0x6000000;
              goto LAB_828fe358;
            }
          }
LAB_828fe3f4:
          *(unsigned int *)(iVar4 + 0x14) = uVar8;
          goto LAB_828fe3f8;
        }
        uVar8 = 0x3000000;
      }
LAB_828fe398:
      *(unsigned int *)(iVar4 + 0x14) = uVar8;
    }
    else {
      if (uVar7 == 0x8000000) goto LAB_828fe3f4;
      if ((uVar7 != 0x9000000) && (uVar7 != 0xa000000)) {
        uVar8 = 0xb000000;
        if (uVar7 == 0xb000000) {
          uVar8 = 0xc000000;
          goto LAB_828fe398;
        }
        if (uVar7 == 0xc000000) goto LAB_828fe3f4;
        bVar2 = uVar7 == 0xd000000;
LAB_828fe358:
        if (!bVar2) goto LAB_828fe3f8;
      }
      fn_828FA8D8(*param_1,param_2 + 0x10,0x7dd,0xffffffff8202c9bc);
      param_1[0x13] = 1;
    }
  }
LAB_828fe3f8:
  if (*(int *)(param_2 + 0x54) != 0) {
    uVar14 = uVar14 | 0x40000000;
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    uVar14 = uVar14 | 0x10000000;
  }
  iVar4 = param_1[0xe];
  if (((0 < iVar4) && (iVar4 < 6)) || ((9 < iVar4 && (iVar4 < 0x10)))) {
    uVar14 = (unsigned int)((lVar10 - 1U & 0xffffffff) << 0x18) | uVar14;
  }
  iVar4 = *(int *)(param_2 + 0x30);
  if (((iVar4 == 0x29) || (iVar4 == 0x2d)) || (iVar4 == 0x5e)) {
    uVar14 = (*(unsigned int *)(param_2 + 0x38) & 7) << 0x10 | uVar14;
  }
  *(unsigned int *)(param_1[0x18] * 4 + param_1[0x17]) = uVar14;
  iVar4 = param_1[0x18] + 1;
  param_1[0x18] = iVar4;
  if (*(int *)(param_2 + 0x30) == 0x1f) {
    *(unsigned int *)(iVar4 * 4 + param_1[0x17]) = *(unsigned int *)(param_2 + 0x38) | 0x80000000;
    iVar4 = param_1[0x18] + 1;
    param_1[0x18] = iVar4;
  }
  iVar3 = *(int *)(param_2 + 0x3c);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 4) != 0x19)) goto LAB_828fe5e0;
  if ((param_1[0xe] == 0) && (*(int *)(iVar3 + 0x20) == 0xf0000)) {
    iVar4 = *(int *)(param_2 + 0x30);
    if ((iVar4 == 0x15) || (iVar4 == 0x17)) {
      uVar8 = 0x70000;
    }
    else {
      if (iVar4 != 0x18) goto LAB_828fe518;
      uVar8 = 0x30000;
    }
    *(unsigned int *)(iVar3 + 0x20) = uVar8;
  }
LAB_828fe518:
  uVar14 = ((*(unsigned int *)(iVar3 + 0x10) & 7) << 0x14 | 0xff800000 | *(unsigned int *)(iVar3 + 0x10) & 0x18) <<
           8 | *(unsigned int *)(param_2 + 0x34) & 0xff00000 | *(unsigned int *)(iVar3 + 0x18) & 0x7ff |
           *(unsigned int *)(iVar3 + 0x20) & 0xf0000;
  if (*(int *)(iVar3 + 0x28) != 0) {
    uVar14 = uVar14 | 0x2000;
  }
  *(unsigned int *)(param_1[0x18] * 4 + param_1[0x17]) = uVar14;
  iVar4 = param_1[0x18] + 1;
  param_1[0x18] = iVar4;
  iVar3 = *(int *)(iVar3 + 0x28);
  if (iVar3 != 0) {
    *(unsigned int *)(iVar4 * 4 + param_1[0x17]) =
         ((*(unsigned int *)(iVar3 + 0x10) & 7) << 0x14 | 0xff800000 | *(unsigned int *)(iVar3 + 0x10) & 0x18) << 8
         | *(unsigned int *)(iVar3 + 0x14) & 0xf000000 | *(unsigned int *)(iVar3 + 0x18) & 0x7ff |
         *(unsigned int *)(iVar3 + 0x24) & 0xff0000;
    iVar4 = param_1[0x18] + 1;
    param_1[0x18] = iVar4;
  }
LAB_828fe5e0:
  iVar3 = *(int *)(param_2 + 0x40);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0x19)) {
    *(unsigned int *)(iVar4 * 4 + param_1[0x17]) =
         ((*(unsigned int *)(iVar3 + 0x10) & 7) << 0x14 | 0xff800000 | *(unsigned int *)(iVar3 + 0x10) & 0x18) << 8
         | *(unsigned int *)(iVar3 + 0x14) & 0xf000000 | *(unsigned int *)(iVar3 + 0x18) & 0x7ff |
         *(unsigned int *)(iVar3 + 0x24) & 0xff0000;
    iVar4 = param_1[0x18] + 1;
    param_1[0x18] = iVar4;
  }
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 == 0x51) {
    uVar14 = 0;
    do {
      iVar3 = *piVar9;
      if (iVar3 == 0) break;
      if ((4 < *(int *)(iVar3 + 0x10)) && (*(int *)(iVar3 + 0x10) < 9)) {
        *(float *)(iVar4 * 4 + param_1[0x17]) = (float)*(double *)(iVar3 + 0x18);
      }
      uVar14 = uVar14 + 1;
      piVar9 = piVar9 + 1;
      iVar4 = param_1[0x18] + 1;
      param_1[0x18] = iVar4;
    } while (uVar14 < 4);
  }
  else if (iVar3 == 0x30) {
    uVar14 = 0;
    do {
      iVar3 = *piVar9;
      if (iVar3 == 0) break;
      if ((*(int *)(iVar3 + 0x10) == 2) || (*(int *)(iVar3 + 0x10) == 4)) {
        *(unsigned int *)(iVar4 * 4 + param_1[0x17]) = *(unsigned int *)(iVar3 + 0x18);
      }
      uVar14 = uVar14 + 1;
      piVar9 = piVar9 + 1;
      iVar4 = param_1[0x18] + 1;
      param_1[0x18] = iVar4;
    } while (uVar14 < 4);
  }
  else if (iVar3 == 0x2f) {
    *(unsigned int *)(iVar4 * 4 + param_1[0x17]) = (unsigned int)(*(int *)(*piVar9 + 0x18) != 0);
    param_1[0x18] = param_1[0x18] + 1;
  }
  else {
    uVar14 = 0;
    do {
      iVar4 = *piVar9;
      if (iVar4 == 0) break;
      if (((param_1[0xe] == 0) && (*(int *)(iVar4 + 0x24) == 0xe40000)) &&
         ((iVar3 = *(int *)(param_2 + 0x30), iVar3 == 6 ||
          ((((iVar3 == 7 || (iVar3 == 0xe)) || (iVar3 == 0x4e)) ||
           ((iVar3 == 0xf || (iVar3 == 0x4f)))))))) {
        *(unsigned int *)(iVar4 + 0x24) = 0xff0000;
      }
      uVar7 = ((*(unsigned int *)(iVar4 + 0x10) & 7) << 0x14 | 0xff800000 | *(unsigned int *)(iVar4 + 0x10) & 0x18)
              << 8 | *(unsigned int *)(iVar4 + 0x14) & 0xf000000 | *(unsigned int *)(iVar4 + 0x18) & 0x7ff |
              *(unsigned int *)(iVar4 + 0x24) & 0xff0000;
      if (*(int *)(iVar4 + 0x28) != 0) {
        uVar7 = uVar7 | 0x2000;
      }
      *(unsigned int *)(param_1[0x18] * 4 + param_1[0x17]) = uVar7;
      iVar3 = param_1[0x18];
      param_1[0x18] = iVar3 + 1;
      iVar4 = *(int *)(iVar4 + 0x28);
      if (iVar4 != 0) {
        if (param_1[0xe] == 0) {
          if (((*(int *)(iVar4 + 0x10) != 3) || (*(int *)(iVar4 + 0x14) != 0)) ||
             ((*(int *)(iVar4 + 0x18) != 0 || (*(int *)(iVar4 + 0x24) != 0)))) {
            fn_828FA8D8(*param_1,param_2 + 0x10,0x7d7,0xffffffff8202c97c);
            param_1[0x13] = 1;
          }
        }
        else {
          *(unsigned int *)((iVar3 + 1) * 4 + param_1[0x17]) =
               ((*(unsigned int *)(iVar4 + 0x10) & 7) << 0x14 | 0xff800000 | *(unsigned int *)(iVar4 + 0x10) & 0x18)
               << 8 | *(unsigned int *)(iVar4 + 0x14) & 0xf000000 | *(unsigned int *)(iVar4 + 0x18) & 0x7ff |
               *(unsigned int *)(iVar4 + 0x24) & 0xff0000;
          param_1[0x18] = param_1[0x18] + 1;
        }
      }
      uVar14 = uVar14 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar14 < 4);
  }
  if ((unsigned __int64)(unsigned int)param_1[0x18] != (lVar10 + (unsigned __int64)uVar12 & 0xffffffff)) {
    fn_828FA8D8(*param_1,param_2 + 0x10,0,0xffffffff8202c950);
    param_1[0x13] = 1;
  }
  if (bVar1) {
    param_1[0x1a] = param_1[0x18];
  }
  else {
    iVar4 = fn_828FC7D8(param_1,param_2 + 0x10);
    if (iVar4 < 0) {
      param_1[0x14] = 1;
    }
  }
  return 0;
}

