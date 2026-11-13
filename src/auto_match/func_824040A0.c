extern unsigned int *auStack_40;
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_823F2F20();
extern unsigned int stack0x00000000;


void fn_824040A0(int *param_1)

{
  int iVar1;
  unsigned char auStack_40 [64];
  
  iVar1 = (**(int (***)())(*param_1 + 0x4c))();
  fn_82329730(iVar1 + 0x30,&stack0x00000000 + -0x40);
  fn_82359C18(&stack0x00000000 + -0x40);
  fn_823F2F20(iVar1 + 0x30,&stack0x00000000 + -0x40);
  fn_82359C18(&stack0x00000000 + -0x40);
  if ((unsigned char *)(iVar1 + 0xf8) != &stack0x00000000 + -0x40) {
    fn_82359C18((unsigned char *)(iVar1 + 0xf8));
    *(unsigned int *)(iVar1 + 0x108) = 0;
  }
  fn_82359C18(&stack0x00000000 + -0x40);
  if ((unsigned char *)(iVar1 + 0xe0) != &stack0x00000000 + -0x40) {
    fn_82359C18((unsigned char *)(iVar1 + 0xe0));
    *(unsigned int *)(iVar1 + 0xf0) = 0;
  }
  fn_82359C18(&stack0x00000000 + -0x40);
  return;
}

