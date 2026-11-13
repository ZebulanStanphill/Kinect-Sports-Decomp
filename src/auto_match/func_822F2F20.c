typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern int fn_822E5640();
extern int fn_822E5710();
extern int fn_822E57D8();
extern int fn_822F25B0();
extern int fn_822F3018();
extern int fn_82397F30();
extern int fn_82397F88();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822F2F20(int param_1)

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
  unsigned char auStack_20 [1];
  
  fn_822F25B0();
  bVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0;
  bVar6 = bVar1 << 1;
  if ((bVar1) && (iVar4 = fn_82397F30(*(unsigned int *)(param_1 + 0x10)), iVar4 != 0)) {
    iVar5 = fn_822F3018(auStack_20,param_1);
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
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) ||
     (iVar4 = fn_82397F88(*(unsigned int *)(param_1 + 0x10)), iVar4 != 0)) {
    fn_822E5640(*(unsigned int *)(param_1 + 0xc));
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    fn_822E57D8();
  }
  else {
    iVar4 = fn_82397F88(*(unsigned int *)(param_1 + 0x10));
    if (iVar4 != 0) {
      fn_822E5710(*(unsigned int *)(param_1 + 0xc));
    }
  }
  return;
}

