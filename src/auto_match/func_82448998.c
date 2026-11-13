extern int fn_82448A88();
extern unsigned int ltcg_pool_0_0f;


void fn_82448998(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  float fVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  
  uVar6 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x48) + 0x1c);
  fVar2 = ltcg_pool_0_0f;
  if (uVar4 != 0) {
    do {
      dVar7 = (double)(*(float *)(*(int *)(param_2 + 0x48) + 0x18) * (float)(uVar6 & 0xffffffff) +
                      *(float *)(*(int *)(param_2 + 0x48) + 0x14));
      if (param_1 < dVar7) {
        fVar2 = (float)(dVar7 - param_1);
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < uVar4);
  }
  uVar5 = uVar4 - 1;
  fVar1 = ltcg_pool_0_0f;
  if (-1 < (__int64)uVar5) {
    do {
      dVar7 = (double)(*(float *)(*(int *)(param_2 + 0x48) + 0x18) * (float)(__int64)(int)uVar5 +
                      *(float *)(*(int *)(param_2 + 0x48) + 0x14));
      if (dVar7 < param_1) {
        fVar1 = (float)(param_1 - dVar7);
        break;
      }
      uVar5 = uVar5 - 1;
    } while (-1 < (__int64)uVar5);
  }
  uVar3 = uVar5;
  if ((((uVar6 & 0xffffffff) < uVar4) && (uVar3 = uVar6, -1 < (int)uVar5)) && (fVar1 < fVar2)) {
    uVar3 = uVar5;
  }
  fn_82448A88(param_2,param_4,uVar3 & 0xff);
  return;
}

