extern int fn_82522D98();
extern unsigned int lbl_82002C2C;


void fn_8266F5A0(double param_1,int param_2,unsigned int param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  puVar3 = (unsigned int *)fn_82522D98(0x30);
  *puVar3 = param_3;
  puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(puVar3 + 4) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar3[8] = (float)(param_1 + (double)lbl_82002C2C);
  puVar3[9] = *(unsigned int *)(param_2 + 0xec);
  *(unsigned int **)(param_2 + 0xec) = puVar3;
  return;
}

