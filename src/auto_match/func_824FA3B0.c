extern int fn_82549960();
extern int fn_8265C9E0();


unsigned __int64 fn_824FA3B0(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  
  uVar1 = fn_8265C9E0(0x200);
  if ((uVar1 & 0xffffffff) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82549960(uVar1,param_2 + 0xa4,0,0,0,0);
  }
  *(int **)(param_1 + 0x200) = piVar2;
  uVar3 = (**(int (***)())(*piVar2 + 0x4c))();
  *(unsigned int *)(param_1 + 0x204) = uVar3;
  puVar4 = (unsigned int *)(param_1 + 0x224);
  *(unsigned int *)(param_1 + 0x210) = *(unsigned int *)(param_2 + 0xd0);
  puVar5 = (unsigned int *)(param_2 + 0xb8);
  lVar6 = 5;
  do {
    puVar4[-4] = puVar5[-4];
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar5;
    *(unsigned int *)(param_1 + 0x20c) = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(unsigned int *)(param_1 + 0x70) = 0;
  return 1;
}

