extern unsigned int *auStack_2c;
extern int fn_82E85268();
extern int fn_82F02410();
extern unsigned int uStack_30;


void fn_82E86AF0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  iVar1 = *(int *)(param_1 + 0xaf0);
  uVar2 = *(unsigned int *)(param_1 + 0x84c);
  uVar4 = (-(unsigned __int64)*(unsigned int *)(param_1 + 0x848) & ~(unsigned __int64)*(unsigned int *)(param_1 + 0x848) &
          0xffffffff) >> 0x1e & 2;
  *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x1ea0);
  iVar3 = (int)(((uVar4 | *(unsigned int *)(param_1 + 0x654)) +
                 (uVar4 | (unsigned __int64)*(unsigned int *)(param_1 + 0x654) & 0x3fffffff) * 4 & 0x3fffffff) << 2
               );
  if ((0 < *(int *)(param_1 + 0x1ea0)) && (iVar1 == 2)) {
    *(unsigned int *)(param_1 + 0xaf0) = 2;
  }
  if (*(int *)(param_1 + 0xaf0) == 0) {
    iVar5 = 0;
  }
  else if (*(int *)(param_1 + 0xaf0) == 1) {
    if (*(int *)(param_1 + 0x828) == -1) {
      iVar5 = 1;
    }
    else {
      iVar5 = 3;
    }
  }
  else {
    iVar5 = 2;
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                    *(unsigned int *)(iVar5 * 4 + iVar3 + -0x7ce77540),
                    *(unsigned int *)(iVar5 * 4 + iVar3 + -0x7ce774f0));
  if ((0 < *(int *)(param_1 + 0x84c)) &&
     ((*(int *)(param_1 + 0xaf0) == 2 || (*(int *)(param_1 + 0xaf0) == 4)))) {
    if (iVar1 != 4) {
      stack_pair_30.first = 0;
      stack_pair_30.second = 0;
      fn_82E85268(param_1,&stack_pair_30.first,&stack_pair_30.second,*(unsigned int *)(param_1 + 0x1acc));
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),stack_pair_30.first & 0x7f,stack_pair_30.second);
      *(unsigned int *)(param_1 + 0x84c) = uVar2;
      return;
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),0x7f,7);
    *(unsigned int *)(param_1 + 0xaf0) = 4;
  }
  *(unsigned int *)(param_1 + 0x84c) = uVar2;
  return;
}

