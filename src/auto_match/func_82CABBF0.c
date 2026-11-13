void fn_82CABBF0(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int *param_5,unsigned int *param_6)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  
  pbVar6 = (unsigned char *)((param_3 - 1 & 1) * *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  iVar2 = (param_3 & 1) * *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc);
  if (param_2 == 0 && param_3 == 0) goto LAB_82cabcf0;
  if (param_2 == 0) {
    *param_5 = 1;
LAB_82cabd00:
    if (param_3 == 0) {
      uVar5 = 0x10;
      uVar4 = uVar5;
    }
    else {
      uVar5 = (unsigned int)(*pbVar6 >> 2);
      uVar4 = uVar5;
    }
  }
  else {
    if (param_3 == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = pbVar6[param_2] & 3;
      bVar1 = *(unsigned char *)(iVar2 + param_2 + -1);
      uVar4 = bVar1 & 3;
      if (uVar5 != uVar4) {
        if (uVar4 == 2) {
          if ((pbVar6[param_2] & 3) == 0) {
            uVar5 = 2;
          }
          else {
            if (uVar5 != 1) goto LAB_82cabcf0;
            uVar5 = 2;
          }
        }
        else if ((bVar1 & 3) == 0) {
          if (uVar5 != 1) {
LAB_82cabcf0:
            uVar5 = 0;
          }
        }
        else {
          if ((uVar4 != 1) || (uVar5 != 2)) goto LAB_82cabcf0;
          uVar5 = pbVar6[param_2 - 1] & 3;
          if (uVar5 == 1) {
            uVar5 = 2;
          }
          else if (param_4 < 0xd) {
            if (uVar5 == 2) {
              uVar5 = 1;
            }
          }
          else {
            uVar5 = 2;
          }
        }
      }
    }
    *param_5 = uVar5;
    if (param_2 == 0) goto LAB_82cabd00;
    uVar5 = (unsigned int)(*(unsigned char *)(iVar2 + param_2 + -1) >> 2);
    uVar4 = uVar5;
    if (param_3 != 0) {
      uVar4 = (unsigned int)(pbVar6[param_2] >> 2);
    }
  }
  uVar3 = uVar4;
  if ((param_2 & param_3) != 0) {
    uVar3 = (unsigned int)(pbVar6[param_2 - 1] >> 2);
  }
  if (uVar5 < uVar4) {
    uVar4 = uVar3;
    if (uVar5 < uVar3) {
LAB_82cabdb4:
      *param_6 = uVar5;
      return;
    }
  }
  else {
    uVar5 = uVar3;
    if (uVar3 <= uVar4) goto LAB_82cabdb4;
  }
  *param_6 = uVar4;
  return;
}

