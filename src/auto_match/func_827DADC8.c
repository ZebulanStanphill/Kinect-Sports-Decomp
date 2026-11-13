extern int fn_82517A50();
extern int fn_827D5078();
extern int fn_827D5108();
extern int fn_827D5158();


unsigned int * fn_827DADC8(unsigned int *param_1)

{
  unsigned __int64 in_r7;
  unsigned __int64 in_r8;
  unsigned int *puStack00000014;
  
  puStack00000014 = param_1;
  fn_827D5158();
  fn_827D5108(*param_1,0);
  if ((in_r8 & 0xffffffff) != 0) {
    fn_827D5078(*param_1,in_r8);
  }
  if ((in_r7 & 0xffffffff) != 0) {
    fn_82517A50(in_r7,param_1);
  }
  return param_1;
}

