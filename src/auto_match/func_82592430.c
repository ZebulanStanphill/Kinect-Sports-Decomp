extern unsigned int *auStack_50;
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_8252B8B0();
extern int fn_8252B998();
extern int fn_8252D370();
extern int fn_8252D6E0();
extern int fn_8253FAD0();
extern int fn_8255D288();
extern int fn_825602B8();
extern int fn_82588B00();
extern int fn_825A2810();
extern int fn_825A2920();
extern int fn_825AACA8();
extern int fn_8288B760();
extern int fn_828904D8();


void fn_82592430(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  char cVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  float afStack_60 [4];
  unsigned char auStack_50 [80];
  
  iVar1 = fn_825279F8();
  if ((iVar1 != 0) && (iVar1 != 3)) {
    fn_82528948(param_1);
  }
  fn_8255D288(param_1,auStack_50,afStack_60);
  uVar5 = 0;
  uVar3 = 1;
  lVar7 = 0;
  lVar4 = -0x7cd7f460;
  puVar6 = (unsigned int *)(param_1 + 0x1e0);
  do {
    iVar1 = fn_825602B8(lVar7);
    if (iVar1 != 0) {
      iVar1 = fn_82588B00((double)afStack_60[0],lVar4,auStack_50);
      if ((iVar1 != 0) || ((*puVar6 & 2) != 0)) {
        uVar5 = uVar3 | uVar5;
      }
    }
    lVar4 = lVar4 + 0xa8;
    lVar7 = lVar7 + 1;
    puVar6 = puVar6 + 1;
    uVar3 = (uVar3 & 0x7fffffff) << 1;
  } while ((int)lVar4 < -0x7cd7f310);
  *(int *)(param_1 + 0x1d8) = (int)uVar5;
  fn_8252D370(param_1);
  fn_8252D6E0(param_1,param_2);
  fn_825A2810(param_1,param_2);
  fn_825A2920(param_1,param_2);
  fn_8252B998(param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    fn_825AACA8(iVar1);
    cVar2 = fn_8288B760(iVar1);
    if ((((cVar2 != '\0') && (*(char *)(iVar1 + 0x5e) == '\0')) && (*(int *)(param_1 + 0x4c) != 0))
       && (*(int *)(param_1 + 0x20) != 0)) {
      cVar2 = fn_8288B760();
      if ((cVar2 != '\0') &&
         (cVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x3c))(), cVar2 != '\0')) {
        (**(int (***)())(**(int **)(param_1 + 0x20) + 0x54))();
        fn_828904D8(*(unsigned int *)(param_1 + 0x20));
      }
    }
  }
  fn_8253FAD0(param_1);
  fn_8252B8B0(param_1);
  *(float *)(param_1 + 0xb44) = *(float *)(param_1 + 0xb3c) + *(float *)(param_1 + 0xb44);
  *(int *)(param_1 + 0xb48) = *(int *)(param_1 + 0xb48) + 1;
  return;
}

