extern unsigned int iStack_14;


void fn_82A965C8(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  int in_r0;
  int *piVar5;
  int *piVar6;
  __int64 lVar7;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  int iStack_14;
  int aiStack_10 [4];
  
  piVar5 = &iStack_14;
  piVar6 = (int *)(param_2 + 0xc);
  puVar2 = (unsigned int *)((int)aiStack_10 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  lVar7 = 4;
  do {
    puVar3 = (unsigned int *)(piVar6 + 8);
    iVar1 = *piVar6;
    piVar5 = piVar5 + 1;
    piVar4 = piVar6 + 4;
    piVar6 = piVar6 + 1;
    *(unsigned char *)(iVar1 + param_1) =
         (unsigned char)(*piVar5 << (*puVar3 & 0x3f)) & (unsigned char)*piVar4 | *(unsigned char *)(iVar1 + param_1);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

