extern int fn_8265CAA0();
extern int fn_82E20100();
extern int fn_82E206E8();
extern int fn_82E22508();


void fn_82E20B98(int param_1)

{
  int uVar1;
  int lVar2;
  
  uVar1 = fn_82E206E8(param_1);
  lVar2 = fn_82E20100(uVar1,1);
  if (lVar2 != 0) {
    if (*(unsigned int *)(param_1 + 8) != 0) {
      fn_82E22508(*(int *)(param_1 + 8),lVar2);
    }
    fn_8265CAA0(lVar2);
  }
  return;
}

