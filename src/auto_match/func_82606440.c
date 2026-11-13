typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern int fn_82CE5040();
extern int fn_82F63108();
extern V16 vectorAddFloatingPoint();


void fn_82606440(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char bVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_40 [64];
  
  if ((*(unsigned short *)(param_2 + 0x46) & 4) == 0) {
    puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    vectorAddFloatingPoint(in_vs45,in_vs32);
    puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    fn_82CE5040(param_2 + 0x4d0,param_3,auStack_40);
    *(unsigned short *)(param_2 + 0x46) = *(unsigned short *)(param_2 + 0x46) | 4;
  }
  if ((*(unsigned short *)(param_2 + 0x46) & 0x80) == 0) {
    fn_82CE5040(param_2 + 0x2a0,param_3,param_2 + 0x250);
    bVar3 = *(unsigned char *)(param_2 + 0x45) ^ 2;
    *(unsigned char *)(param_2 + 0x45) = bVar3;
    if ((bVar3 & 7) != 0) {
      if (*(int *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(param_1 + 0x80) + 4))
                (*(int **)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x10),param_4,param_2 + 0x2a0,
                 param_2 + 0x278,param_2 + 0x27c,param_2 + 0x280,param_2 + 0x290);
    }
    *(unsigned short *)(param_2 + 0x46) = *(unsigned short *)(param_2 + 0x46) | 0x80;
  }
  return;
}

