extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_827DC918();
extern int fn_827DE278();
extern int fn_827E0C38();
extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;


unsigned char * fn_827DE530(unsigned char *param_1,unsigned char *param_2,int param_3)

{
  unsigned char *puStack00000014;
  unsigned char auStack_40 [4];
  unsigned char auStack_3c [60];
  
  *param_1 = *param_2;
  puStack00000014 = param_1;
  fn_827DE278(param_1 + 4,param_3);
  fn_82F68CC0(auStack_3c,param_3 + 4,0x18);
  fn_827DC918(param_1 + 0x44,auStack_40);
  *(unsigned int *)(param_1 + 0x74) = lbl_82002AE0;
  fn_827E0C38(param_1,8);
  return param_1;
}

