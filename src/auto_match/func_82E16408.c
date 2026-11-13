extern int fn_82CFF8D0();


void fn_82E16408(int param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if ((*(unsigned int *)(param_1 + 0x3c) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x3c) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8214b434,*(unsigned int *)(param_1 + 0x34),
               *(int *)(param_1 + 0x38) << 2,uVar2);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x48);
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x40),
                              ((uVar1 & 0x3fffffff) + (uVar1 & 0x3fffffff) * 2) * 4);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821353b8,*(unsigned int *)(param_1 + 0x40),
               ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) +
                ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) & 0x7fffffff) * 2 & 0x3fffffff) << 2,uVar2);
  }
  if ((*(unsigned int *)(param_1 + 0x54) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x4c),*(unsigned int *)(param_1 + 0x54) << 3);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8214b42c,*(unsigned int *)(param_1 + 0x4c),
               *(int *)(param_1 + 0x50) << 3,uVar2);
  }
  if ((*(unsigned int *)(param_1 + 0x60) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x58),*(unsigned int *)(param_1 + 0x60) << 3);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8214b424,*(unsigned int *)(param_1 + 0x58),
               *(int *)(param_1 + 0x5c) << 3,uVar2);
  }
  return;
}

