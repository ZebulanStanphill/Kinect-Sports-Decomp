extern int fn_8265C990();
extern int fn_82EDB418();
extern int fn_82EDB7B8();


int fn_82EDBF50(unsigned int param_1)

{
  int uVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x158) == 0) {
    uVar1 = fn_82EDB7B8(param_1);
    return uVar1;
  }
  fn_82EDB418(param_1);
  fn_8265C990(param_1,0x248c8000);
  return 0;
}

