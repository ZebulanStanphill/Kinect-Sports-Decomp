extern unsigned int fStack_20;
extern int fn_8268D4B8();
extern float lbl_82005718;
extern unsigned int uStack_10;


/* WARNING: Type propagation algorithm not settling */

void fn_8268D560(int param_1,unsigned int param_2)

{
  float fStack_20;
  float afStack_1c [3];
  unsigned int uStack_10;
  
  afStack_1c[1] = 2.8026e-45;
  uStack_10 = 0x200;
  fStack_20 = *(float *)(param_1 + 0x14) * lbl_82005718;
  afStack_1c[0] = *(float *)(param_1 + 8) * lbl_82005718;
  afStack_1c[2] = (float)param_2;
  fn_8268D4B8(afStack_1c + 1,0xffffffff82005c90,param_1,param_1 + 4,afStack_1c,param_1 + 0xc,
                param_1 + 0x10,&fStack_20);
  return;
}

