#define true 1
extern int fn_8250C280();
extern unsigned int iStack_6c;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_8250C540(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  float fVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  float *pfVar4;
  unsigned int uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  unsigned int uStack_70;
  int iStack_6c;
  float *pfStack_68;
  float *pfStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  dVar8 = (double)ltcg_pool_0_0f;
  uVar5 = 0;
  do {
    uStack_70 = uVar5;
    fn_8250C280(param_3,param_4,param_5,&uStack_70);
    if (param_8 == 0) {
      uVar3 = (unsigned __int64)uStack_58;
      uVar2 = 0;
      if (uVar3 != 0) {
        pfVar4 = pfStack_68;
        do {
          dVar7 = dVar8;
          if (uVar2 < uStack_60) {
            dVar7 = (double)(float)((double)*(float *)((int)pfVar4 + (iStack_6c - (int)pfStack_68))
                                   * param_1);
          }
          dVar6 = dVar8;
          if (uVar2 < uStack_5c) {
            dVar6 = (double)(float)(param_2 * (double)*pfVar4);
          }
          *(float *)(((int)pfStack_64 - (int)pfStack_68) + (int)pfVar4) = (float)(dVar6 + dVar7);
          uVar2 = uVar2 + 1;
          pfVar4 = pfVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    else {
      uVar3 = (unsigned __int64)uStack_58;
      uVar2 = 0;
      if (uVar3 != 0) {
        pfVar4 = pfStack_64;
        do {
          if (uVar2 < uStack_60) {
            fVar1 = *(float *)(((int)pfStack_68 - (int)pfStack_64) + (iStack_6c - (int)pfStack_68) +
                              (int)pfVar4);
LAB_8250c5ec:
            *pfVar4 = fVar1;
          }
          else {
            if (uVar2 < uStack_5c) {
              fVar1 = *(float *)(((int)pfStack_68 - (int)pfStack_64) + (int)pfVar4);
              goto LAB_8250c5ec;
            }
            *pfVar4 = (float)dVar8;
          }
          uVar2 = uVar2 + 1;
          pfVar4 = pfVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return;
    }
  } while( true );
}

