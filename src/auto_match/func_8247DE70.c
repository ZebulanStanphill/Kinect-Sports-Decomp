extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_824C04E0();
extern int fn_82517978();
extern int fn_8265CA20();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_8247DE70(int param_1)

{
  int iVar1;
  int iVar2;
  int iStack_40;
  int iStack_3c;
  struct { unsigned int first; unsigned int second; } stack_pair_38;

  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  iStack_40 = 0;
  iStack_3c = 0;
  fn_82517978(&iStack_40,*(unsigned int *)(iVar2 + 0x50),*(unsigned int *)(iVar2 + 0x54),0);
  iVar2 = iStack_40;
  *(unsigned int *)(param_1 + 0x9c) = *(unsigned int *)(iStack_40 + 0x78);
  *(unsigned int *)(param_1 + 0xa0) = (unsigned int)*(unsigned char *)(*(int *)(iStack_40 + 0x70) + 0x5a);
  if (*(int *)(param_1 + 0xa4) != 0) {
    fn_8265CA20();
    *(unsigned int *)(param_1 + 0xa4) = 0;
  }
  iVar1 = iStack_3c;
  stack_pair_38.first = 0;
  stack_pair_38.second = 0;
  *(unsigned __int64 *)(param_1 + 0xa8) = *(unsigned __int64 *)(iVar2 + 8);
  fn_82517978(&stack_pair_38.first,iVar2,iStack_3c,0);
  iVar2 = *(int *)(param_1 + 0xb4);
  *(unsigned int *)(param_1 + 0xb4) = stack_pair_38.second;
  *(unsigned int *)(param_1 + 0xb0) = stack_pair_38.first;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_824C04E0(param_1 + 0x48,1);
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  return;
}

