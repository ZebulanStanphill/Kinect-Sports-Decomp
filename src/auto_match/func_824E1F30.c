typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_824D2AE8();
extern int fn_82F51468();
extern int fn_82F52C20();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824E1F30(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned char auStack_28 [4];
  int *piStack_24;
  
  uVar3 = fn_82F51468(auStack_28,*(unsigned int *)(param_1 + 0x20));
  fn_824D2AE8(&uStack_30,uVar3);
  if (ZEXT48(piStack_24) != 0) {
    lVar5 = ZEXT48(piStack_24) + 8;
    do {
      puVar6 = (unsigned int *)lVar5;
      lVar4 = (unsigned __int64)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar4,0,lVar5);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(int (***)())(*piStack_24 + 4))();
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 4);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 4) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 8);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 8) = 0;
  }
  if (**(int **)(param_1 + 0xfc) != 0) {
    fn_82F52C20(uStack_30,**(int **)(param_1 + 0xfc),1);
    **(unsigned int **)(param_1 + 0xfc) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0xc);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0xc) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x10);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x10) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x14);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x14) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x18);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x18) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x1c);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x1c) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x20);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x20) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x24);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x24) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x28);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x28) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xfc) + 0x2c);
  if (iVar1 != 0) {
    fn_82F52C20(uStack_30,iVar1,1);
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x2c) = 0;
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

