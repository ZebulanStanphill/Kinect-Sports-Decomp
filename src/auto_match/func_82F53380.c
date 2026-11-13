extern int fn_8251FA58();
extern int fn_8265CAA0();
extern int fn_82F52F30();
extern int fn_82F53270();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


unsigned __int64 fn_82F53380(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  int iStack_40;
  int iStack_3c;
  
  fn_82F52F30(&iStack_40);
  if (iStack_40 == 0) {
    fn_8265CAA0(0);
    if (iStack_3c != 0) {
      fn_8251FA58();
    }
    uVar1 = 0;
  }
  else {
    *(unsigned int *)(iStack_40 + 0x44) = param_3 & 0xff;
    uVar1 = fn_82F53270(param_1,iStack_40,param_2,param_4);
    fn_8265CAA0(iStack_40);
    if (iStack_3c != 0) {
      fn_8251FA58();
    }
  }
  return uVar1;
}

