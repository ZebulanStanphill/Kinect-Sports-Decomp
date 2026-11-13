extern unsigned int lbl_83265988;


void fn_82357CD0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned char bVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
  if ((*(unsigned char *)(iVar2 + 8) & 8) == 0) {
    bVar3 = *(unsigned char *)(iVar2 + 8) | 8;
  }
  else {
    bVar3 = *(unsigned char *)(iVar2 + 8) & 0xf7;
  }
  *(unsigned char *)(iVar2 + 8) = bVar3;
  *(unsigned int *)(iVar1 + 0x3dc) = 1;
  return;
}

