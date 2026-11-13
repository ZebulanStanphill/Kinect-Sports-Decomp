extern unsigned int *auStack_a0;
extern int fn_82BFEE60();
extern int fn_82C04988();
extern int fn_82C04AF8();
extern int fn_82C04BC8();
extern int fn_82C04BE8();
extern int fn_82C04E40();
extern int fn_82C04F00();
extern int fn_82C06250();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;


unsigned __int64 fn_82BFF338(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned __int64 *puVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  __int64 lVar14;
  int *apiStack_b0 [2];
  unsigned __int64 uStack_a8;
  unsigned int auStack_a0 [2];
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned __int64 uStack_90;
  unsigned __int64 uStack_88;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  
  piVar7 = (int *)0x0;
  *param_4 = 0;
  uVar5 = (unsigned __int64)*param_3 - 1;
  apiStack_b0[0] = (int *)0x0;
  uVar8 = 0;
  piVar3 = (int *)0x0;
  piVar4 = (int *)0x0;
  if (((uVar5 & 0xffffffff) < 4) && ((int)uVar5 != 0)) {
    if ((unsigned __int64)*param_3 == 2) {
      if (param_3[6] != 0xffffffff) {
        iVar2 = fn_82C04F00(0x88);
        if (iVar2 == 0) {
          return 0xffffffff8007000e;
        }
        piVar3 = (int *)fn_82C06250();
        if (piVar3 == (int *)0x0) {
          return 0xffffffff8007000e;
        }
      }
      if (param_3[7] != 0xffffffff) {
        if ((param_3[1] & 4) == 0) {
          iVar2 = fn_82C04F00(0x88);
          if (iVar2 == 0) {
            piVar4 = (int *)0x0;
            uVar8 = 0xffffffff8007000e;
            goto LAB_82bff974;
          }
          piVar4 = (int *)fn_82C06250();
          if (piVar4 == (int *)0x0) {
            uVar8 = 0xffffffff8007000e;
            goto LAB_82bff974;
          }
        }
        else {
          (**(int (***)())(*piVar3 + 4))(piVar3);
          piVar4 = piVar3;
        }
      }
      uVar11 = param_3[0xe];
      uVar12 = param_3[0xf];
      uVar10 = param_3[0x10];
      if (uVar11 == 0) {
        uVar11 = 0x20000;
      }
      if (uVar12 == 0) {
        if ((param_3[1] & 4) == 0) {
          uVar12 = (-(unsigned int)((param_3[1] & 8) != 0) & 0x18) + 8;
        }
        else {
          uVar12 = 0x40;
        }
      }
      if (uVar10 == 0) {
        uVar10 = (-(unsigned int)((param_3[1] & 4) != 0) & 0x1f) + 1;
      }
      uVar13 = 4;
      uVar9 = 0xc;
      if (param_3[6] != 0xffffffff) {
        puVar6 = &uStack_a8;
        lVar14 = 6;
        do {
          puVar6 = puVar6 + 1;
          *puVar6 = 0;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        uStack_98 = param_3[8];
        uStack_90 = *(unsigned __int64 *)(param_3 + 10);
        uStack_88 = *(unsigned __int64 *)(param_3 + 0xc);
        auStack_a0[0] = 4;
        if ((param_3[1] & 8) != 0) {
          auStack_a0[0] = 0xc;
        }
        uStack_7c = uVar11;
        uStack_78 = uVar12;
        uStack_74 = uVar10;
        uVar8 = (**(int (***)())(*piVar3 + 0x60))(piVar3,auStack_a0);
        if ((int)uVar8 < 0) goto LAB_82bff974;
      }
      if ((param_3[7] != 0xffffffff) && (piVar3 != piVar4)) {
        puVar6 = &uStack_a8;
        lVar14 = 6;
        do {
          puVar6 = puVar6 + 1;
          *puVar6 = 0;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        uVar1 = param_3[1];
        uStack_90 = *(unsigned __int64 *)(param_3 + 10);
        uStack_88 = *(unsigned __int64 *)(param_3 + 0xc);
        goto LAB_82bff90c;
      }
    }
    else if (uVar5 == 2) {
      if (param_3[6] != 0xffffffff) {
        iVar2 = fn_82C04BC8(0x3c);
        if (iVar2 == 0) {
          return 0xffffffff8007000e;
        }
        piVar3 = (int *)fn_82C04E40();
        if (piVar3 == (int *)0x0) {
          return 0xffffffff8007000e;
        }
        uVar8 = fn_82C04BE8(piVar3,param_3[8],param_3[9]);
        if ((int)uVar8 < 0) goto LAB_82bff974;
      }
      if (param_3[7] != 0xffffffff) {
        iVar2 = fn_82C04BC8(0x3c);
        if (iVar2 == 0) {
          piVar4 = (int *)0x0;
          uVar8 = 0xffffffff8007000e;
          goto LAB_82bff974;
        }
        piVar4 = (int *)fn_82C04E40();
        if (piVar4 == (int *)0x0) {
          uVar8 = 0xffffffff8007000e;
          goto LAB_82bff974;
        }
        uVar8 = fn_82C04BE8(piVar4,param_3[8],param_3[9]);
      }
    }
    else {
      if (param_3[6] != 0xffffffff) {
        iVar2 = fn_82C04988(0x40);
        if (iVar2 == 0) {
          return 0xffffffff8007000e;
        }
        piVar3 = (int *)fn_82C04AF8();
        if (piVar3 == (int *)0x0) {
          return 0xffffffff8007000e;
        }
        uVar8 = (**(int (***)())(*piVar3 + 0x60))(piVar3,param_3[8],param_3[10]);
        if ((int)uVar8 < 0) goto LAB_82bff974;
      }
      if (param_3[7] != 0xffffffff) {
        if ((((param_3[1] & 4) == 0) || (param_3[8] != param_3[9])) || (param_3[10] != param_3[0xb])
           ) {
          iVar2 = fn_82C04988(0x40);
          if (iVar2 == 0) {
            piVar4 = (int *)0x0;
            uVar8 = 0xffffffff8007000e;
            goto LAB_82bff974;
          }
          piVar4 = (int *)fn_82C04AF8();
          if (piVar4 == (int *)0x0) {
            uVar8 = 0xffffffff8007000e;
            goto LAB_82bff974;
          }
          if (piVar3 != piVar4) {
            uVar8 = (**(int (***)())(*piVar4 + 0x60))(piVar4,param_3[9],param_3[0xb]);
          }
        }
        else {
          (**(int (***)())(*piVar3 + 4))(piVar3);
          piVar4 = piVar3;
        }
      }
    }
  }
  else {
    if ((param_3[6] != 0xffffffff) &&
       ((iVar2 = fn_82C04F00(0x88), iVar2 == 0 ||
        (piVar3 = (int *)fn_82C06250(), piVar3 == (int *)0x0)))) {
      return 0xffffffff8007000e;
    }
    if (param_3[7] != 0xffffffff) {
      if ((param_3[1] & 4) == 0) {
        iVar2 = fn_82C04F00(0x88);
        if (iVar2 == 0) {
          piVar4 = (int *)0x0;
          uVar8 = 0xffffffff8007000e;
          goto LAB_82bff974;
        }
        piVar4 = (int *)fn_82C06250();
        if (piVar4 == (int *)0x0) {
          uVar8 = 0xffffffff8007000e;
          goto LAB_82bff974;
        }
      }
      else {
        (**(int (***)())(*piVar3 + 4))(piVar3);
        piVar4 = piVar3;
      }
    }
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar10 = param_3[0xb];
    if (uVar11 == 0) {
      uVar11 = 0x20000;
    }
    if (uVar12 == 0) {
      if ((param_3[1] & 4) == 0) {
        uVar12 = (-(unsigned int)((param_3[1] & 8) != 0) & 0x18) + 8;
      }
      else {
        uVar12 = 0x40;
      }
    }
    if (uVar10 == 0) {
      uVar10 = (-(unsigned int)((param_3[1] & 4) != 0) & 0x1f) + 1;
    }
    uVar13 = 1;
    uVar9 = 9;
    if (param_3[6] != 0xffffffff) {
      puVar6 = &uStack_a8;
      lVar14 = 6;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uStack_98 = param_3[8];
      auStack_a0[0] = 1;
      uStack_94 = 1;
      if ((param_3[1] & 8) != 0) {
        auStack_a0[0] = 9;
      }
      uStack_7c = uVar11;
      uStack_78 = uVar12;
      uStack_74 = uVar10;
      uVar8 = (**(int (***)())(*piVar3 + 0x60))(piVar3,auStack_a0);
      if ((int)uVar8 < 0) goto LAB_82bff974;
    }
    if ((param_3[7] != 0xffffffff) && (piVar3 != piVar4)) {
      puVar6 = &uStack_a8;
      lVar14 = 6;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar1 = param_3[1];
      uStack_94 = 1;
LAB_82bff90c:
      uStack_98 = param_3[8];
      auStack_a0[0] = uVar13;
      if ((uVar1 & 8) != 0) {
        auStack_a0[0] = uVar9;
      }
      uStack_7c = uVar11;
      uStack_78 = uVar12;
      uStack_74 = uVar10;
      uVar8 = (**(int (***)())(*piVar4 + 0x60))(piVar4,auStack_a0);
    }
  }
  if (-1 < (int)uVar8) {
    uVar8 = fn_82BFEE60(param_1,param_2,param_3,piVar3,piVar4,apiStack_b0);
    piVar7 = apiStack_b0[0];
  }
LAB_82bff974:
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 8))(piVar3);
  }
  if (piVar4 != (int *)0x0) {
    (**(int (***)())(*piVar4 + 8))(piVar4);
  }
  if ((int)uVar8 < 0) {
    if (piVar7 != (int *)0x0) {
      (**(int (***)())(*piVar7 + 8))(piVar7);
    }
  }
  else {
    *param_4 = piVar7;
  }
  return uVar8;
}

