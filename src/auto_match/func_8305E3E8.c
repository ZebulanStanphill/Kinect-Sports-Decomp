extern int fn_82F68CC0();
extern unsigned int lbl_831BCA54;


void fn_8305E3E8(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 6) {
    iVar3 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x2c) = param_1 + 0x14;
    if ((0 < iVar3) && (*(int *)(param_1 + 0x10) != 0)) {
      if (param_2 < iVar3) {
        iVar3 = param_2;
      }
      fn_82F68CC0(param_1 + 0x14,*(int *)(param_1 + 0x10),iVar3 << 2);
      (**(int (***)())(*(int *)lbl_831BCA54 + 4))(lbl_831BCA54,*(unsigned int *)(param_1 + 0x10));
      *(unsigned int *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 0x30) = param_2;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x30);
    uVar1 = (*(int (**)())**(unsigned int **)lbl_831BCA54)(lbl_831BCA54,param_2 << 2);
    *(int *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x2c) = (int)uVar1;
    if (0 < iVar3) {
      if (param_2 <= iVar3) {
        iVar3 = param_2;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        iVar2 = param_1 + 0x14;
      }
      fn_82F68CC0(uVar1,iVar2,iVar3 << 2);
      if (*(int *)(param_1 + 0x10) != 0) {
        (**(int (***)())(*(int *)lbl_831BCA54 + 4))();
      }
    }
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x2c);
  }
  return;
}

