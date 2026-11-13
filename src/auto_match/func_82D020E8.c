extern int fn_82D00FB0();
extern int fn_82D01778();


void fn_82D020E8(int *param_1,int (**param_2)(),unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int *piVar7;
  unsigned __int64 uVar6;
  int *piVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  
  fn_82D01778(param_1,param_1[4],param_2,param_3,param_4);
  puVar1 = (unsigned int *)param_1[3];
  if ((puVar1 != (unsigned int *)0x0) || (*param_1 != 0)) {
    uVar11 = 0;
    for (; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1) {
      uVar11 = uVar11 + 1;
    }
    lVar10 = (uVar11 & 0x3fffffff) << 2;
    piVar3 = (int *)(**(int (***)())(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],lVar10);
    if (piVar3 != (int *)0x0) {
      piVar8 = (int *)param_1[3];
      if (piVar8 != (int *)0x0) {
        piVar7 = piVar3 + -1;
        do {
          piVar7 = piVar7 + 1;
          *piVar7 = (int)piVar8;
          piVar8 = (int *)*piVar8;
        } while (piVar8 != (int *)0x0);
      }
      if (1 < (int)uVar11) {
        fn_82D00FB0(piVar3,0,uVar11 - 1,0xffffffff82d01418);
      }
      puVar1 = (unsigned int *)*param_1;
      trapWord(6,(unsigned __int64)(unsigned int)param_1[1],0);
      uVar14 = ((unsigned __int64)(unsigned int)param_1[9] - (unsigned __int64)(unsigned int)param_1[8] & 0xffffffff) /
               (unsigned __int64)(unsigned int)param_1[1];
      for (; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1) {
        uVar14 = uVar14 + 1;
      }
      lVar12 = (uVar14 & 0x3fffffff) * 4;
      uVar2 = (**(int (***)())(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],lVar12);
      if ((uVar2 & 0xffffffff) == 0) {
        (**(int (***)())(*(int *)param_1[0xc] + 8))((int *)param_1[0xc],piVar3);
      }
      else {
        piVar8 = (int *)*param_1;
        uVar6 = 0;
        if (piVar8 != (int *)0x0) {
          lVar5 = uVar2 - 4;
          do {
            lVar5 = lVar5 + 4;
            *(int *)lVar5 = (int)piVar8;
            uVar6 = uVar6 + 1;
            piVar8 = (int *)*piVar8;
          } while (piVar8 != (int *)0x0);
        }
        uVar9 = param_1[8];
        if (uVar9 < (unsigned int)param_1[9]) {
          lVar5 = (uVar6 & 0x3fffffff) * 4 + uVar2 + -4;
          do {
            lVar5 = lVar5 + 4;
            *(unsigned int *)lVar5 = uVar9;
            uVar9 = param_1[1] + uVar9;
          } while (uVar9 < (unsigned int)param_1[9]);
        }
        if (1 < (int)uVar14) {
          fn_82D00FB0(uVar2,0,uVar14 - 1,0xffffffff82d01418);
        }
        uVar6 = 0;
        uVar14 = uVar2;
        piVar8 = piVar3;
        if ((uVar11 & 0xffffffff) != 0) {
          do {
            if ((lVar12 + uVar2 & 0xffffffff) <= (uVar14 & 0xffffffff)) break;
            uVar4 = (unsigned __int64)(unsigned int)param_1[1];
            uVar15 = (unsigned __int64)*(unsigned int *)(*piVar8 + 8);
            uVar13 = (__int64)*(int *)(*piVar8 + 0xc) * (__int64)param_1[1] + uVar15;
            if (uVar15 < (uVar13 & 0xffffffff)) {
              do {
                if ((uVar15 & 0xffffffff) == (unsigned __int64)*(unsigned int *)uVar14) {
                  (*param_2)(uVar15,uVar4,0,param_3,param_4);
                  uVar14 = uVar14 + 4;
                }
                else {
                  (*param_2)(uVar15,uVar4,1,param_3,param_4);
                }
                uVar4 = (unsigned __int64)(unsigned int)param_1[1];
                uVar15 = uVar4 + uVar15;
              } while ((uVar15 & 0xffffffff) < (uVar13 & 0xffffffff));
            }
            uVar6 = uVar6 + 1;
            piVar8 = piVar8 + 1;
          } while ((uVar6 & 0xffffffff) < (uVar11 & 0xffffffff));
        }
        (**(int (***)())(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],uVar2,lVar12);
        (**(int (***)())(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],piVar3,lVar10);
      }
    }
  }
  return;
}

