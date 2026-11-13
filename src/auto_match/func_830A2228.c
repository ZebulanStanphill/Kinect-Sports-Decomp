typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_830A6E50();
extern int fn_830A6FF8();
extern int fn_830A7130();
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_830A2228(int param_1,int param_2,__int64 param_3,__int64 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  char *pcVar5;
  float *pfVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs45 [16];
  
  uVar4 = ZEXT48(&stack0x00000000);
  pcVar5 = (char *)((int)*(short *)(param_1 + 4) + *(int *)(param_2 + 0x4c));
  pfVar6 = (float *)((int)*(short *)(param_1 + 6) + *(int *)(param_2 + 0x4c));
  if ((*(char *)(param_1 + 2) == '\0') || (iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0)) {
    iVar1 = *param_5;
    *(unsigned char *)(iVar1 + 3) = 3;
    *(unsigned char *)(iVar1 + 4) = 1;
    *param_5 = iVar1 + 0x10;
  }
  else {
    if (*pcVar5 == '\0') {
      *pfVar6 = *(float *)(param_1 + 8);
    }
    iVar2 = *param_5;
    fn_830A6FF8((unsigned __int64)*(unsigned char *)(param_1 + 3) * 0x10 + param_4,param_3 + 0x30,param_2,iVar2,
                  uVar4 - 0x90);
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    uVar3 = storeVectorElementWordIndexed(in_vs42,0,uVar4 - 0xa0);
    *(unsigned int *)(uVar4 - 0xa0) = uVar3;
    fn_830A6E50(iVar1,uVar4 - 0x90,uVar4 - 0x70);
    fn_830A7130(uVar4 - 0x70,param_2,iVar2,param_5);
    if ((*pfVar6 != *(float *)(param_1 + 8)) || (*pcVar5 == '\0')) {
      *pfVar6 = *(float *)(param_1 + 8);
      *pcVar5 = '\x01';
    }
  }
  return;
}

