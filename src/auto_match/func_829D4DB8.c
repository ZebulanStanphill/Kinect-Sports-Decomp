extern unsigned int lbl_832179FC;


unsigned int fn_829D4DB8(int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  
  if (*param_1 == 2) {
    if (-1 < param_1[2]) {
      iVar1 = lbl_832179FC + 0x8f274;
    }
    else {
      iVar1 = lbl_832179FC + 0x8f108;
    }
    return *(unsigned int *)(iVar1 + 4);
  }
  if (-1 < param_1[2]) {
    puVar2 = (unsigned int *)(lbl_832179FC + 0x8f274);
  }
  else {
    puVar2 = (unsigned int *)(lbl_832179FC + 0x8f108);
  }
  return *puVar2;
}

