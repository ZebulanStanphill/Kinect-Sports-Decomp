extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267D9C0();
extern int fn_826F4C00();
extern int fn_826F4EC0();


__int64 fn_826D8DA0(int param_1,int param_2,char param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  fn_826F4EC0(param_2);
  lVar4 = 1;
  puVar1 = (unsigned int *)fn_826F4C00(param_2);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *(unsigned int *)(param_1 + 0x78);
    iVar2 = *(int *)(param_2 + 0x314);
    if (iVar2 == 0) {
      iVar2 = param_2 + 0x28;
    }
    puVar1[1] = ((*(int *)(iVar2 + 0x34) - *(int *)(iVar2 + 0x30)) - *(int *)(param_2 + 0x26c)) +
                *(int *)(iVar2 + 0x2c);
  }
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x84) + 8;
  fn_8267C8D8(lVar5);
  if (puVar1 == (unsigned int *)0x0) {
    uVar3 = 4;
    lVar4 = 0;
  }
  else {
    sync(1);
    if (*(int *)(param_1 + 0x88) == 0) {
      sync(1);
      *(unsigned int **)(param_1 + 0x88) = puVar1;
    }
    else {
      sync(1);
      *(unsigned int **)(*(int *)(param_1 + 0x8c) + 0x20) = puVar1;
    }
    *(unsigned int **)(param_1 + 0x8c) = puVar1;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    if (param_3 == '\0') goto LAB_826d8e78;
    uVar3 = 2;
  }
  *(unsigned int *)(param_1 + 0x74) = uVar3;
LAB_826d8e78:
  if ((param_3 != '\0') || (lVar4 == 0)) {
    fn_8267CB10((unsigned __int64)*(unsigned int *)(param_1 + 0x84) + 0x1c);
  }
  fn_8267D9C0(lVar5);
  return lVar4;
}

