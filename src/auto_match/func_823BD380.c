extern int fn_8265C9E0();
extern int fn_828E5F40();
extern unsigned int lbl_82196C88;
extern unsigned int lbl_821B5F24;


unsigned int *
fn_823BD380(unsigned int *param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, unsigned int param_6, unsigned int param_7, unsigned int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064)

{
  unsigned int *puVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;



  
  puVar4 = (unsigned int *)0x0;
  param_1[1] = 0;
  *param_1 = &lbl_821B5F24;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82196C88;
    puVar3[2] = param_2;
    puVar3[3] = param_3;
    puVar3[4] = param_2;
    puVar3[5] = param_3;
    puVar3[6] = param_2;
    puVar3[7] = param_3;
  }
  puVar1 = (unsigned int *)param_1[2];
  if (puVar3 != puVar1) {
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    param_1[2] = puVar3;
  }
  puVar3 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82196C88;
    puVar3[2] = param_4;
    puVar3[3] = param_5;
    puVar3[4] = param_6;
    puVar3[5] = param_7;
    puVar3[6] = param_8;
    puVar3[7] = in_stack_00000054;
  }
  puVar1 = (unsigned int *)param_1[3];
  if (puVar3 != puVar1) {
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    param_1[3] = puVar3;
  }
  uVar2 = fn_8265C9E0(0x10);
  if ((uVar2 & 0xffffffff) != 0) {
    puVar4 = (unsigned int *)fn_828E5F40(uVar2,in_stack_0000005c,in_stack_00000064);
  }
  puVar3 = (unsigned int *)param_1[4];
  if (puVar4 != puVar3) {
    if (puVar3 != (unsigned int *)0x0) {
      (**(int (***)())*puVar3)(puVar3,1);
    }
    param_1[4] = puVar4;
  }
  return param_1;
}

