typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B10120();
extern int fn_82B17400();
extern int fn_82B81A28();


unsigned __int64
fn_82B837F8(int param_1,int *param_2,unsigned int *param_3,unsigned int param_4,unsigned int param_5,unsigned __int64 param_6)

{
  unsigned int *puVar1;
  bool bVar2;
  __int64 lVar3;
  __int64 lVar4;
  char cVar6;
  int *piVar5;
  unsigned int uVar7;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar8;
  unsigned int uVar11;
  
  puVar1 = (unsigned int *)param_3[4];
  if ((param_6 & 8) != 0) {
    if (puVar1[7] != *(unsigned int *)(param_4 + 0x1c)) {
      return 0;
    }
    lVar3 = fn_82B81A28(param_2);
    for (puVar10 = (unsigned int *)*puVar1; puVar10 != (unsigned int *)0x0; puVar10 = (unsigned int *)puVar10[1]) {
      if (((*puVar10 & 0xe000000) != 0) && ((*puVar10 & 8) != 0)) {
        lVar4 = fn_82B81A28(puVar1);
        if ((-(unsigned int)(lVar3 != lVar4) & (unsigned int)puVar10) != 0) {
          return 0;
        }
        break;
      }
    }
  }
  if (((((param_6 & 0x10) == 0) || (((puVar1[2] & 0x3f80) != 0x3800 && (puVar1[7] == param_2[7]))))
      && ((uVar9 = puVar1[2] >> 7 & 0x7f, uVar9 != 0x70 ||
          ((puVar1[7] != param_2[7] ||
           ((*(unsigned int *)(param_4 + 0x1c) == param_2[7] &&
            ((*(unsigned int *)(param_4 + 8) & 0x3f80) != 0x3800)))))))) &&
     (cVar6 = fn_82B17400(puVar1,param_4,param_1), cVar6 != '\0')) {
    if ((uVar9 == 0x70) && (uVar9 = param_2[7], *(unsigned int *)(param_4 + 0x1c) != uVar9)) {
      if (uVar9 != (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4))) {
        if ((*(unsigned int *)(param_1 + 0x28) & 0x4000) != 0) {
          uVar7 = *(unsigned int *)(param_4 + 8) >> 7 & 0x7f;
          if ((uVar7 == 0x7d) || (bVar2 = false, uVar7 == 0x7c)) {
            bVar2 = true;
          }
          if (bVar2) {
            return 0;
          }
        }
        uVar7 = param_5 >> (*param_3 >> 4 & 6) & 3;
        if ((((((param_2[2] & 0x3f80U) != 0x3800) || (puVar1 = (unsigned int *)*param_2, puVar1[1] != 0)) ||
             (puVar1[3] != param_4)) ||
            (((*puVar1 >> 5 & 3) != uVar7 || (((unsigned __int64)*puVar1 & 0x1f) != (param_6 & 0xffffffff))
             ))) && (piVar5 = (int *)fn_82B10120(param_1,uVar9,param_4,uVar7,param_6,
                                                       *(unsigned int *)(param_1 + 0x28) >> 0xe & 1),
                    param_2 != piVar5)) {
          puVar10 = (unsigned int *)(param_3[3] + 4);
          for (puVar1 = (unsigned int *)*puVar10; puVar1 != param_3; puVar1 = (unsigned int *)puVar1[2]) {
            puVar10 = puVar1 + 2;
          }
          *puVar10 = param_3[2];
          param_3[2] = piVar5[1];
          piVar5[1] = (int)param_3;
          uVar9 = *param_3 & 0xffffe01f | 0x1c80;
          param_3[3] = (unsigned int)piVar5;
          goto LAB_82b83b54;
        }
      }
    }
    else {
      uVar9 = *param_3;
      if ((((param_6 & 0x18) == 0) || ((uVar9 & 0x18) == 0)) &&
         (((param_6 & 2) == 0 || ((uVar9 & 1) == 0)))) {
        if (((param_6 & 4) == 0) || (bVar2 = false, (uVar9 & 1) == 0)) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        puVar10 = (unsigned int *)(param_3[3] + 4);
        for (puVar1 = (unsigned int *)*puVar10; puVar1 != param_3; puVar1 = (unsigned int *)puVar1[2]) {
          puVar10 = puVar1 + 2;
        }
        *puVar10 = param_3[2];
        param_3[2] = *(unsigned int *)(param_4 + 4);
        *(unsigned int **)(param_4 + 4) = param_3;
        uVar9 = *param_3;
        uVar7 = uVar9 >> 5 & 0xff;
        param_3[3] = param_4;
        uVar7 = ((((param_5 >> (uVar7 >> 5 & 6) & 3) << 2 | param_5 >> (uVar7 >> 3 & 6) & 3) << 2 |
                 param_5 >> (uVar7 >> 1 & 6) & 3) << 2 | param_5 >> ((uVar9 >> 5 & 3) << 1) & 3) <<
                5;
        *param_3 = uVar7 | uVar9 & 0xffffe01f;
        uVar8 = (unsigned __int64)uVar9 & 0x1f;
        if (((param_6 & 4) != 0) && ((uVar9 & 2) != 0)) {
          param_6 = param_6 - 4;
        }
        if ((param_6 & uVar8 & 4) != 0) {
          param_6 = param_6 - 4;
          uVar8 = uVar8 - 4;
        }
        uVar11 = (unsigned int)uVar8;
        if (((param_6 & 1) != 0) && ((uVar8 & 2) != 0)) {
          uVar11 = uVar11 - 2;
        }
        uVar9 = uVar7 | uVar9 & 0xffffe000 | ((unsigned int)param_6 | uVar11) & 0x1f;
LAB_82b83b54:
        *param_3 = uVar9;
        return 1;
      }
    }
  }
  return 0;
}

