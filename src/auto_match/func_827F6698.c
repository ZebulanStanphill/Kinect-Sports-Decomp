extern unsigned int *auStack_20;
extern unsigned int fStack_30;
extern int fn_827FEF40();
extern int fn_82809D40();
extern int fn_8280DF98();
extern int fn_8280E168();


void fn_827F6698(__int64 param_1)

{
  int aiStack_40 [2];
  float afStack_38 [2];
  float fStack_30;
  unsigned char auStack_20 [32];
  
  fn_827FEF40(param_1 + 0x24,aiStack_40);
  fn_8280E168((double)*(float *)(aiStack_40[0] + 0xc),(double)*(float *)(aiStack_40[0] + 0x10),
               (double)*(float *)(aiStack_40[0] + 0x14),(double)*(float *)(aiStack_40[0] + 0x18),
               auStack_20);
  fn_8280DF98(auStack_20,0xffffffff8219609c,afStack_38);
  fn_82809D40((double)afStack_38[0],(double)fStack_30);
  return;
}

