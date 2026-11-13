extern unsigned int *auStack_20;
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F76E68();
extern unsigned char *lbl_832635C0;


unsigned int * fn_82F738A0(unsigned int *param_1,unsigned int *param_2)

{
  int uVar1;
  unsigned char auStack_20 [16];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  fn_82F73680(param_1,"{for ");
  uVar1 = fn_82F76E68(auStack_20);
  fn_82F73228(param_1,uVar1);
  fn_82F735D8(param_1,0x7d);
  if (*lbl_832635C0 == '@') {
    lbl_832635C0 = lbl_832635C0 + 1;
  }
  return param_1;
}

