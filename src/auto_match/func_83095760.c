extern unsigned int lbl_831BCF5C;


void fn_83095760(int *param_1,int param_2,int param_3,unsigned short *param_4,int param_5)

{
  unsigned short *puVar1;
  unsigned short *puVar2;
  int iVar3;
  unsigned short *puVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  unsigned short uVar7;
  
  iVar3 = param_3 + -1;
  puVar1 = (unsigned short *)(((param_3 - param_5) + -1) * 4 + *param_1);
  puVar2 = param_4 + param_5 * 2 + -2;
  uVar6 = *puVar1;
  uVar7 = *puVar2;
  puVar4 = (unsigned short *)(param_3 * 4 + *param_1);
  do {
    while (uVar5 = (unsigned short)iVar3, uVar7 < uVar6) {
      iVar3 = iVar3 + -1;
      *(unsigned int *)(puVar4 + -2) = *(unsigned int *)puVar1;
      *(unsigned short *)
       (*(int *)(&lbl_831BCF5C + (*puVar1 & 1) * 4) + (unsigned int)puVar1[1] * 0x10 + param_2) = uVar5;
      puVar1 = puVar1 + -2;
      puVar4 = puVar4 + -2;
      uVar6 = *puVar1;
    }
    iVar3 = iVar3 + -1;
    puVar4[-2] = *puVar2;
    puVar4[-1] = puVar2[1];
    *(unsigned short *)(*(int *)(&lbl_831BCF5C + (*puVar2 & 1) * 4) + (unsigned int)puVar2[1] * 0x10 + param_2)
         = uVar5;
    puVar2 = puVar2 + -2;
    uVar7 = *puVar2;
    puVar4 = puVar4 + -2;
  } while (param_4 <= puVar2);
  return;
}

