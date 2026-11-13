extern int fn_82CFF8D0();
extern int fn_82D48E18();


void fn_82D3E120(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(unsigned int *)(param_1 + 0x20) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x20) << 4);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff8213844c,*(unsigned int *)(param_1 + 0x18),
               *(int *)(param_1 + 0x1c) << 4,uVar1);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = 0;
    do {
      (**(int (***)())(*param_2 + 0xc))
                (param_2,0xffffffff82138418,*(unsigned int *)(iVar3 + *(int *)(param_1 + 0x18)),0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  fn_82D48E18(param_1,param_2,0xffffffff8323c614);
  return;
}

