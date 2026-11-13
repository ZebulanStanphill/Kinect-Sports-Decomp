#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_824916D0();
extern int fn_82492768();
extern int fn_82496080();
extern int fn_82498D90();
extern unsigned int stack0x00000000;
extern unsigned int uStack00000024;
extern unsigned int uStack_64;
extern unsigned int uStack_66;
extern unsigned int uStack_67;
extern unsigned int uStack_68;
extern unsigned __int64 storeVectorElementWordIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82498860(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  char cVar7;
  int iVar6;
  int iVar8;
  int iVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uStack00000024;
  unsigned char uStack_68;
  unsigned char uStack_67;
  unsigned char uStack_66;
  unsigned int uStack_64;
  
  uVar5 = ZEXT48(&stack0x00000000);
  iVar6 = *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar8 = 0;
  iVar9 = 0;
  uStack00000024 = param_3;
  if ((iVar6 != 0) && (cVar7 = fn_8223AAC0(iVar6), cVar7 != '\0')) {
    iVar8 = iVar1;
    iVar9 = iVar6;
  }
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 100) + 0x44);
  fn_824916D0(uVar5 - 0x78,(unsigned __int64)*(unsigned int *)(iVar8 + 0x1c) + 0x1a4);
  uVar3 = storeVectorElementWordIndexed(in_vs32,0,uVar5 - 100);
  *(unsigned int *)(uVar5 - 100) = uVar3;
  uVar3 = storeVectorElementWordIndexed(in_vs45,uVar5 - 100,4);
  uVar4 = storeVectorElementWordIndexed(in_vs44,uVar5 - 100,8);
  iVar6 = fn_82498D90(param_1 + 0x30,uVar5 + 0x24);
  *(unsigned int *)(iVar6 + 4) = param_3;
  fn_82496080(iVar6 + 8,uVar5 - 0x78);
  *(unsigned char *)(iVar6 + 0x18) = uStack_68;
  *(unsigned char *)(iVar6 + 0x19) = uStack_67;
  *(unsigned char *)(iVar6 + 0x1a) = uStack_66;
  *(unsigned int *)(iVar6 + 0x1c) = uStack_64;
  *(unsigned int *)(iVar6 + 0x20) = uVar3;
  *(unsigned int *)(iVar6 + 0x28) = uVar2;
  *(unsigned int *)(iVar6 + 0x24) = uVar4;
  fn_82492768(uVar5 - 0x80);
  if (iVar9 != 0) {
    fn_822315A0(iVar9);
  }
  return;
}

