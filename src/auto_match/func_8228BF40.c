extern unsigned int *auStack_22e;
extern unsigned int *auStack_310;
extern int fn_82266230();
extern int fn_82267628();
extern int fn_82517978();
extern int memset();
extern unsigned int lbl_820E975C;
extern unsigned int uStack_230;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_32c;
extern unsigned int uStack_330;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228BF40(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  int iVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_330;

  unsigned char auStack_310 [208];
  unsigned int uStack_240;
  unsigned int uStack_23c;
  unsigned short uStack_230;
  unsigned char auStack_22e [558];
  
  stack_pair_330.first = 0;
  fn_82266230(param_1,(double)*(float *)(param_2 + 0x18),auStack_310,0xffffffff821a9704,0,0,
                  param_2 + 0x10,&stack_pair_330.first);
  uStack_240 = *param_3;
  uStack_23c = 0;
  fn_82267628(*(unsigned int *)(param_2 + 0x80),auStack_310);
  for (puVar1 = *(unsigned int **)**(int **)(param_2 + 0x80);
      puVar1 != (unsigned int *)**(int **)(param_2 + 0x80); puVar1 = (unsigned int *)*puVar1) {
    iVar2 = puVar1[2];
    if (*(int *)(iVar2 + 0x40) == 0) goto LAB_8228bfec;
  }
  iVar2 = 0;
LAB_8228bfec:
  stack_pair_330.first = 0;
  stack_pair_330.second = 0;
  fn_82517978(&stack_pair_330.first,*(unsigned int *)(iVar2 + 0x524),*(unsigned int *)(iVar2 + 0x528),0);
  uStack_230 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  memset(auStack_22e,0,0x1fe);
}

