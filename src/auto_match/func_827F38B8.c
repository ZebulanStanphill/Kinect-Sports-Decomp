extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811238();
extern int fn_82811438();
extern unsigned int lbl_8201DD34;


extern char lbl_8320A3E0[];
void fn_827F38B8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [32];
  
  *param_1 = &lbl_8201DD34;
  if (*(short *)((int)param_1 + 0x1e) != 0) {
    auStack_40[0] = 3;
    uVar1 = fn_82811438(auStack_30,auStack_40,0x10);
    fn_82811238(lbl_8320A3E0,param_1[6],uVar1);
  }
  return;
}

