extern int fn_82F02410();


void fn_82F2A028(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int uVar6;
  __int64 lVar5;
  
  uVar6 = 0;
  uVar1 = *(unsigned int *)(param_1 + 0xe10);
  while (1 < uVar1) {
    uVar6 = uVar6 + 1;
    uVar1 = *(unsigned int *)(param_1 + 0xe10) >> (uVar6 & 0x3f);
  }
  lVar5 = 0;
  *(unsigned int *)(param_1 + 0x610) = uVar6 + 1;
  uVar1 = *(unsigned int *)(param_1 + 0xe14);
  while (1 < uVar1) {
    lVar5 = lVar5 + 1;
    uVar1 = *(unsigned int *)(param_1 + 0xe14) >> ((unsigned int)lVar5 & 0x3f);
  }
  lVar5 = lVar5 + 1;
  iVar3 = (int)lVar5;
  *(int *)(param_1 + 0x60c) = iVar3;
  if ((int)(uVar6 + 1) < 3) {
    *(unsigned int *)(param_1 + 0x610) = 3;
  }
  if ((*(unsigned int *)(param_1 + 0x614) < 8) ||
     ((((*(int *)(param_1 + 0xaf0) != 0 && (*(int *)(param_1 + 0xaf0) != 4)) ||
       (*(int *)(param_1 + 0xa0c) != 0)) && (*(int *)(param_1 + 0x97c) != 0)))) {
    uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
    lVar4 = 3;
    if (7 < iVar3) {
      fn_82F02410(uVar2,0,3);
      uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
      lVar4 = 2;
      lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x60c) - 8;
    }
  }
  else {
    if (iVar3 < 2) {
      *(unsigned int *)(param_1 + 0x60c) = 2;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
    if ((int)*(unsigned int *)(param_1 + 0x60c) < 8) {
      lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x60c) - 1;
      lVar5 = 1;
    }
    else {
      lVar4 = 6;
      lVar5 = 0;
    }
  }
  fn_82F02410(uVar2,lVar5,lVar4);
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),(unsigned __int64)*(unsigned int *)(param_1 + 0x610) - 3,2);
  return;
}

