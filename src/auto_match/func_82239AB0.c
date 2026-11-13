extern int fn_82239CB0();
extern int fn_82239D08();
extern int fn_8223A060();
extern int fn_8223A4D8();
extern int fn_82365BD8();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196C50;
extern unsigned int lbl_82196C58;
extern unsigned int lbl_82196C68;
extern unsigned int lbl_82197F34;


unsigned int * fn_82239AB0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  fn_82239CB0();
  *param_1 = &lbl_82196C50;
  param_1[10] = &lbl_821968A4;
  fn_82239D08(param_1 + 0xc,param_2 + 0x30);
  puVar4 = param_1 + 0xd2;
  fn_8223A4D8(puVar4,param_2 + 0x348);
  param_1[0xd2] = &lbl_82196C58;
  puVar2 = param_1 + 0xe0;
  if (*(int *)(param_2 + 0x390) == 0) {
    param_1[0xe4] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x390) != param_2 + 0x380) {
      puVar2 = (unsigned int *)0x0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_2 + 0x390))
                      (*(unsigned int **)(param_2 + 0x390),puVar2);
    param_1[0xe4] = uVar1;
  }
  puVar2 = param_1 + 0xe6;
  if (*(int *)(param_2 + 0x3a8) == 0) {
    param_1[0xea] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x3a8) != param_2 + 0x398) {
      puVar2 = (unsigned int *)0x0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_2 + 0x3a8))
                      (*(unsigned int **)(param_2 + 0x3a8),puVar2);
    param_1[0xea] = uVar1;
  }
  *puVar4 = &lbl_82197F34;
  fn_82365BD8(param_1 + 0xec,param_2 + 0x3b0);
  fn_82365BD8(param_1 + 0xee,param_2 + 0x3b8);
  puVar3 = param_1 + 0xf0;
  *puVar4 = &lbl_82197F34;
  fn_8223A4D8(puVar3,param_2 + 0x3c0);
  puVar2 = param_1 + 0xfe;
  param_1[0xf0] = &lbl_82196C58;
  if (*(int *)(param_2 + 0x408) == 0) {
    param_1[0x102] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x408) != param_2 + 0x3f8) {
      puVar2 = (unsigned int *)0x0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_2 + 0x408))
                      (*(unsigned int **)(param_2 + 0x408),puVar2);
    param_1[0x102] = uVar1;
  }
  puVar2 = param_1 + 0x104;
  if (*(int *)(param_2 + 0x420) == 0) {
    param_1[0x108] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x420) != param_2 + 0x410) {
      puVar2 = (unsigned int *)0x0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_2 + 0x420))
                      (*(unsigned int **)(param_2 + 0x420),puVar2);
    param_1[0x108] = uVar1;
  }
  *puVar3 = &lbl_82196C68;
  fn_82365BD8(param_1 + 0x10a,param_2 + 0x428);
  *puVar3 = &lbl_82196C68;
  fn_8223A060(param_1 + 0x10c,param_2 + 0x430);
  return param_1;
}

