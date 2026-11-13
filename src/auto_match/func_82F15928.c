extern int fn_82F02410();


void fn_82F15928(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  
  iVar5 = 0;
  iVar2 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7808) == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x7820);
    uVar6 = *(unsigned int *)(param_1 + 0x7824);
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x7840);
    uVar6 = *(unsigned int *)(param_1 + 0x7844);
  }
  if ((0 < (int)uVar1) || (0 < (int)uVar6)) {
    iVar5 = 1;
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),iVar5,1);
  if (iVar5 != 0) {
    uVar4 = (unsigned __int64)uVar1;
    if (((uVar1 != uVar6) && (uVar4 = uVar3, 0 < (int)uVar1)) &&
       ((((int)uVar1 < 7 && (uVar6 == uVar1 + 2)) || ((uVar1 == 7 && (uVar6 == 8)))))) {
      uVar4 = (unsigned __int64)uVar1 + 8;
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar4,4);
  }
  if ((*(int *)(param_1 + 0x31c) != *(int *)(param_1 + 0x77b8)) ||
     (*(int *)(param_1 + 800) != *(int *)(param_1 + 0x77bc))) {
    iVar2 = 1;
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),iVar2,1);
  if (iVar2 != 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x77f4),2);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x77f8),2);
    if ((*(int *)(param_1 + 0x77f4) == 0) && (*(int *)(param_1 + 0x77f8) == 0)) {
      uVar6 = *(unsigned int *)(param_1 + 0x31c);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                        (__int64)((int)uVar6 >> 1) +
                        (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0) + -1,0xc);
      uVar6 = *(unsigned int *)(param_1 + 800);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                        (__int64)((int)uVar6 >> 1) +
                        (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0) + -1,0xc);
    }
  }
  return;
}

