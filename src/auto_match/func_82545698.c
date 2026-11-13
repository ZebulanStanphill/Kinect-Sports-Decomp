extern int fn_825453C0();
extern float lbl_821CA45C[];
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82545698(unsigned int param_1)

{
  struct { float first; float second; } stack_pair_20;

  struct { float first; float second; } stack_pair_18;


  stack_pair_20.first = 0.0f;
  stack_pair_20.second = 0.0f;
  stack_pair_18.first = lbl_821CA45C[1];
  stack_pair_18.second = lbl_821CA45C[1];
  fn_825453C0(0x500,0x2d0,&stack_pair_20.first,&stack_pair_18.first,param_1);
  return;
}
