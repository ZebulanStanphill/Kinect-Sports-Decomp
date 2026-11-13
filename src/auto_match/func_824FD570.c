extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8225F160();
extern int fn_8234E808();
extern int fn_824FDBD8();
extern int fn_82592430();
extern int fn_82F4FEB8();
extern int fn_82F510F0();
extern int fn_82F51AC0();
extern int fn_82F51D60();
extern int fn_82F51E28();
extern int fn_82F520B0();
extern unsigned int lbl_82193B00;
extern unsigned int ltcg_pool_0_0f;


void fn_824FD570(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned __int64 uVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  unsigned char auStack_30 [4];
  unsigned int auStack_2c [11];
  
  uVar2 = fn_824FDBD8(*(unsigned int *)(param_1 + 0xb64));
  if ((int)uVar2 != *(int *)(param_1 + 0xb68)) {
    fn_82F510F0(*(unsigned int *)(param_1 + 0xb60),uVar2);
    *(int *)(param_1 + 0xb68) = (int)uVar2;
  }
  iVar3 = fn_82F51D60(*(unsigned int *)(param_1 + 0xb60));
  if (((iVar3 == 0) || (cVar4 = fn_82F51E28(*(unsigned int *)(param_1 + 0xb60)), cVar4 == '\0'))
     && (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x14))(), iVar3 != 0)) {
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x6c))
                      (*(int **)(param_1 + 0x8c0),auStack_2c,auStack_30);
    if (iVar3 == 0) {
      auStack_2c[0] = fn_82F4FEB8();
      auStack_30[0] = 1;
    }
    fn_82F520B0(*(unsigned int *)(param_1 + 0xb60),auStack_2c[0],auStack_30[0]);
  }
  fn_82F51AC0((double)*(float *)(param_1 + 0xb3c),*(unsigned int *)(param_1 + 0xb60));
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0xb60) + 4))();
  if ((iVar3 == 0) ||
     ((((*(int *)(param_1 + 0xb98) == 0 && (*(int *)(param_1 + 0xb64) != 0)) &&
       (iVar3 = fn_8225F160(),
       (((~(unsigned __int64)*(unsigned int *)(iVar3 + 0x44) & 0xffffffff) >> 0x1f) +
        (unsigned __int64)((unsigned __int64)*(unsigned int *)(iVar3 + 0x44) < 2) & 1) == 0)) ||
      ((*(int *)(param_1 + 0xb88) != 0 &&
       (*(float *)(*(int *)(param_1 + 0xb88) + 0x74) <= lbl_82193B00)))))) {
    fVar1 = ltcg_pool_0_0f;
    iVar3 = *(int *)(param_1 + 0xb84);
    pfVar5 = (float *)(iVar3 + 0x18);
    if (iVar3 + 0x18 != iVar3 + 0x60) {
      do {
        pfVar5[2] = (pfVar5[1] - *pfVar5) * fVar1 + *pfVar5;
        pfVar5 = pfVar5 + 3;
      } while (pfVar5 != (float *)(iVar3 + 0x60));
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb84);
    for (pfVar5 = (float *)(iVar3 + 0x18); pfVar5 != (float *)(iVar3 + 0x60); pfVar5 = pfVar5 + 3) {
      pfVar5[2] = (pfVar5[1] - *pfVar5) + *pfVar5;
    }
  }
  fn_8234E808();
  fn_82592430(param_1,param_2);
  return;
}

