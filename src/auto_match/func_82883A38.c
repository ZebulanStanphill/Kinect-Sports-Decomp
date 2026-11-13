extern int fn_82882E60();
extern int fn_8289F160();
extern unsigned int iStack_1c;
extern unsigned int lbl_83212A04;
extern unsigned int uStack_20;


void fn_82883A38(unsigned int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uStack_20;
  int iStack_1c;
  
  uStack_20 = *param_1;
  fn_8289F160(&iStack_1c,0xffffffff83212a00,&uStack_20);
  if (iStack_1c == lbl_83212A04) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iStack_1c + 0x10);
  }
  uVar1 = fn_82882E60(param_1,*(unsigned int *)(iVar2 + 0xa4));
  param_1[1] = uVar1;
  return;
}

