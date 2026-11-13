#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_50;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82142E4C;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_82DE2BC8(float *param_1,float param_2,unsigned __int64 param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs44 [16];
  float fStack_50;
  
  uVar4 = 0;
  iVar7 = 0;
  piVar8 = (int *)((int)param_2 + 0x18);
  do {
    piVar1 = (int *)*piVar8;
    iVar2 = piVar1[3];
    iVar6 = *(int *)(iVar2 + 0x44);
    if (iVar6 == 0) {
      iVar6 = 1;
      pfVar5 = param_1 + 1;
      vectorSubtractFloatingPoint(in_vs32,in_vs44);
      uVar3 = storeVectorElementWordIndexed(in_vs42,0,ZEXT48(&stack0x00000000) - 0x50);
      *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x50) = uVar3;
      if (fStack_50 <= *param_1) {
        if (*param_1 < fStack_50 + lbl_82142E4C) {
          *param_1 = fStack_50 + lbl_82142E4C;
        }
        iVar6 = 2;
      }
      else if (fStack_50 < *pfVar5) {
        *pfVar5 = fStack_50;
      }
      if (*pfVar5 <= *param_1) {
        iVar6 = 4;
      }
      *(int *)(iVar2 + 0x44) = iVar6;
      if (iVar6 != 1) {
        if (iVar6 != 4) goto LAB_82de2cc0;
        uVar4 = 2;
        goto LAB_82de2cf8;
      }
      uVar4 = fn_82DE2BC8(param_1,iVar2,param_3,param_4,param_5);
      if ((int)uVar4 == 2) goto LAB_82de2cf8;
    }
    else {
LAB_82de2cc0:
      if (iVar6 == 2) {
        *(int **)(*piVar1 + 0x30) = piVar1;
        *param_4 = *param_4 + 1;
        *param_5 = (int)piVar1;
      }
    }
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 4;
    if (2 < iVar7) {
LAB_82de2cf8:
      *(unsigned int *)((int)param_2 + 0x40) = lbl_82134508;
      if ((int)param_1[3] < 100) {
        param_1[(int)param_1[3] + 0x378] = param_2;
        param_1[3] = (float)((int)param_1[3] + 1);
      }
      else {
        uVar4 = 2;
      }
      return uVar4;
    }
  } while( true );
}

