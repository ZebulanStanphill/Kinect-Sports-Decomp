typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_8268CC00();


float * fn_827180C8(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float *pfVar6;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [24];
  
  fn_8268CC00(auStack_30);
  pfVar6 = (float *)(**(int (***)())(*param_2 + 0x140))(auStack_40,param_2,auStack_30,3);
  fVar1 = *pfVar6;
  fVar2 = pfVar6[2];
  fVar3 = pfVar6[1];
  fVar4 = pfVar6[3];
  if ((fVar2 != fVar1) || (bVar5 = true, fVar4 != fVar3)) {
    bVar5 = false;
  }
  if (bVar5) {
    pfVar6 = (float *)(**(int (***)())(*param_2 + 0x140))(auStack_40,param_2,auStack_30,2);
    fVar1 = *pfVar6;
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[1];
    fVar4 = pfVar6[3];
    if ((fVar2 != fVar1) || (bVar5 = true, fVar4 != fVar3)) {
      bVar5 = false;
    }
    if (bVar5) {
      pfVar6 = (float *)(**(int (***)())(*param_2 + 0x140))(auStack_40,param_2,auStack_30,1);
      fVar1 = *pfVar6;
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      fVar4 = pfVar6[3];
      if ((fVar2 != fVar1) || (bVar5 = true, fVar4 != fVar3)) {
        bVar5 = false;
      }
      if (bVar5) {
        pfVar6 = (float *)(**(int (***)())(*param_2 + 0x140))(auStack_40,param_2,auStack_30,0);
        fVar1 = pfVar6[2];
        fVar2 = pfVar6[1];
        fVar3 = pfVar6[3];
        if ((fVar1 != *pfVar6) || (bVar5 = true, fVar3 != fVar2)) {
          bVar5 = false;
        }
        if (bVar5) {
          (**(int (***)())(*param_2 + 0x28))(param_1,param_2,auStack_30);
          return param_1;
        }
        *param_1 = *pfVar6;
        param_1[1] = fVar2;
        param_1[2] = fVar1;
        param_1[3] = fVar3;
        return param_1;
      }
    }
  }
  *param_1 = fVar1;
  param_1[1] = fVar3;
  param_1[2] = fVar2;
  param_1[3] = fVar4;
  return param_1;
}

