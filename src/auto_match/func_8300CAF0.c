extern unsigned int lbl_832642E8;
extern unsigned int lbl_832642FC;

unsigned __int64 fn_8300CAF0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  
  if (param_4 == 0) {
    uVar1 = fn_83017558(lbl_832642FC,param_3,param_2);
    return uVar1;
  }
  if (param_4 != 1) {
    return 0;
  }
  uVar1 = fn_82FF6520(lbl_832642E8);
  return uVar1;
}
