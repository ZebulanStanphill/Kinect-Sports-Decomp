typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8294B7A8();
extern int fn_8294BB48();
extern int fn_8294C180();
extern int fn_82952570();
extern int fn_829581E8();
extern int fn_82964868();
extern int fn_82969030();
extern int fn_82971580();
extern int fn_82975B00();


__int64 fn_82960DD8(int *param_1)

{
  unsigned int *puVar1;
  bool bVar2;
  __int64 lVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  if (param_1[0x17] != 0) {
    bVar2 = false;
    param_1[0x40] = 0;
    if (param_1[3] != 0) {
      do {
        puVar1 = *(unsigned int **)(param_1[0x40] * 4 + param_1[6]);
        param_1[0x41] = (int)puVar1;
        if ((*puVar1 & 0xfff00000) == 0x20800000) {
          lVar3 = fn_8294BB48(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          bVar2 = (bool)((int)lVar3 == 0 | bVar2);
        }
        iVar5 = param_1[0x40];
        param_1[0x40] = iVar5 + 1U;
      } while (iVar5 + 1U < (unsigned int)param_1[3]);
      if (bVar2) {
        fn_8294B7A8(param_1);
      }
    }
  }
  if (param_1[0xc] != 0) {
    uVar4 = 0;
    do {
      if (0xf < uVar4) goto LAB_82960f28;
      uVar7 = param_1[3];
      bVar2 = true;
      uVar6 = 0;
      if (uVar7 != 0) {
        iVar5 = 0;
        bVar2 = true;
        do {
          param_1[0x41] = *(int *)(iVar5 + param_1[6]);
          lVar3 = fn_8294C180(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          bVar2 = (bool)(lVar3 != 0 & bVar2);
          lVar3 = fn_82964868(param_1,param_1[0x41]);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 4;
          *(unsigned int *)param_1[0x41] = 0;
        } while (uVar6 < uVar7);
      }
      lVar3 = fn_82969030(param_1);
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      uVar4 = uVar4 + 1;
    } while (!bVar2);
    if (0xf < uVar4) {
LAB_82960f28:
      uVar4 = param_1[3];
      bVar2 = true;
      uVar7 = 0;
      if (uVar4 != 0) {
        iVar5 = 0;
        bVar2 = true;
        do {
          param_1[0x41] = *(int *)(iVar5 + param_1[6]);
          lVar3 = fn_8294C180(param_1);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          if ((int)lVar3 == 0) {
            fn_82975B00(param_1,*(unsigned int *)(param_1[0x41] + 0x3c),0x11c9,
                              0xffffffff8203870c);
            bVar2 = false;
          }
          lVar3 = fn_82964868(param_1,param_1[0x41]);
          if ((int)lVar3 < 0) {
            return lVar3;
          }
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 4;
          *(unsigned int *)param_1[0x41] = 0;
        } while (uVar7 < uVar4);
      }
      lVar3 = fn_82969030(param_1);
      if ((int)lVar3 < 0) {
        return lVar3;
      }
      if (!bVar2) {
        return -0x7fffbffb;
      }
    }
  }
  if (((param_1[0x1c] & 0x1000000U) == 0) &&
     (lVar3 = (**(int (***)())(*param_1 + 0x16c))(param_1), (int)lVar3 < 0)) {
    return lVar3;
  }
  if (param_1[0x18] != 0) {
    lVar3 = fn_829581E8(param_1);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
    fn_8294B7A8(param_1);
    lVar3 = fn_82971580(param_1);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
    lVar3 = fn_82952570(param_1);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
  }
  return 0;
}

