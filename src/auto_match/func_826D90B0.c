extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82686228();
extern int fn_826D8EE0();
extern unsigned int lbl_831E7E64;
extern char lbl_83155AB8[];

int fn_826D90B0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;

  uVar1 = fn_8267B890(lbl_831E7E64,0x20,0);
  if (uVar1 != 0) {
    uVar2 = fn_826D8EE0(uVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = 0;
  }
  fn_82686228(param_1,lbl_83155AB8,uVar2);
  if (uVar2 != 0) {
    fn_8267C4F0(uVar2);
  }
  return param_1;
}
