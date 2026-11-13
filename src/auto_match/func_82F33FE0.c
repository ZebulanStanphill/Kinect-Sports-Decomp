extern int fn_82EE00A8();
extern int fn_82EE0140();
extern int fn_82F33B70();
extern int fn_82F68CC0();
extern int fn_83143BA8();


unsigned __int64 fn_82F33FE0(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar6;
  int *piVar10;
  unsigned __int64 uVar9;
  unsigned __int64 uVar11;
  
  if ((((param_1 == (unsigned short *)0x0) || (param_2 == (unsigned short *)0x0)) || (*(int *)(param_1 + 2) == 0))
     || (*param_1 != *param_2)) {
    return 0xffffffff80070057;
  }
  uVar3 = 0;
  if (*param_1 != 0) {
    puVar4 = param_2 + 8;
    do {
      if (*(int *)(((int)param_1 - (int)param_2) + (int)puVar4) != *(int *)puVar4) {
        return 0xffffffff80070057;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar3 < *param_1);
  }
  if (0xfffe < *(unsigned int *)(param_1 + 4)) {
    return 0xffffffff8000ffff;
  }
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4) + 1;
  if (*(unsigned int *)(param_2 + 4) < 0xffff) {
    *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4) + 1;
    uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 2);
    uVar3 = fn_82F33B70(*param_1,uVar11,param_1 + 8);
    uVar1 = param_1[1];
    trapWord(6,uVar11,0);
    uVar11 = uVar3 / uVar11;
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x600) == 0) {
        if ((uVar1 & 0x800) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if (uVar3 != 0) {
              fn_82F68CC0(*(unsigned int *)(param_2 + 6),*(unsigned int *)(param_1 + 6));
            }
          }
          else {
            uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 6);
            uVar5 = (unsigned __int64)*(unsigned int *)(param_2 + 6);
            if ((*(int *)(param_1 + -2) != 0) && (uVar9 = 0, uVar11 != 0)) {
              do {
                uVar2 = (**(int (***)())(**(int **)(param_1 + -2) + 0x14))
                                  (*(int **)(param_1 + -2),uVar6,uVar5);
                if ((int)uVar2 < 0) goto LAB_82f34244;
                uVar9 = uVar9 + 1;
                uVar6 = *(unsigned int *)(param_1 + 2) + uVar6;
                uVar5 = *(unsigned int *)(param_1 + 2) + uVar5;
              } while ((uVar9 & 0xffffffff) < uVar11);
            }
          }
        }
        else {
          uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 6);
          uVar5 = 0;
          uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 6);
          if (uVar11 != 0) {
            do {
              uVar2 = fn_83143BA8(uVar9,uVar6);
              if ((int)uVar2 < 0) goto LAB_82f34244;
              uVar5 = uVar5 + 1;
              uVar9 = uVar9 + 0x10;
              uVar6 = uVar6 + 0x10;
            } while ((uVar5 & 0xffffffff) < uVar11);
          }
        }
      }
      else if (uVar11 != 0) {
        puVar8 = (unsigned int *)(*(int *)(param_2 + 6) + -4);
        puVar7 = (unsigned int *)(*(int *)(param_1 + 6) + -4);
        do {
          if ((int *)puVar7[1] != (int *)0x0) {
            (**(int (***)())(*(int *)puVar7[1] + 4))();
          }
          if ((int *)puVar8[1] != (int *)0x0) {
            (**(int (***)())(*(int *)puVar8[1] + 8))();
          }
          puVar7 = puVar7 + 1;
          uVar11 = uVar11 - 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar7;
        } while (uVar11 != 0);
      }
    }
    else {
      puVar7 = *(unsigned int **)(param_1 + 6);
      uVar5 = 0;
      piVar10 = *(int **)(param_2 + 6);
      if (uVar11 != 0) {
        do {
          if (*piVar10 != 0) {
            fn_82EE00A8();
          }
          uVar2 = fn_82EE0140(*puVar7,piVar10);
          if ((int)uVar2 < 0) goto LAB_82f34244;
          uVar5 = uVar5 + 1;
          piVar10 = piVar10 + 1;
          puVar7 = puVar7 + 1;
        } while ((uVar5 & 0xffffffff) < uVar11);
      }
    }
    if (*(int *)(param_2 + 4) != 0) {
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
      if (*(int *)(param_1 + 4) == 0) {
        return 0xffffffff8000ffff;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      return 0;
    }
  }
  uVar2 = 0xffffffff8000ffff;
LAB_82f3408c:
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return uVar2;
LAB_82f34244:
  if (*(int *)(param_2 + 4) != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  }
  goto LAB_82f3408c;
}

