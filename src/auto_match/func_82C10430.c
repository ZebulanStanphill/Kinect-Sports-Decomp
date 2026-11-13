extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1E658();
extern int fn_82A1E6A0();
extern int fn_82C102B8();


unsigned __int64 fn_82C10430(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if (param_1[0xb] != 0) {
    fn_8265C990(param_1[0xb],0x208c8002);
  }
  if (param_1[0x16] != 0) {
    fn_82A1E658();
  }
  (**(int (***)())(*param_1 + 0x4c))(param_1);
  if (param_2 == 0) {
    iVar2 = fn_8265C940(param_3,0x208c8002);
    param_1[0xb] = iVar2;
    if (iVar2 == 0) {
      return 0xffffffff8007000e;
    }
    param_1[0xc] = iVar2;
  }
  else {
    param_1[0xc] = param_2;
  }
  param_1[0xd] = (int)param_3;
  iVar2 = fn_82A1E6A0(0,1,1,0);
  param_1[0x16] = iVar2;
  if (iVar2 == 0) {
    uVar1 = (**(int (***)())(*param_1 + 0x20))(param_1);
    fn_82C102B8(param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

