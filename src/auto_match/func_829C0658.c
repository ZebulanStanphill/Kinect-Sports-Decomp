extern int fn_829C0080();
extern int fn_829C01A0();
extern int fn_829C01B8();
extern int fn_829C02C0();
extern int fn_829C0330();
extern int fn_829C0650();


void fn_829C0658(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  
  puVar1 = (unsigned int *)(*(int (**)())*(int *)(param_1 + 4))(param_1,1,0x30);
  *(unsigned int **)(param_1 + 0x1c8) = puVar1;
  puVar1[2] = 0;
  *puVar1 = fn_829C01A0;
  iVar3 = *(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x70);
  puVar1[10] = iVar3;
  if (*(int *)(param_1 + 0x13c) == 2) {
    puVar1[1] = fn_829C01B8;
    puVar1[3] = fn_829C0650;
    uVar2 = (*(int (**)())(*(int *)(param_1 + 4) + 4))(param_1,1,puVar1[10]);
    puVar1[8] = uVar2;
  }
  else {
    puVar1[8] = 0;
    puVar1[1] = fn_829C02C0;
    puVar1[3] = fn_829C0330;
  }
  fn_829C0080(param_1);
  return;
}

