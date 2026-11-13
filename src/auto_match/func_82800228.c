extern unsigned int *auStack_20;
extern int fn_827F6A08();
extern int fn_82800E88();
extern int fn_828023C0();


unsigned __int64 fn_82800228(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned int auStack_20 [2];
  
  uVar1 = fn_828023C0();
  if ((int)uVar1 == -1) {
    uVar1 = 0;
  }
  else {
    fn_82800E88(param_1,auStack_20);
    uVar1 = fn_827F6A08(auStack_20[0],uVar1);
  }
  return uVar1;
}

