extern int fn_822315A0();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_82517E78();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_82197950;
extern unsigned int lbl_82197990;
extern unsigned int lbl_83297810;


void fn_82246F48(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  struct { int first; int second; } stack_pair_20;

  
  uVar1 = param_1[4];
  uVar2 = (unsigned __int64)lbl_83297810;
  *param_1 = &lbl_82197950;
  param_1[0x1a] = &lbl_82197990;
  if (uVar2 == 0) {
    uVar2 = fn_82511928();
  }
  fn_82513A80(&stack_pair_20.first,uVar2,uVar1);
  if (stack_pair_20.first != 0) {
    *(unsigned char *)(stack_pair_20.first + 0x50) = 1;
    *(unsigned int *)(stack_pair_20.first + 0x38) = 0;
    *(unsigned char *)(stack_pair_20.first + 0x3c) = 1;
    *(unsigned int *)(stack_pair_20.first + 0x40) = 0x21;
  }
  if (stack_pair_20.second != 0) {
    fn_822315A0();
  }
  fn_82517E78(param_1);
  return;
}

