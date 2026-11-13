extern int fn_82A1EFC0();


void fn_82266230(double param_1,double param_2,char *param_3,int param_4,unsigned int param_5,
                  unsigned int param_6,unsigned int *param_7,unsigned int *param_8)

{
  char cVar1;
  unsigned int *puVar2;
  char *pcVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  unsigned int *in_stack_00000064;
  unsigned int *in_stack_0000006c;
  int *in_stack_00000074;
  unsigned int in_stack_000000a4;
  
  *(float *)(param_3 + 0x60) = (float)param_1;
  *(float *)(param_3 + 100) = (float)param_2;
  *(unsigned int *)(param_3 + 0x40) = param_5;
  *(unsigned int *)(param_3 + 0x44) = param_6;
  *(unsigned int *)(param_3 + 0xa0) = in_stack_000000a4;
  puVar2 = (unsigned int *)((unsigned int)(param_3 + 0x50) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (unsigned int *)((unsigned int)(param_3 + 0x80) & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  puVar2 = (unsigned int *)((unsigned int)(param_3 + 0x90) & 0xfffffff0);
  *puVar2 = in_register_00010030;
  puVar2[1] = in_register_00010034;
  puVar2[2] = in_register_00010038;
  puVar2[3] = in_vr3;
  *(unsigned int *)(param_3 + 0x48) = *param_7;
  *(unsigned int *)(param_3 + 0x4c) = *param_8;
  pcVar4 = param_3;
  do {
    if (param_3 + 0x40 <= pcVar4) break;
    cVar1 = pcVar4[param_4 - (int)param_3];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == param_3 + 0x40) {
    pcVar4[-1] = '\0';
  }
  if (in_stack_00000064 == (unsigned int *)0x0) {
LAB_822662f0:
    iVar5 = 0;
  }
  else {
    uVar3 = (unsigned __int64)*in_stack_00000064;
    if ((uVar3 == (uVar3 - 1) + (unsigned __int64)(uVar3 == 0)) || (in_stack_0000006c == (unsigned int *)0x0))
    goto LAB_822662f0;
    uVar3 = (unsigned __int64)*in_stack_0000006c;
    iVar5 = 1;
    if (uVar3 == (uVar3 - 1) + (unsigned __int64)(uVar3 == 0)) goto LAB_822662f0;
  }
  *(int *)(param_3 + 0x68) = iVar5;
  if (iVar5 == 0) {
    param_3[0x6c] = '\0';
    param_3[0x6d] = '\0';
    param_3[0x6e] = '\0';
    param_3[0x6f] = '\0';
    param_3[0x70] = '\0';
    param_3[0x71] = '\0';
    param_3[0x72] = '\0';
    param_3[0x73] = '\0';
  }
  else {
    *(unsigned int *)(param_3 + 0x6c) = *in_stack_00000064;
    *(unsigned int *)(param_3 + 0x70) = *in_stack_0000006c;
  }
  if (in_stack_00000074 != (int *)0x0) {
    if (*in_stack_00000074 != 0) {
      *(int *)(param_3 + 0x74) = *in_stack_00000074;
      goto LAB_82266344;
    }
  }
  param_3[0x74] = '\0';
  param_3[0x75] = '\0';
  param_3[0x76] = '\0';
  param_3[0x77] = '\0';
LAB_82266344:
  fn_82A1EFC0(param_3 + 0xa4,0,0x24);
  return;
}

