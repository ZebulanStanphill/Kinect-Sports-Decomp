extern int fn_82CFF8D0();
extern int fn_82CFF928();


void fn_8308B3F0(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(unsigned int *)(param_1 + 0xa8) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0xa0),*(unsigned int *)(param_1 + 0xa8) << 4);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82187990,*(unsigned int *)(param_1 + 0xa0),
               *(int *)(param_1 + 0xa4) << 4,uVar1);
  }
  if ((*(unsigned int *)(param_1 + 0xb4) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0xac),*(unsigned int *)(param_1 + 0xb4) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8213b3e8,*(unsigned int *)(param_1 + 0xac),
               *(int *)(param_1 + 0xb0) << 2,uVar1);
  }
  if ((*(unsigned int *)(param_1 + 0xc0) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0xb8),*(unsigned int *)(param_1 + 0xc0) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8213b3e8,*(unsigned int *)(param_1 + 0xb8),
               *(int *)(param_1 + 0xbc) << 2,uVar1);
  }
  if ((*(unsigned int *)(param_1 + 0xcc) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0xc4),*(unsigned int *)(param_1 + 0xcc) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8213b3e8,*(unsigned int *)(param_1 + 0xc4),
               *(int *)(param_1 + 200) << 2,uVar1);
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    fn_82CFF928(param_2,0xffffffff82187988,*(unsigned int *)(param_1 + 0xd8),
                      *(int *)(param_1 + 0xd0) << 4,0);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xd0)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0xd8) + iVar3;
      if ((*(unsigned int *)(iVar4 + 0xc) & 0x80000000) == 0) {
        uVar1 = fn_82CFF8D0(*(unsigned int *)(iVar4 + 4),
                                  (*(unsigned int *)(iVar4 + 0xc) & 0x3fffffff) << 1);
        (**(int (***)())(*param_2 + 0x14))
                  (param_2,3,0xffffffff82187988,*(unsigned int *)(iVar4 + 4),*(int *)(iVar4 + 8) << 1,
                   uVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0xd0));
  }
  return;
}

