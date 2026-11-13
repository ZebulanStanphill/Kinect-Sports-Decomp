extern int fn_82FF5140();
extern int fn_8300F330();
extern int fn_8300F330();
extern int fn_8300F2C0();
extern int fn_83019E38();
extern int fn_8302BB48();
extern unsigned int iStack0000001c;
extern unsigned int lbl_83264304;
extern unsigned int stack0x0000001c;


void fn_8300FCF0(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iStack0000001c;

  iStack0000001c = param_2;
  fn_82FF5140(lbl_83264304,*(unsigned int *)(param_2 + 0x28));
  (**(int (***)())(**(int **)(param_2 + 8) + 4))();
  uVar1 = fn_8302BB48(*(unsigned int *)(param_2 + 8));
  *(unsigned int *)(param_2 + 0xc) = *(int *)(param_1 + 0x90) + (uVar1 >> 10);
  *(unsigned int *)(param_2 + 0x10) = uVar1 - (uVar1 & 0xfffffc00);
  if (uVar1 >> 10 == 0) {
    fn_8300F330(param_1,param_2);
  }
  else {
    iVar2 = fn_83019E38(param_1 + 0x50,*(unsigned int *)(param_2 + 0xc),&stack0x0000001c);
    if (iVar2 == 1) {
      fn_8300F2C0();
    }
    else {
      fn_8300F330(param_1,param_2);
    }
  }
  return;
}
