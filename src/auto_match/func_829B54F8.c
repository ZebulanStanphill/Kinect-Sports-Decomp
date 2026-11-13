extern int d3dx_jdiv_round_up();


void fn_829B54F8(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  int iVar6;
  __int64 lVar7;
  int iVar8;
  
  iVar3 = param_1[0x53];
  if (iVar3 == 1) {
    iVar3 = param_1[0x54];
    param_1[0x58] = *(int *)(iVar3 + 0x1c);
    param_1[0x59] = *(int *)(iVar3 + 0x20);
    uVar1 = *(unsigned int *)(iVar3 + 0xc);
    trapWord(6,(unsigned __int64)uVar1,0);
    *(unsigned int *)(iVar3 + 0x34) = 1;
    *(unsigned int *)(iVar3 + 0x38) = 1;
    *(unsigned int *)(iVar3 + 0x3c) = 1;
    *(unsigned int *)(iVar3 + 0x40) = *(unsigned int *)(iVar3 + 0x24);
    *(unsigned int *)(iVar3 + 0x44) = 1;
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x20) -
            (__int64)(int)(*(unsigned int *)(iVar3 + 0x20) / uVar1) * (__int64)(int)uVar1;
    if (uVar4 == 0) {
      uVar4 = (unsigned __int64)uVar1;
    }
    *(int *)(iVar3 + 0x48) = (int)uVar4;
    param_1[0x5a] = 1;
    param_1[0x5b] = 0;
  }
  else {
    if ((iVar3 < 1) || (4 < iVar3)) {
      *(unsigned int *)(*param_1 + 0x14) = 0x1a;
      *(int *)(*param_1 + 0x18) = param_1[0x53];
      *(unsigned int *)(*param_1 + 0x1c) = 4;
      (**(int (***)())*param_1)(param_1);
    }
    iVar3 = d3dx_jdiv_round_up(param_1[7],param_1[0x4e] << 3);
    param_1[0x58] = iVar3;
    iVar3 = d3dx_jdiv_round_up(param_1[8],param_1[0x4f] << 3);
    iVar6 = 0;
    param_1[0x59] = iVar3;
    param_1[0x5a] = 0;
    if (0 < param_1[0x53]) {
      piVar5 = param_1 + 0x54;
      do {
        iVar3 = *piVar5;
        uVar1 = *(unsigned int *)(iVar3 + 8);
        uVar2 = *(unsigned int *)(iVar3 + 0xc);
        trapWord(6,(unsigned __int64)uVar1,0);
        lVar7 = (__int64)(int)uVar2 * (__int64)(int)uVar1;
        *(unsigned int *)(iVar3 + 0x34) = uVar1;
        iVar8 = (int)lVar7;
        *(int *)(iVar3 + 0x3c) = iVar8;
        *(unsigned int *)(iVar3 + 0x38) = uVar2;
        *(unsigned int *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x24) * uVar1;
        uVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x1c) -
                (__int64)(int)(*(unsigned int *)(iVar3 + 0x1c) / uVar1) * (__int64)(int)uVar1;
        if (uVar4 == 0) {
          uVar4 = (unsigned __int64)uVar1;
        }
        trapWord(6,(unsigned __int64)uVar2,0);
        *(int *)(iVar3 + 0x44) = (int)uVar4;
        uVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x20) -
                (__int64)(int)(*(unsigned int *)(iVar3 + 0x20) / uVar2) * (__int64)(int)uVar2;
        if (uVar4 == 0) {
          uVar4 = (unsigned __int64)uVar2;
        }
        *(int *)(iVar3 + 0x48) = (int)uVar4;
        if (10 < param_1[0x5a] + iVar8) {
          *(unsigned int *)(*param_1 + 0x14) = 0xd;
          (**(int (***)())*param_1)(param_1);
        }
        if (0 < iVar8) {
          do {
            param_1[param_1[0x5a] + 0x5b] = iVar6;
            param_1[0x5a] = param_1[0x5a] + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < param_1[0x53]);
    }
  }
  return;
}

