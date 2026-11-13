extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_822B33B0();
extern int fn_823C9098();
extern int fn_823CAF28();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_823C8770(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  char cVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int auStack_70 [2];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  fn_823CAF28(param_1,auStack_30,auStack_40,&fStack_68,auStack_70);
  fn_823C9098((double)fStack_68,(double)fStack_64,(double)fStack_60);
  cVar3 = fn_822B33B0((double)ltcg_pool_0_0f,
                       *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x240) + 0x1c) + 4));
  if (cVar3 != '\0') {
    puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0x1a0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  *(unsigned int *)(param_1 + 0x228) = auStack_70[0];
  *(unsigned int *)(param_1 + 0x214) = uStack_58;
  *(unsigned int *)(param_1 + 0x218) = uStack_54;
  *(unsigned int *)(param_1 + 0x21c) = uStack_50;
  return;
}

