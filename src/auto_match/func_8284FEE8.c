extern int fn_8284F8A0();
extern int fn_8284F8F8();
extern int fn_8284FA10();
extern int fn_8284FBD0();
extern int fn_82860270();
extern int fn_828602E0();


void fn_8284FEE8(void)

{
  int aiStack_10;
  
  fn_82860270();
  fn_828602E0(0,&aiStack_10);
  *(int (***)())(aiStack_10 + 0x20) = fn_8284FBD0;
  *(int (***)())(aiStack_10 + 0x24) = fn_8284FA10;
  fn_828602E0(1,&aiStack_10);
  *(int (***)())(aiStack_10 + 0x20) = fn_8284F8F8;
  *(int (***)())(aiStack_10 + 0x24) = fn_8284F8A0;
  return;
}

