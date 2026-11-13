unsigned __int64 fn_82899280(int param_1,__int64 param_2,__int64 param_3,__int64 param_4)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar4;
  unsigned char *pbVar7;
  __int64 lVar8;
  unsigned char *pbVar9;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  iVar5 = (int)param_3;
  if (uVar1 != *(unsigned int *)(iVar5 + 4)) {
    return 0;
  }
  if (8 < uVar1) {
    return 0;
  }
  if ((uVar1 == 1) || (uVar1 == 2)) {
LAB_828992cc:
    return (unsigned __int64)
           (*(char *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5) ==
           *(char *)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1));
  }
  if ((uVar1 != 3) && (uVar1 != 4)) {
    if (uVar1 == 5) {
      return (unsigned __int64)
             (*(float *)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1) ==
             *(float *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5));
    }
    if (uVar1 != 6) {
      if (uVar1 == 7) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        if (uVar1 == *(unsigned int *)(iVar5 + 0xc)) {
          if (4 < uVar1) {
            if (*(unsigned int *)(iVar5 + 0xc) < 5) {
              uVar4 = (param_4 + 2U & 0x3fffffff) * 4 + param_3;
            }
            else {
              uVar4 = (unsigned __int64)*(unsigned int *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5);
            }
            lVar8 = 0;
            pbVar9 = *(unsigned char **)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1);
            if (uVar1 != 0) {
              pbVar7 = pbVar9 + uVar1;
              do {
                lVar8 = (unsigned __int64)*pbVar9 - (unsigned __int64)*(unsigned char *)uVar4;
                if (lVar8 != 0) break;
                pbVar9 = pbVar9 + 1;
                uVar4 = uVar4 + 1;
              } while (pbVar9 != pbVar7);
            }
            return (unsigned __int64)((int)lVar8 == 0);
          }
          goto LAB_828992f8;
        }
      }
      else {
        if (uVar1 == 0) goto LAB_828992cc;
        piVar2 = *(int **)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1);
        piVar3 = *(int **)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5);
        if (piVar2 == (int *)0x0) {
          if (piVar3 == (int *)0x0) {
            return 1;
          }
        }
        else if (piVar3 != (int *)0x0) {
          iVar5 = (**(int (***)())(*piVar3 + 8))(piVar3);
          iVar6 = (**(int (***)())(*piVar2 + 8))(piVar2);
          if (iVar6 == iVar5) {
            uVar4 = (**(int (***)())(*piVar2 + 0x10))(piVar2,piVar3);
            return uVar4;
          }
        }
      }
      return 0;
    }
  }
LAB_828992f8:
  return (unsigned __int64)
         (*(int *)((int)((param_4 + 2U & 0xffffffff) << 2) + iVar5) ==
         *(int *)((int)((param_2 + 2U & 0xffffffff) << 2) + param_1));
}

