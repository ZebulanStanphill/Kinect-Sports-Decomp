extern int fn_82A2A288();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57820();
extern int fn_82E59EC8();


unsigned __int64 fn_82F3E948(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar5;
  int *piVar9;
  int *piVar10;
  unsigned int *puVar11;
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  uVar1 = param_1[0x10];
  iVar7 = 0;
  iVar8 = 0;
  if (uVar1 < 0x28) {
    *param_2 = 0x28;
    return 0xffffffffc00d36b1;
  }
  piVar9 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar9);
  fn_82E576A8(param_1 + 8,piVar9);
  uVar3 = fn_82E59EC8(param_1 + 0x12,piVar9);
  if ((__int64)uVar3 < 0) {
LAB_82f3ec50:
    if ((int)uVar3 == -0x3ff2c94f) goto LAB_82f3ec9c;
  }
  else {
    piVar10 = param_1 + 0x16;
    uVar3 = fn_82E59EC8(piVar10,piVar9);
    if ((__int64)uVar3 < 0) goto LAB_82f3ec50;
    if (param_1[0x13] != 0) {
      fn_82E4FE40();
    }
    param_1[0x13] = 0;
    if (*piVar10 == 0) {
LAB_82f3ea5c:
      puVar11 = (unsigned int *)(param_1 + 0x17);
      uVar3 = fn_82E59EC8(puVar11,piVar9);
      if (-1 < (__int64)uVar3) {
        if (param_1[0x14] != 0) {
          fn_82E4FE40();
        }
        uVar2 = *puVar11;
        param_1[0x14] = 0;
        if (uVar2 == 0) {
LAB_82f3eb6c:
          puVar11 = (unsigned int *)(param_1 + 0x18);
          uVar3 = fn_82E59EC8(puVar11,piVar9);
          if (-1 < (__int64)uVar3) {
            if (param_1[0x15] != 0) {
              fn_82E4FE40();
            }
            uVar2 = *puVar11;
            param_1[0x15] = 0;
            if (uVar2 != 0) {
              lVar4 = ((unsigned __int64)uVar2 & 0x7fffffff) << 1;
              if (0x7fffffff < uVar2) {
                lVar4 = -1;
              }
              iVar6 = fn_82E50BE8(lVar4,0,0,0,0);
              param_1[0x15] = iVar6;
              if ((iVar6 == 0) || (iVar8 = fn_82E50BE8(*puVar11,0,0,0,0), iVar8 == 0))
              goto LAB_82f3ea3c;
              uVar3 = fn_82E57820(iVar8,piVar9,*puVar11);
              if (-1 < (__int64)uVar3) {
                *(unsigned char *)(*puVar11 + iVar8 + -1) = 0;
                iVar6 = fn_82A2A288(0,0,iVar8,0xffffffffffffffff,param_1[0x15],*puVar11);
                if (iVar6 == 0) goto LAB_82f3eb38;
                *(unsigned short *)(*puVar11 * 2 + param_1[0x15] + -2) = 0;
              }
            }
          }
        }
        else {
          lVar4 = ((unsigned __int64)uVar2 & 0x7fffffff) << 1;
          if (0x7fffffff < uVar2) {
            lVar4 = -1;
          }
          iVar6 = fn_82E50BE8(lVar4,0,0,0,0);
          param_1[0x14] = iVar6;
          if ((iVar6 == 0) || (iVar7 = fn_82E50BE8(*puVar11,0,0,0,0), iVar7 == 0))
          goto LAB_82f3ea3c;
          uVar3 = fn_82E57820(iVar7,piVar9,*puVar11);
          if (-1 < (__int64)uVar3) {
            *(unsigned char *)(iVar7 + *puVar11 + -1) = 0;
            iVar6 = fn_82A2A288(0,0,iVar7,0xffffffffffffffff,param_1[0x14],*puVar11);
            if (iVar6 != 0) {
              *(unsigned short *)(*puVar11 * 2 + param_1[0x14] + -2) = 0;
              goto LAB_82f3eb6c;
            }
LAB_82f3eb38:
            uVar3 = thunk_FUN_82a2b798();
            if (0 < (int)uVar3) {
              uVar3 = uVar3 & 0xffff | 0x80070000;
            }
          }
        }
      }
      goto LAB_82f3ec50;
    }
    uVar3 = fn_82E50BE8(*piVar10,0,0,0,0);
    param_1[0x13] = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
      uVar3 = fn_82E57820(uVar3,piVar9,*piVar10);
      if ((__int64)uVar3 < 0) goto LAB_82f3ec50;
      goto LAB_82f3ea5c;
    }
LAB_82f3ea3c:
    uVar3 = 0xffffffff8007000e;
  }
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)uVar3) && (uVar5 = (**(int (***)())(*param_1 + 0x2c))(param_1), uVar5 != *param_2)) {
    uVar3 = 0xffffffffc00d3a9a;
  }
LAB_82f3ec9c:
  if (iVar7 != 0) {
    fn_82E4FE40(iVar7);
  }
  if (iVar8 != 0) {
    fn_82E4FE40(iVar8);
  }
  return uVar3;
}

