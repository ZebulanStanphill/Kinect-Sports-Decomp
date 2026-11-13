extern unsigned int *auStack_38;
extern unsigned int *auStack_50;
extern int fn_8265CA20();
extern int fn_82886720();
extern int fn_8288C2E0();
extern int fn_828B22F0();
extern int fn_828BDB28();
extern int fn_828CEEB0();
extern unsigned int iStack_44;
extern unsigned int stack0x00000000;


void fn_828BE070(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned char auStack_50 [8];
  unsigned int *puStack_48;
  int iStack_44;
  unsigned int auStack_38;
  
  fn_8288C2E0(&stack0x00000000 + -0x48,&stack0x00000000 + -0x50);
  puVar1 = (unsigned int *)
           fn_828CEEB0(&stack0x00000000 + -0x38,(unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 0xc,
                             param_1,param_2);
  if (((unsigned int *)(&stack0x00000000 + -0x48) != puVar1) &&
     (fn_828B22F0(&stack0x00000000 + -0x48), puVar1[1] != 0)) {
    fn_828BDB28(&stack0x00000000 + -0x48,*puStack_48,puVar1,*(unsigned int *)*puVar1);
  }
  fn_828B22F0(&stack0x00000000 + -0x38);
  fn_8265CA20(auStack_38);
  if (iStack_44 == 0) {
    fn_82886720(param_1,param_2);
  }
  else {
    for (puVar1 = (unsigned int *)*puStack_48; puVar1 != puStack_48; puVar1 = (unsigned int *)*puVar1) {
      fn_82886720(puVar1[2],param_2);
    }
  }
  fn_828B22F0(&stack0x00000000 + -0x48);
  fn_8265CA20(puStack_48);
  return;
}

