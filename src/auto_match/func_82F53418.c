extern int fn_8251FA58();
extern int fn_8265CAA0();
extern int fn_82F52F30();
extern int fn_82F53270();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


unsigned __int64 fn_82F53418(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iStack_30;
  int iStack_2c;
  
  fn_82F52F30(&iStack_30);
  if (iStack_30 == 0) {
    fn_8265CAA0(0);
    if (iStack_2c != 0) {
      fn_8251FA58();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82F53270(param_1,iStack_30,param_2,param_3);
    fn_8265CAA0(iStack_30);
    if (iStack_2c != 0) {
      fn_8251FA58();
    }
  }
  return uVar1;
}

