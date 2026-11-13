extern int fn_827FAF20();
extern unsigned int iStack_6c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_827FB1E0(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  float *pfVar4;
  unsigned int uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  unsigned int uStack_70;
  int iStack_6c;
  float *pfStack_68;
  unsigned int *puStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  dVar8 = (double)lbl_821AAD20;
  uVar5 = 0;
  do {
    uStack_70 = uVar5;
    fn_827FAF20(param_3,param_4,param_5,&uStack_70);
    uVar2 = (unsigned __int64)uStack_58;
    if (param_8 == 0) {
      uVar1 = 0;
      if (uVar2 != 0) {
        pfVar4 = pfStack_68;
        do {
          dVar7 = dVar8;
          if (uVar1 < uStack_60) {
            dVar7 = (double)(float)((double)*(float *)((iStack_6c - (int)pfStack_68) + (int)pfVar4)
                                   * param_1);
          }
          dVar6 = dVar8;
          if (uVar1 < uStack_5c) {
            dVar6 = (double)(float)((double)*pfVar4 * param_2);
          }
          *(float *)(((int)puStack_64 - (int)pfStack_68) + (int)pfVar4) = (float)(dVar6 + dVar7);
          uVar1 = uVar1 + 1;
          pfVar4 = pfVar4 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    else if (uVar2 != 0) {
      puVar3 = puStack_64;
      do {
        *puVar3 = *(unsigned int *)((iStack_6c - (int)puStack_64) + (int)puVar3);
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return;
}

