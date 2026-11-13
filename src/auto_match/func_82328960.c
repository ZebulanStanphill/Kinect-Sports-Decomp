extern int fn_82329730();
extern int fn_82359C18();
extern unsigned int uStack_30;


void fn_82328960(int param_1)

{
  int *piVar1;
  int *sub;
  struct Function_82328960 { int words[4]; unsigned tail; } tmp;
  #define aiStack_40 tmp.words
  #define uStack_30 tmp.tail
  
  uStack_30 = 0;
  fn_82329730(param_1 + 0x178,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  sub=(int *)(param_1+0x1b0);
  if (sub != aiStack_40) {
    piVar1 = (int *)sub[4];
    if (piVar1 != (int *)0x0) {
      (*(int (**)())(*piVar1 + 0xc))(piVar1,piVar1 != sub);
      sub[4] = 0;
    }
    sub[4] = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0xd0,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  sub=(int *)(param_1+0x108);
  if (sub != aiStack_40) {
    piVar1 = (int *)sub[4];
    if (piVar1 != (int *)0x0) {
      (*(int (**)())(*piVar1 + 0xc))(piVar1,piVar1 != sub);
      sub[4] = 0;
    }
    sub[4] = 0;
  }
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  fn_82329730(param_1 + 0x30,aiStack_40);
  fn_82359C18(aiStack_40);
  uStack_30 = 0;
  sub=(int *)(param_1+0x68);
  if (sub != aiStack_40) {
    piVar1 = (int *)sub[4];
    if (piVar1 != (int *)0x0) {
      (*(int (**)())(*piVar1 + 0xc))(piVar1,piVar1 != sub);
      sub[4] = 0;
    }
    sub[4] = 0;
  }
  fn_82359C18(aiStack_40);
  return;
}

