void fn_824C1C58(char *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
                  unsigned int *param_5,unsigned int *param_6,unsigned int param_7,unsigned int param_8)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  unsigned int *puVar6;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int *in_stack_00000064;
  unsigned int *in_stack_0000006c;
  unsigned int *in_stack_00000074;
  
  if (0xf < (unsigned int)param_4[5]) {
    param_4 = (unsigned int *)*param_4;
  }
  pcVar4 = param_1 + 0x200;
  iVar3 = (int)param_4 - (int)pcVar4;
  do {
    if (param_1 + 0x300 <= pcVar4) break;
    cVar1 = pcVar4[iVar3];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == param_1 + 0x300) {
    pcVar4[-1] = '\0';
  }
  if (0xf < (unsigned int)param_2[5]) {
    param_2 = (unsigned int *)*param_2;
  }
  pcVar5 = param_1 + 0x100;
  pcVar4 = param_1;
  do {
    if (pcVar5 <= pcVar4) break;
    cVar1 = pcVar4[(int)param_2 - (int)param_1];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == pcVar5) {
    pcVar4[-1] = '\0';
  }
  if (0xf < (unsigned int)param_3[5]) {
    param_3 = (unsigned int *)*param_3;
  }
  iVar3 = (int)param_3 - (int)pcVar5;
  do {
    if (param_1 + 0x200 <= pcVar5) break;
    cVar1 = pcVar5[iVar3];
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 == param_1 + 0x200) {
    pcVar5[-1] = '\0';
  }
  if (0xf < (unsigned int)param_5[5]) {
    param_5 = (unsigned int *)*param_5;
  }
  pcVar4 = param_1 + 0x300;
  iVar3 = (int)param_5 - (int)pcVar4;
  do {
    if (param_1 + 0x400 <= pcVar4) break;
    cVar1 = pcVar4[iVar3];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == param_1 + 0x400) {
    pcVar4[-1] = '\0';
  }
  if (in_stack_00000074 != in_stack_00000074 + 3) {
    puVar6 = in_stack_00000074;
    do {
      *(unsigned int *)(param_1 + (0x400 - (int)in_stack_00000074) + (int)puVar6) = *puVar6;
      puVar6 = puVar6 + 1;
    } while (puVar6 != in_stack_00000074 + 3);
  }
  uVar2 = *param_6;
  *(unsigned int *)(param_1 + 0x410) = param_7;
  *(unsigned int *)(param_1 + 0x414) = param_8;
  *(unsigned int *)(param_1 + 0x418) = in_stack_00000054;
  *(unsigned int *)(param_1 + 0x41c) = in_stack_0000005c;
  *(unsigned int *)(param_1 + 0x40c) = uVar2;
  *(unsigned int *)(param_1 + 0x420) = *in_stack_00000064;
  *(unsigned int *)(param_1 + 0x424) = *in_stack_0000006c;
  return;
}

