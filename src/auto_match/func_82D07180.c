extern int fn_82CFF8D0();


void fn_82D07180(int param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  if ((*(unsigned int *)(param_1 + 0x1c) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x14),
                              (*(unsigned int *)(param_1 + 0x1c) & 0x3fffffff) << 1);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821340b4,*(unsigned int *)(param_1 + 0x14),
               *(int *)(param_1 + 0x18) << 1,uVar2);
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_1 + 0x28) << 2);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821340a8,*(unsigned int *)(param_1 + 0x20),
               *(int *)(param_1 + 0x24) << 2,uVar2);
  }
  if ((*(unsigned int *)(param_1 + 0x10) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x10) << 5);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff821340c0,*(unsigned int *)(param_1 + 8),
               *(int *)(param_1 + 0xc) << 5,uVar2);
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  if (0 < (int)*(unsigned int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 8);
      (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff8213419c,*(unsigned int *)(iVar3 + iVar1),0);
      (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82131ab8,*(unsigned int *)(iVar3 + iVar1 + 4),0)
      ;
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + 0x20;
    } while (uVar4 != 0);
  }
  return;
}

