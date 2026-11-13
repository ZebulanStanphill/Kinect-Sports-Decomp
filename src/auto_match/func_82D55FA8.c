extern int fn_82CFF8D0();


void fn_82D55FA8(int param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(unsigned int *)(param_1 + 0xc),
                              ((uVar1 & 0x3fffffff) + (uVar1 & 0x3fffffff) * 2) * 4);
    (**(int (***)())(*param_2 + 0x14))
              (param_2,3,0xffffffff82138bfc,*(unsigned int *)(param_1 + 0xc),
               ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) +
                ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffffff) * 2 & 0x3fffffff) << 2,uVar2);
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10) * 0xc + iVar4;
  for (; iVar4 != iVar3; iVar4 = iVar4 + 0xc) {
    if (*(int *)(iVar4 + 8) != 0) {
      (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82138bf4,*(int *)(iVar4 + 8),0);
    }
  }
  return;
}

