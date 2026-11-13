extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8234EED8();
extern int fn_824A1C90();
extern int fn_8265C9E0();
extern int fn_827F22D0();
extern int fn_827F2D60();
extern int fn_82F51E28();
extern int fn_82F520B0();
extern unsigned int lbl_8218E8E8;
extern unsigned int ltcg_pool_0_0f;


void fn_8234EDA8(int param_1,int *param_2)

{
  float fVar1;
  __int64 lVar2;
  char cVar6;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  unsigned char auStack_30 [4];
  unsigned int auStack_2c [11];
  
  uVar7 = 0;
  if (param_2 != (int *)0x0) {
    lVar2 = (**(int (***)())(*param_2 + 4))(param_2);
    uVar7 = -(unsigned int)(lVar2 != 0) & (unsigned int)param_2;
  }
  if (uVar7 != *(unsigned int *)(param_1 + 0x2c)) {
    if (uVar7 == 0) {
      fn_8234EED8(param_1);
    }
    else {
      cVar6 = fn_82F51E28(uVar7);
      if ((cVar6 == '\0') &&
         (iVar5 = (**(int (***)())(**(int **)(param_1 + 0x28) + 0x6c))
                            (*(int **)(param_1 + 0x28),auStack_2c,auStack_30), iVar5 != 0)) {
        fn_82F520B0(uVar7,auStack_2c[0],auStack_30[0]);
      }
      uVar3 = fn_8265C9E0(0xe0);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_824A1C90(uVar3,*(unsigned int *)(param_1 + 0x28),uVar7);
      }
      cVar6 = fn_827F22D0(*(unsigned int *)(param_1 + 4));
      fVar1 = lbl_8218E8E8;
      if (cVar6 != '\0') {
        fVar1 = ltcg_pool_0_0f;
      }
      fn_827F2D60((double)fVar1,*(unsigned int *)(param_1 + 4),uVar4);
      *(int *)(param_1 + 0x30) = (int)uVar4;
    }
    *(unsigned int *)(param_1 + 0x2c) = uVar7;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x30) + 0xd4) = *(unsigned int *)(param_1 + 0x34);
    *(unsigned int *)(*(int *)(param_1 + 0x30) + 0xd8) = *(unsigned int *)(param_1 + 0x38);
  }
  return;
}

