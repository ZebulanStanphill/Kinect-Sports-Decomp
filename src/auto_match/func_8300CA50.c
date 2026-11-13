extern int fn_82FF7438();
extern int fn_82FF74B8();
extern int fn_830178D8();
extern int fn_83018220();
extern unsigned int lbl_832642E8;
extern unsigned int lbl_832642FC;


unsigned __int64 fn_8300CA50(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  fn_830178D8(lbl_832642FC,param_1);
  fn_82FF74B8(lbl_832642E8,param_1);
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 1;
  }
  else if (param_3 == 0) {
    uVar1 = fn_83018220(lbl_832642FC,param_1,param_2,0);
  }
  else if (param_3 == 1) {
    uVar1 = fn_82FF7438(lbl_832642E8,param_1,param_2);
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}

