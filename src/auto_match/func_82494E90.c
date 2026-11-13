#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_60;
extern int fn_824916D0();
extern int fn_82491E88();
extern int fn_82496080();
extern int fn_825279F8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_78;
extern unsigned __int64 storeVectorElementWordIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82494E90(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uStack_78;
  unsigned char auStack_60 [32];
  unsigned char uStack_40;
  unsigned char uStack_3f;
  unsigned char uStack_3e;
  unsigned int uStack_3c;
  
  uVar5 = ZEXT48(&stack0x00000000);
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    iVar6 = fn_825279F8(iVar1);
    if ((iVar6 == 0) || (iVar6 == 3)) {
      *(unsigned int *)(param_1 + 0x98) = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x90) + 0x1b8);
      if (iVar6 != 0) {
        *(unsigned char *)(iVar6 + 3) = 1;
      }
      *(unsigned int *)(param_1 + 0x98) = 1;
    }
    iVar6 = *(int *)(param_1 + 0x90);
    uVar2 = *(unsigned int *)(iVar1 + 0x1ac);
    puVar3 = (unsigned int *)(iVar6 + 0xc0U & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar9 = puVar3[2];
    uVar11 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar9;
    puVar4[3] = uVar11;
    uVar7 = *(unsigned int *)(iVar6 + 0x1d0);
    fn_824916D0(uVar5 - 0x50,uVar2);
    uVar2 = storeVectorElementWordIndexed(in_vs32,0,uVar5 - 0x78);
    *(unsigned int *)(uVar5 - 0x78) = uVar2;
    uVar2 = storeVectorElementWordIndexed(in_vs45,uVar5 - 0x78,4);
    uVar9 = storeVectorElementWordIndexed(in_vs44,uVar5 - 0x78,8);
    puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    uVar11 = *puVar3;
    uVar8 = puVar3[1];
    uVar10 = puVar3[2];
    uVar12 = puVar3[3];
    *(unsigned int *)(param_1 + 0x14) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x18) = uStack_78;
    *(unsigned int *)(param_1 + 0x1c) = uVar2;
    *(unsigned int *)(param_1 + 0x20) = uVar9;
    puVar3 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar8;
    puVar3[2] = uVar10;
    puVar3[3] = uVar12;
    uStack_3c = uVar7;
    fn_82496080(param_1 + 0x40,uVar5 - 0x50);
    *(unsigned char *)(param_1 + 0x50) = uStack_40;
    *(unsigned char *)(param_1 + 0x51) = uStack_3f;
    *(unsigned char *)(param_1 + 0x52) = uStack_3e;
    *(unsigned int *)(param_1 + 0x54) = uStack_3c;
    fn_82491E88(uVar5 - 0x50);
  }
  return;
}

