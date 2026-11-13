extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82549960();
extern int fn_825A2210();
extern int fn_8265C9E0();
extern unsigned int lbl_821CA460;


unsigned __int64 fn_8257FC80(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  puVar6 = param_1 + 1;
  lVar5 = 4;
  puVar7 = puVar6;
  do {
    if ((int *)*puVar7 != (int *)0x0) {
      (**(int (***)())(*(int *)*puVar7 + 8))();
      puVar1 = (unsigned int *)*puVar7;
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,1);
      }
      *puVar7 = 0;
    }
    lVar5 = lVar5 + -1;
    puVar7 = puVar7 + 0xc;
  } while (lVar5 != 0);
  if ((int *)*puVar6 != (int *)0x0) {
    (**(int (***)())(*(int *)*puVar6 + 8))();
    puVar1 = (unsigned int *)*puVar6;
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
  }
  uVar3 = fn_8265C9E0(0x200);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82549960(uVar3,param_2,0,0,0,0);
  }
  *puVar6 = uVar4;
  param_1[0xc] = param_3;
  param_1[9] = 0;
  uVar2 = *param_1;
  param_1[2] = lbl_821CA460;
  (**(int (***)())(**(int **)(uVar4 + 0x1b0) + 0x18))(*(int **)(uVar4 + 0x1b0),auStack_50);
  (**(int (***)())(**(int **)(*puVar6 + 0x1b0) + 0x1c))(*(int **)(*puVar6 + 0x1b0),auStack_60);
  fn_825A2210((unsigned __int64)uVar2 + 0xc0,auStack_50,auStack_60);
  return 0;
}

