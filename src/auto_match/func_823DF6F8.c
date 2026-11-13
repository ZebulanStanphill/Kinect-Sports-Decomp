extern int fn_82359698();
extern int fn_8236B578();
extern int fn_8236BB40();
extern int fn_823C3D28();
extern int fn_823D1358();


void fn_823DF6F8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(*(int *)(iVar1 + 0x4b0) + 0xd4) == 0) {
    if (*(int *)(iVar1 + 0x9a0) == 0) {
      fn_82359698(iVar1,2);
    }
    else {
      iVar2 = fn_8236BB40(iVar1);
      if (iVar2 != 0) {
        fn_823D1358(iVar1);
      }
    }
  }
  else {
    iVar2 = fn_8236B578(iVar1);
    if (iVar2 != 0) {
      fn_823C3D28(iVar1);
    }
  }
  return;
}

