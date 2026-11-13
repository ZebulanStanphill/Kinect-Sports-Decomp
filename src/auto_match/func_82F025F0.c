extern int fn_82F022F0();
extern int fn_82F02410();


void fn_82F025F0(unsigned int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  
  if ((unsigned int)param_1[0xd] < (unsigned int)param_1[1]) {
    param_1[4] = 0x20;
    param_1[3] = 0;
    param_1[1] = 0;
    param_1[0xe] = 1;
    param_1[2] = *param_1;
  }
  if (param_1[0xb] != 0) {
    fn_82F02410(param_1,1,1);
  }
  if ((param_1[4] != 0x20) && (iVar3 = -param_1[4], 0 < iVar3 + 0x20)) {
    lVar4 = (unsigned __int64)(iVar3 + 0x1fU >> 3) + 1;
    do {
      if (param_1[0xb] == 0) {
        *(unsigned char *)param_1[2] = *(unsigned char *)(param_1 + 3);
        iVar3 = param_1[1] + 1;
        param_1[2] = param_1[2] + 1;
      }
      else {
        uVar2 = (unsigned __int64)(unsigned int)param_1[2];
        iVar1 = fn_82F022F0(param_1,*(unsigned char *)(param_1 + 3),uVar2,uVar2 + 1);
        iVar3 = param_1[2];
        param_1[2] = iVar1 + iVar3;
        iVar3 = (param_1[1] - (int)uVar2) + iVar1 + iVar3;
      }
      lVar4 = lVar4 + -1;
      param_1[1] = iVar3;
      param_1[3] = param_1[3] << 8;
    } while (lVar4 != 0);
  }
  param_1[4] = 0x20;
  param_1[3] = 0;
  return;
}

