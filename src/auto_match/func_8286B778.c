extern unsigned int *auStack_40;
extern int fn_82230300();
extern int fn_822402F8();
extern int fn_82240378();
extern int fn_8286B448();


void fn_8286B778(int param_1,int param_2)

{
  unsigned char auStack_40 [32];
  
  fn_82240378(auStack_40,param_2 + -0x1c);
  fn_822402F8(param_2 + -0x1c,param_1);
  fn_8286B448(param_1,0,((param_2 - param_1) + -0x1c) / 0x1c,auStack_40);
  fn_82230300(auStack_40,1,0);
  return;
}

