extern int fn_82645688();
extern int fn_826458F8();
extern int fn_82653160();
extern int fn_82653408();


int fn_826474B8(int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  
  uVar1 = fn_826458F8(param_1,param_2 + 0x48);
  if (uVar1 == 0) {
    fn_82645688(param_1);
    fn_82653408(param_1);
    iVar2 = fn_82653160(param_1,param_2);
    if (iVar2 == 0) {
      fn_82653408(param_1);
      uVar1 = 0x8007000e;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
