extern int fn_82B86888();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack0000001c;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B8A2E0(unsigned __int64 param_1,unsigned int param_2,char param_3)

{
  unsigned int uStack0000001c;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  unsigned int uStack_14;
  
  stack_pair_20.second = lbl_821AAD20;
  uStack_18 = lbl_821AAD20;
  uStack_14 = lbl_821AAD20;
  uStack0000001c = param_2;
  stack_pair_20.first = param_2;
  fn_82B86888(param_1,1,&stack_pair_20.first,(param_3 == '\0') + '\x01');
  return;
}

