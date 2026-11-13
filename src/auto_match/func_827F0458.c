extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811238();
extern int fn_82811438();


extern char lbl_8320A3E0[];
void fn_827F0458(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [32];
  
  auStack_40[0] = 3;
  uVar1 = fn_82811438(auStack_30,auStack_40,0x10);
  fn_82811238(lbl_8320A3E0,param_2,uVar1);
  return;
}

