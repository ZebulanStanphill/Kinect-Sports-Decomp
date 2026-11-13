extern unsigned int fStack_30;
extern int fn_82623B60();
extern int fn_82623C90();
extern int fn_82623D60();
extern unsigned int lbl_83296890;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;


void fn_82623E40(unsigned __int64 param_1)

{
  unsigned __int64 *puVar1;
  unsigned __int64 in_r7;
  unsigned __int64 in_r8;
  int in_r9;
  float fStack_30;
  float afStack_2c [11];
  
  if (*(int *)(&lbl_83296C80 + in_r9 * 0xb0) == 0) {
    puVar1 = &lbl_83296890;
  }
  else {
    puVar1 = (unsigned __int64 *)(&lbl_83296C20 + in_r9 * 0xb0);
  }
  fn_82623B60(puVar1);
  fn_82623C90(param_1,in_r8,in_r7,afStack_2c,&fStack_30);
  fn_82623D60((double)afStack_2c[0],(double)fStack_30);
  return;
}

