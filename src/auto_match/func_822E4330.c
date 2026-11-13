extern unsigned int *auStack_70;
extern float fRam831d14ec;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822E64E0();
extern int fn_822E68B8();
extern int fn_822E9128();
extern int fn_822F9060();
extern int fn_822F9750();
extern int fn_8252AFE0();
extern int fn_8265C9E0();
extern unsigned int iStack_64;
extern unsigned int lbl_821ADF7C;
extern unsigned int lbl_821AE598;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_68;


void fn_822E4330(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
                  unsigned int *param_5,unsigned __int64 param_6)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  char cVar5;
  unsigned int *puVar4;
  unsigned int uVar6;
  int iVar7;
  unsigned int auStack_70 [2];
  struct { unsigned int first; int second; } stack_pair_68;

  
  *(unsigned int *)(param_1 + 0x1bc) = param_2;
  iVar1 = param_3[1];
  uVar2 = *param_3;
  iVar7 = 0;
  uVar6 = 0;
  if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
    iVar7 = iVar1;
    uVar6 = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x1a4);
  *(int *)(param_1 + 0x1a4) = iVar7;
  *(unsigned int *)(param_1 + 0x1a0) = uVar6;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  *(unsigned int *)(param_1 + 0x1c4) = *param_4;
  *(unsigned int *)(param_1 + 0x1c8) = *param_5;
  auStack_70[0] = *(unsigned int *)(*(int *)(param_1 + 0x1bc) + 0x844);
  puVar4 = (unsigned int *)fn_8265C9E0(0x24);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821AE598;
    if (puVar4 + 3 != (unsigned int *)0x0) {
      iVar1 = *(int *)(param_1 + 0x1a4);
      uVar2 = *(unsigned int *)(param_1 + 0x1a0);
      stack_pair_68.first = 0;
      stack_pair_68.second = 0;
      if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
        stack_pair_68.first = uVar2;
        stack_pair_68.second = iVar1;
      }
      fn_822F9060(puVar4 + 3,&stack_pair_68.first,auStack_70);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1ac);
  *(unsigned int **)(param_1 + 0x1ac) = puVar4;
  *(unsigned int **)(param_1 + 0x1a8) = puVar4 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  uVar2 = *(unsigned int *)(param_1 + 0x1bc);
  puVar4 = (unsigned int *)fn_8265C9E0(0x3c);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821ADF7C;
    if (puVar4 + 3 != (unsigned int *)0x0) {
      iVar1 = *(int *)(param_1 + 0x1ac);
      uVar6 = *(unsigned int *)(param_1 + 0x1a8);
      stack_pair_68.first = 0;
      stack_pair_68.second = 0;
      if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
        stack_pair_68.first = uVar6;
        stack_pair_68.second = iVar1;
      }
      fn_822F9750(puVar4 + 3,uVar2,param_1,0xffffffff831cd218,&stack_pair_68.first);
    }
  }
  iVar1 = *(int *)(param_1 + 0x270);
  *(unsigned int **)(param_1 + 0x270) = puVar4;
  *(unsigned int **)(param_1 + 0x26c) = puVar4 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x2c) * 4 + *(int *)(*(int *)(param_1 + 0x1bc) + 0x20));
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) == 0) {
    puVar4 = (unsigned int *)fn_822E64E0((double)fRam831d14ec,param_1);
    *(unsigned int **)(param_1 + 0x210) = puVar4;
    fn_8252AFE0((double)ltcg_pool_0_0f,*puVar4);
  }
  fn_822E68B8(param_1);
  fn_822E9128(*(unsigned int *)(param_1 + 0x114),param_6);
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

