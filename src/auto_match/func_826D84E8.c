extern int fn_826D63C8();


void fn_826D84E8(int param_1,unsigned char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if (param_2 != '\0') {
    iVar2 = *(int *)(iVar1 + 0x20);
    if (*(int *)(iVar2 + 0x74) <= 1) {
      *(unsigned char *)(iVar2 + 0x7c) = 1;
    }
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (*(int *)(iVar1 + 0x74) <= 1) {
    fn_826D63C8(*(unsigned int *)(iVar1 + 0x84));
  }
  fn_826D63C8(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x80));
  return;
}

