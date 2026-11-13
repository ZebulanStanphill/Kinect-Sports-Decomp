extern int fn_82522D98();
extern int fn_82577628();
extern int fn_8265C9E0();
extern unsigned int lbl_821C8F70;
extern unsigned int lbl_821CACEC;


void fn_82575C78(double param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned char param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  
  iVar3 = fn_82577628(param_4,param_7,param_4,param_5,in_stack_00000054,in_stack_0000005c);
  *(char *)(iVar3 + 0x1a4) = (char)param_5;
  *(unsigned char *)(iVar3 + 0x1a5) = param_6;
  *(unsigned char *)(iVar3 + 0x1a6) = 0;
  *(int *)(iVar3 + 0x1bc) = param_2;
  *(unsigned int *)(iVar3 + 0x1b4) = 0;
  if (*(int *)(param_2 + 0xa0) == 0) {
    puVar4 = (unsigned int *)fn_8265C9E0(0xc);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4[1] = param_2;
      puVar4[2] = 0;
      *puVar4 = &lbl_821C8F70;
    }
    *(unsigned int **)(param_2 + 0xa0) = puVar4;
  }
  *(unsigned int *)(iVar3 + 0x1ac) = *(unsigned int *)(param_2 + 0xa0);
  iVar1 = **(int **)(*(int *)(param_2 + 0xa0) + 4);
  puVar4 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar4 != (unsigned int *)0x0) {
    puVar4[1] = iVar3;
    *puVar4 = &lbl_821CACEC;
    uVar2 = *param_3;
    puVar4[2] = (float)param_1;
    puVar4[3] = uVar2;
    puVar4[5] = iVar1 + 0x7fc;
    puVar4[4] = 0xfffffffe;
    puVar4[6] = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

