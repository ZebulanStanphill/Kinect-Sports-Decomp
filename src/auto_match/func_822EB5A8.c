typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822BD338();
extern int fn_822C1928();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822EB910();
extern int fn_822EC5A0();
extern unsigned int lbl_831CD138;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822EB5A8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  char cVar5;
  int iVar4;
  unsigned char bVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char in_vr12 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [64];
  
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    *(unsigned int *)(param_1 + 0x24) = lbl_831CD138;
    fn_82230360(param_1 + 0x28,0xffffffff82196582,0);
    iVar3 = fn_822C1928((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20)
                              + 4,0xffffffff821adee8,0,0xb);
    bVar6 = (iVar3 == -1) << 1;
    if (iVar3 == -1) {
      fn_822EB910(param_1);
    }
    cVar5 = fn_822BD338(param_1 + 0x28,0xffffffff82196582);
    if (cVar5 == '\0') {
      *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x27c) = 1;
    }
    else {
      *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x27c) = 0;
      iVar4 = fn_822EC5A0(auStack_70,param_1);
      iVar3 = *(int *)(param_1 + 0xc);
      puVar1 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      loadVectorLeftIndexed128(0xffffffff82192950,0x60);
      vectorRotateLeftImmediateMaskInsert128
                (*(unsigned char (*) [16])(in_r0 + iVar3 + 0x290 & 0xfffffff0),in_vr12,1,0);
      if (!(bool)(bVar6 >> 1 & 1)) {
        puVar2 = (unsigned int *)(in_r0 + iVar3 + 0x290 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        *(unsigned int *)(iVar3 + 0x2a4) = 0;
        *(unsigned int *)(iVar3 + 0x2a8) = 0;
      }
    }
    *(unsigned int *)(param_1 + 0x44) = 0;
    fn_82230110(auStack_60,0xffffffff821aded8);
    fn_822E5340(*(unsigned int *)(param_1 + 0xc),auStack_60);
    fn_82230300(auStack_60,1,0);
    fn_82230110(auStack_40,0xffffffff821adec4);
    fn_822E53F8(*(unsigned int *)(param_1 + 0xc),auStack_40);
    fn_82230300(auStack_40,1,0);
  }
  return;
}

