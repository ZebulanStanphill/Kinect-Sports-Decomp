typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82564720();
extern unsigned int lbl_821CA460;
extern V16 loadVectorLeftIndexed128();


void fn_8234D950(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  if ((*(int *)(param_2 + 0x40) == 0) ||
     ((*(int *)(param_2 + 0xd0) == 0 &&
      ((*(int *)(param_2 + 200) != 0 || (*(int *)(param_2 + 0xcc) != 0)))))) {
    *(unsigned int *)(param_2 + 0x44) = 0;
    *(unsigned int *)(param_2 + 0xd4) = lbl_821CA460;
  }
  else {
    *(unsigned int *)(param_2 + 0x10) = 1;
    *(unsigned int *)(param_2 + 0x44) = 1;
    puVar1 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  *(unsigned int *)(param_2 + 0x40) = 0;
  *(unsigned int *)(param_2 + 0xcc) = 0;
  loadVectorLeftIndexed128((unsigned __int64)*(unsigned int *)(param_2 + 0x48),0x8bc);
  fn_82564720(param_1,(double)*(float *)(param_2 + 0xd4));
  return;
}

