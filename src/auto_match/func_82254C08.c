extern int fn_822315A0();
extern int fn_8223A4D8();
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern unsigned int lbl_82196C58;
extern unsigned int lbl_82197FD4;


unsigned int * fn_82254C08(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned int *puVar4;
  
  fn_8223A4D8();
  *param_1 = &lbl_82196C58;
  puVar4 = param_1 + 0xe;
  if (*(int *)(param_2 + 0x48) == 0) {
    param_1[0x12] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x48) != param_2 + 0x38) {
      puVar4 = (unsigned int *)0x0;
    }
    uVar2 = (**(int (***)())**(unsigned int **)(param_2 + 0x48))(*(unsigned int **)(param_2 + 0x48),puVar4);
    param_1[0x12] = uVar2;
  }
  puVar4 = param_1 + 0x14;
  if (*(int *)(param_2 + 0x60) == 0) {
    param_1[0x18] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x60) != param_2 + 0x50) {
      puVar4 = (unsigned int *)0x0;
    }
    uVar2 = (**(int (***)())**(unsigned int **)(param_2 + 0x60))(*(unsigned int **)(param_2 + 0x60),puVar4);
    param_1[0x18] = uVar2;
  }
  *param_1 = &lbl_82197FD4;
  fn_82365BD8(param_1 + 0x1a,param_2 + 0x68);
  fn_82365BD8(param_1 + 0x1c,param_2 + 0x70);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  iVar1 = *(int *)(param_2 + 0x7c);
  uVar2 = *(unsigned int *)(param_2 + 0x78);
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[0x1f] != 0) {
        fn_822315A0();
      }
      param_1[0x1f] = iVar1;
      param_1[0x1e] = uVar2;
    }
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x84);
  uVar2 = *(unsigned int *)(param_2 + 0x80);
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[0x21] != 0) {
        fn_822315A0();
      }
      param_1[0x21] = iVar1;
      param_1[0x20] = uVar2;
    }
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x8c);
  uVar2 = *(unsigned int *)(param_2 + 0x88);
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[0x23] != 0) {
        fn_822315A0();
      }
      param_1[0x23] = iVar1;
      param_1[0x22] = uVar2;
    }
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  iVar1 = *(int *)(param_2 + 0x94);
  uVar2 = *(unsigned int *)(param_2 + 0x90);
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[0x25] != 0) {
        fn_822315A0();
      }
      param_1[0x25] = iVar1;
      param_1[0x24] = uVar2;
    }
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  iVar1 = *(int *)(param_2 + 0x9c);
  uVar2 = *(unsigned int *)(param_2 + 0x98);
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[0x27] != 0) {
      fn_822315A0();
    }
    param_1[0x27] = iVar1;
    param_1[0x26] = uVar2;
  }
  return param_1;
}

