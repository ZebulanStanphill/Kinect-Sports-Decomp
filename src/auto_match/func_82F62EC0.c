extern unsigned int *auStack_20;
extern int fn_82F62680();
extern int fn_82F626D0();
extern unsigned int lbl_83263324;


void fn_82F62EC0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_20 [16];
  
  fn_82F62680(auStack_20,2);
  *(unsigned int *)(param_1 + 8) = 1;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 8) * 4 + -0x7cd9cd04);
    if ((iVar1 == 0) || (iVar1 == param_1)) break;
    uVar2 = *(int *)(param_1 + 8) + 1;
    *(unsigned int *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  *(int *)(*(int *)(param_1 + 8) * 4 + -0x7cd9cd04) = param_1;
  (&lbl_83263324)[*(int *)(param_1 + 8)] = (&lbl_83263324)[*(int *)(param_1 + 8)] + '\x01';
  fn_82F626D0(auStack_20);
  return;
}

