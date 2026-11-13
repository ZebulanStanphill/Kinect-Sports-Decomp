extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_82FFE0F0();
extern unsigned int uStack_34;


int fn_83015740(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned int in_register_000103f0;
  unsigned int uStack_34;
  unsigned int auStack_30 [4];
  unsigned char auStack_20 [16];
  
  iVar2 = fn_82FFE0F0(param_2 + 4,param_3);
  puVar3 = (unsigned int *)(param_1 + -4);
  lVar5 = 6;
  if (iVar2 == 0) {
    puVar4 = &uStack_34;
    altv300_21(in_vs32,in_vs39);
    puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f0;
    puVar1[2] = in_register_000103f0;
    puVar1[3] = in_register_000103f0;
    puVar1 = (unsigned int *)((int)auStack_30 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f0;
    puVar1[2] = in_register_000103f0;
    puVar1[3] = in_register_000103f0;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar4 = (unsigned int *)(iVar2 + 4);
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}

