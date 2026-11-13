extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822AF138();
extern int fn_822C03F0();
extern int fn_822C64E0();
extern int fn_822C8C08();
extern int fn_8232AFC0();
extern int fn_8232ECE0();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE598;
extern unsigned int lbl_821B0838;


void fn_822BE4C0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  char cVar5;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  
  param_1[0x1fb] = (int)param_2;
  iVar1 = param_1[0x45];
  puVar2 = (unsigned int *)fn_8265C9E0(0x60);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821A8D8C;
    if (puVar2 + 4 != (unsigned int *)0x0) {
      fn_8232ECE0(puVar2 + 4,param_1,iVar1,param_3);
    }
  }
  puStack_50 = (unsigned int *)0x0;
  puStack_4c = (unsigned int *)0x0;
  if ((puVar2 != (unsigned int *)0x0) && (cVar5 = fn_8223AAC0(puVar2), cVar5 != '\0')) {
    puStack_50 = puVar2 + 4;
    puStack_4c = puVar2;
  }
  fn_822C64E0(param_1[0x44],&puStack_50);
  iVar1 = param_1[0x45];
  puVar3 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_821AD588;
    if (puVar3 + 3 != (unsigned int *)0x0) {
      puVar3[5] = iVar1;
      puVar3[6] = param_1;
      puVar3[4] = 2;
      puVar3[3] = &lbl_821B0838;
    }
  }
  puStack_50 = (unsigned int *)0x0;
  puStack_4c = (unsigned int *)0x0;
  if ((puVar3 != (unsigned int *)0x0) && (cVar5 = fn_8223AAC0(puVar3), cVar5 != '\0')) {
    puStack_50 = puVar3 + 3;
    puStack_4c = puVar3;
  }
  fn_822C64E0(param_1[0x44],&puStack_50);
  fn_822AF138(param_1[0x44],2);
  fn_822C8C08(param_1[0x45],0xffffffff821acc3c);
  param_1[0x13f] = 0;
  param_1[0x13e] = 1;
  fn_8232AFC0(param_1 + 0x170,param_2);
  fn_822C03F0(param_1,param_1[0x1fb]);
  puVar4 = (unsigned int *)fn_8265C9E0(0x14);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821AE598;
    if (puVar4 + 3 != (unsigned int *)0x0) {
      puVar4[3] = param_4;
      puVar4[4] = 0;
    }
  }
  iVar1 = param_1[0x16d];
  param_1[0x16d] = (int)puVar4;
  param_1[0x16c] = (int)(puVar4 + 3);
  if (iVar1 != 0) {
    fn_822315A0();
  }
  (**(int (***)())(*param_1 + 4))(param_1);
  if (puVar3 != (unsigned int *)0x0) {
    fn_822315A0(puVar3);
  }
  if (puVar2 != (unsigned int *)0x0) {
    fn_822315A0(puVar2);
  }
  return;
}

