typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_824D2AE8();
extern int fn_82F51468();
extern int fn_82F53418();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824E1C78(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int iVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned char auStack_28 [4];
  int *piStack_24;
  
  uVar2 = fn_82F51468(auStack_28,*(unsigned int *)(param_1 + 0x20));
  fn_824D2AE8(&uStack_30,uVar2);
  if (ZEXT48(piStack_24) != 0) {
    lVar5 = ZEXT48(piStack_24) + 8;
    do {
      puVar6 = (unsigned int *)lVar5;
      lVar4 = (unsigned __int64)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,lVar5);
        *puVar6 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(int (***)())(*piStack_24 + 4))();
    }
  }
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x30,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  **(int **)(param_1 + 0xfc) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x3c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0xc) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x40,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x10) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x44,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x14) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x48,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x18) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x4c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x1c) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x34,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 4) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x38,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 8) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x50,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x20) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x54,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x24) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x58,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x28) = iVar7;
  iVar3 = fn_82F53418(uStack_30,(unsigned __int64)*(unsigned int *)(param_1 + 0xfc) + 0x5c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0xfc) + 0x2c) = iVar7;
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

