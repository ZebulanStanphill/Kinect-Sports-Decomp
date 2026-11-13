extern int fn_8243E7B0();
extern int fn_8243E968();
extern int fn_8243EB18();
extern int fn_82F68CC0();


void fn_8243E3C8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  char acStack_48 [72];
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      fn_8243E968(*(int *)(param_1 + 4),*(int *)(param_1 + 8),
                        (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x5c,0);
    }
    else {
      fn_8243E7B0();
    }
  }
  else if (param_2 == 1) {
    fn_8243EB18(*(int *)(param_1 + 4),*(int *)(param_1 + 8),
                      (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x5c,0);
  }
  else if (param_2 < 3) {
    uVar2 = *(unsigned int *)(param_1 + 4);
    iVar4 = 0;
    acStack_48[0] = '\0';
    acStack_48[1] = 0;
    uVar3 = 0;
    acStack_48[2] = 0;
    acStack_48[3] = 0;
    acStack_48[4] = 0;
    acStack_48[5] = 0;
    acStack_48[6] = 0;
    acStack_48[7] = 0;
    uVar1 = 0;
    if ((int)(*(int *)(param_1 + 8) - uVar2) / 0x5c != 0) {
      do {
        if (acStack_48[*(int *)(iVar4 + uVar2)] == '\0') {
          acStack_48[*(int *)(iVar4 + uVar2)] = '\x01';
        }
        else {
          *(unsigned int *)(iVar4 + uVar2) = 0xffffffff;
        }
        uVar2 = *(unsigned int *)(param_1 + 4);
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x5c;
        uVar1 = (int)(*(int *)(param_1 + 8) - uVar2) / 0x5c;
      } while (uVar3 < uVar1);
    }
    lVar7 = (__int64)(int)uVar1 + -1;
    if (-1 < lVar7) {
      lVar8 = lVar7 * 0x5c;
      do {
        lVar6 = lVar8 + (unsigned __int64)*(unsigned int *)(param_1 + 4);
        if (*(int *)lVar6 == -1) {
          uVar1 = *(unsigned int *)(param_1 + 8);
          uVar9 = lVar6 + 0x5c;
          if ((uVar9 & 0xffffffff) != (unsigned __int64)uVar1) {
            do {
              fn_82F68CC0(lVar6,uVar9,0x5c);
              uVar9 = uVar9 + 0x5c;
              lVar6 = lVar6 + 0x5c;
            } while ((uVar9 & 0xffffffff) != (unsigned __int64)uVar1);
          }
          iVar5 = *(int *)(param_1 + 8) + -0x5c;
          for (iVar4 = iVar5; iVar4 != *(int *)(param_1 + 8); iVar4 = iVar4 + 0x5c) {
          }
          *(int *)(param_1 + 8) = iVar5;
        }
        lVar7 = lVar7 + -1;
        lVar8 = lVar8 + -0x5c;
      } while (-1 < lVar7);
    }
  }
  return;
}

