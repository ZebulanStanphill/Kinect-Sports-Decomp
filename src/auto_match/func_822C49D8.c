typedef unsigned char bool;
extern unsigned int *auStack_20;
extern int fn_822B69A0();
extern int fn_8255A260();
extern unsigned int lbl_821958E8;


bool fn_822C49D8(unsigned __int64 param_1)

{
  double dVar1;
  unsigned char auStack_20 [1];
  
  fn_822B69A0(auStack_20,param_1);
  dVar1 = (double)fn_8255A260();
  return ABS(dVar1) < (double)lbl_821958E8;
}

