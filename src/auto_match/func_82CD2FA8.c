unsigned __int64 fn_82CD2FA8(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  iVar1 = *param_1;
  uVar2 = *(unsigned int *)(iVar1 + 4);
  if (0 < (int)uVar2) {
    iVar3 = param_1[1];
    uVar4 = *(unsigned int *)(iVar3 + 4);
    if (0 < (int)uVar4) {
      iVar5 = *(int *)(iVar1 + 0x10);
      if (((iVar5 != 0) && (iVar5 != 3)) ||
         ((*(int *)(iVar3 + 0x10) != 0 && (*(int *)(iVar3 + 0x10) != 3)))) {
        if (param_1[0xe3d] == 0) {
          if (uVar2 != uVar4) {
            return 6;
          }
          uVar6 = *(unsigned int *)(iVar3 + 8);
          uVar7 = (int)*(unsigned int *)(iVar1 + 8) >> 0x1f;
          if ((*(unsigned int *)(iVar1 + 8) ^ uVar7) - uVar7 !=
              (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) {
            return 6;
          }
        }
        else {
          if (uVar4 != param_1[0xe3b] - param_1[0xe39]) {
            return 6;
          }
          uVar6 = *(unsigned int *)(iVar3 + 8);
          if ((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f) != param_1[0xe3c] - param_1[0xe3a]
             ) {
            return 6;
          }
        }
        if ((iVar5 == 0x31313450) &&
           (uVar2 != (((int)uVar2 >> 2) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 3) != 0)) * 4)) {
          return 6;
        }
        iVar3 = *(int *)(iVar3 + 0x10);
        if ((iVar3 == 0x31313450) &&
           (uVar4 != (((int)uVar4 >> 2) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 3) != 0)) * 4)) {
          return 6;
        }
        if ((((((iVar5 == 0x32595559) || (iVar5 == 0x59565955)) || (iVar5 == 0x55595659)) ||
             ((iVar5 == 0x56555949 || (iVar5 == 0x30323449)))) || (iVar5 == 0x32323450)) &&
           ((uVar2 & 1) != 0)) {
          return 6;
        }
        if ((((iVar3 == 0x32595559) || (iVar3 == 0x59565955)) ||
            ((iVar3 == 0x55595659 ||
             (((iVar3 == 0x56555949 || (iVar3 == 0x30323449)) || (iVar3 == 0x32323450)))))) &&
           ((uVar4 & 1) != 0)) {
          return 6;
        }
        if (((iVar5 == 0x56555949) || (iVar5 == 0x30323449)) && ((*(unsigned int *)(iVar1 + 8) & 1) != 0)) {
          return 6;
        }
        if (((iVar3 == 0x56555949) || (iVar3 == 0x30323449)) && ((uVar6 & 1) != 0)) {
          return 6;
        }
      }
      return 0;
    }
  }
  return 6;
}

