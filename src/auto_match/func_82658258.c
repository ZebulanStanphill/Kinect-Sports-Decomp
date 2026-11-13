typedef unsigned char bool;
extern unsigned int lbl_8327609C;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82658258(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  char in_RESERVE;
  unsigned char in_cr0;
  
  (**(int (***)())(param_3 + 0x350))(*(unsigned int *)(param_3 + 0x354));
  do {
    uVar1 = (unsigned __int64)lbl_8327609C;
    if (in_RESERVE != '\0') {
      lbl_8327609C = storeWordConditionalIndexed(~param_4 & uVar1,0,0xffffffff8327609c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar1 == (param_4 & 0xffffffff)) {
    KeSetEvent(0xffffffff831bd848,1,0);
  }
  return;
}

