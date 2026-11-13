#define NAN(x) ((x) != (x))
extern unsigned int *auStack_20;
extern int fn_822AF200();
extern int fn_82F68B64();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82409EF0(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  unsigned int auStack_20 [2];
  
  fVar6 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x58) == 2) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      return;
    }
    fVar1 = (float)((double)*(float *)(param_2 + 0x3c) - param_1);
    fVar4 = -fVar1;
    fVar5 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar5 = fVar1;
    }
    *(float *)(param_2 + 0x3c) = fVar5;
    if (fVar5 != fVar6) {
      return;
    }
    fn_82F68B64(param_2,3);
    return;
  }
  if (*(int *)(param_2 + 0x58) != 4) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0xd4) + 0x18) + 0xc) != 0)
  {
    return;
  }
  iVar3 = *(int *)(param_2 + 8);
  auStack_20[0] = 0;
  fn_822AF200(iVar3 + 0x80,auStack_20);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x7c) + 8);
  if (piVar2 == (int *)0x0) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = (**(int (***)())(*piVar2 + 8))(piVar2,3);
  }
  if (cVar7 != '\0') {
    *(unsigned int *)(iVar3 + 0x58) = 3;
  }
  return;
}

