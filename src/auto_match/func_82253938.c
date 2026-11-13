extern int fn_8223A4D8();
extern int fn_82365BD8();
extern unsigned int lbl_82196C58;
extern unsigned int lbl_82197F04;
extern unsigned int lbl_82197F14;


unsigned int * fn_82253938(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  fn_8223A4D8();
  *param_1 = &lbl_82196C58;
  puVar2 = param_1 + 0xe;
  if (*(int *)(param_2 + 0x48) == 0) {
    param_1[0x12] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x48) != param_2 + 0x38) {
      puVar2 = (unsigned int *)0x0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_2 + 0x48))(*(unsigned int **)(param_2 + 0x48),puVar2);
    param_1[0x12] = uVar1;
  }
  puVar2 = param_1 + 0x14;
  if (*(int *)(param_2 + 0x60) == 0) {
    param_1[0x18] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x60) != param_2 + 0x50) {
      puVar2 = (unsigned int *)0x0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_2 + 0x60))(*(unsigned int **)(param_2 + 0x60),puVar2);
    param_1[0x18] = uVar1;
  }
  *param_1 = &lbl_82197F14;
  fn_82365BD8(param_1 + 0x1a,param_2 + 0x68);
  fn_82365BD8(param_1 + 0x1c,param_2 + 0x70);
  *param_1 = &lbl_82197F04;
  return param_1;
}

