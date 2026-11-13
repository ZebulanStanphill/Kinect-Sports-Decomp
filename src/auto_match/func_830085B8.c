extern int fn_82FFBA78();
extern unsigned int lbl_832642F0;


int fn_830085B8(int param_1)

{
  int uVar1;
  
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    uVar1 = fn_82FFBA78(lbl_832642F0,param_1 + 4);
    return uVar1;
  }
  return 1;
}

