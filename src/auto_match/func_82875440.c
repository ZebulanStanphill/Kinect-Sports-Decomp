extern unsigned int *auStack_30;
extern int fn_82811238();
extern int fn_82811400();
extern int fn_82874BC0();


extern char lbl_832116F8[];
unsigned __int64 fn_82875440(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned char auStack_30 [24];
  
  fn_82874BC0();
  if ((param_2 & 1) != 0) {
    uVar1 = fn_82811400(auStack_30,4);
    fn_82811238(lbl_832116F8,param_1,uVar1);
  }
  return param_1;
}

