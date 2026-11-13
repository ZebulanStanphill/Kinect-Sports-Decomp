typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822EFAF8();
extern int fn_82397F88();
extern unsigned int lbl_831CD0DC;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822EF930(int param_1)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  unsigned char bVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char in_vr12 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [32];
  
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x108) = lbl_831CD0DC;
    fn_82230110(auStack_50,0xffffffff821aded8);
    fn_822E5340(*(unsigned int *)(param_1 + 0xc),auStack_50);
    fn_82230300(auStack_50,1,0);
    fn_82230110(auStack_30,0xffffffff821adec4);
    fn_822E53F8(*(unsigned int *)(param_1 + 0xc),auStack_30);
    fn_82230300(auStack_30,1,0);
  }
  bVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0;
  bVar6 = bVar1 << 1;
  if ((bVar1) || (iVar4 = fn_82397F88(*(unsigned int *)(param_1 + 0x10)), iVar4 != 0)) {
    iVar5 = fn_822EFAF8(auStack_60,param_1);
    iVar4 = *(int *)(param_1 + 0xc);
    puVar2 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    loadVectorLeftIndexed128(0xffffffff82192950,0x60);
    vectorRotateLeftImmediateMaskInsert128
              (*(unsigned char (*) [16])(in_r0 + iVar4 + 0x290 & 0xfffffff0),in_vr12,1,0);
    if (!(bool)(bVar6 >> 1 & 1)) {
      puVar3 = (unsigned int *)(in_r0 + iVar4 + 0x290 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(unsigned int *)(iVar4 + 0x2a4) = 0;
      *(unsigned int *)(iVar4 + 0x2a8) = 0;
    }
  }
  return;
}

