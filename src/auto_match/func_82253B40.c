extern int fn_822315A0();
extern int fn_8223A4D8();
extern int fn_8223AAC0();
extern unsigned int lbl_82196C58;
extern unsigned int lbl_82197F44;


unsigned int * fn_82253B40(unsigned int *param_1,int param_2)

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
  *param_1 = &lbl_82197F44;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  iVar1 = *(int *)(param_2 + 0x6c);
  uVar2 = *(unsigned int *)(param_2 + 0x68);
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[0x1b] != 0) {
      fn_822315A0();
    }
    param_1[0x1b] = iVar1;
    param_1[0x1a] = uVar2;
  }
  *param_1 = &lbl_82197F44;
  return param_1;
}

