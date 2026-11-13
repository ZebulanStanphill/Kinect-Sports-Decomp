typedef unsigned char bool;
extern int fn_8289F160();
extern unsigned int lbl_83212A04;
extern unsigned int uStack_20;


bool fn_82881320(unsigned int param_1)

{
  unsigned int uStack_20;
  int aiStack_1c [3];
  
  uStack_20 = param_1;
  fn_8289F160(aiStack_1c,0xffffffff83212a00,&uStack_20);
  return lbl_83212A04 != aiStack_1c[0];
}

