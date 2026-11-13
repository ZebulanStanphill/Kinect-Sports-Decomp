#define NAN(x) ((x) != (x))
extern int fn_8229D418();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8236B638(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  piVar1 = *(int **)(param_1 + 0x4b0);
  dVar4 = (double)ltcg_pool_0_0f;
  if ((double)(float)piVar1[0x37] <= dVar4) {
    if ((param_3 & 0xffffffff) == 0) {
      param_3 = 0xffffffff820e975c;
    }
    fn_8229D418(*(unsigned int *)(*(int *)(*piVar1 + 0xd4) + 0x14),param_3,param_2);
  }
  dVar3 = (double)((float)piVar1[0x37] - lbl_821916FC);
  fVar2 = (float)piVar1[0x37];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar3 < dVar4) << 2) | (unsigned int)(NAN(dVar3) || NAN(dVar4)) << 2)) < 0.0)
  {
    fVar2 = lbl_821916FC;
  }
  piVar1[0x37] = (int)fVar2;
  return;
}

