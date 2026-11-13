extern int fn_822315A0();
extern int fn_822B1A68();
extern int fn_823E9A88();
extern int fn_8265C9E0();
extern unsigned int lbl_821AE598;


void fn_823D5970(int *param_1)

{
  int iVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  
  iVar1 = param_1[0x20];
  lVar2 = (**(int (***)())(*param_1 + 8))();
  fn_822B1A68(*(unsigned int *)(iVar1 + 0x7c),lVar2 + 0xf0);
  lVar2 = (**(int (***)())(*param_1 + 0x4c))(param_1);
  puVar3 = (unsigned int *)fn_8265C9E0(0x14);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821AE598;
    puVar3[2] = 1;
    if (puVar3 + 3 != (unsigned int *)0x0) {
      fn_823E9A88(puVar3 + 3,lVar2 + 0x30,iVar1);
    }
  }
  iVar1 = param_1[0x23];
  param_1[0x23] = (int)puVar3;
  param_1[0x22] = (int)(puVar3 + 3);
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

