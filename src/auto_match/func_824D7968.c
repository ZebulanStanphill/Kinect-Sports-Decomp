typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_824D2AE8();
extern int fn_82F51468();
extern int fn_82F53380();
extern int fn_82F53418();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824D7968(int param_1,__int64 param_2)

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
  unsigned int uStack_40;
  int iStack_3c;
  unsigned char auStack_38 [4];
  int *piStack_34;
  
  uVar2 = fn_82F51468(auStack_38,*(unsigned int *)(param_1 + 0x20));
  fn_824D2AE8(&uStack_40,uVar2);
  if (ZEXT48(piStack_34) != 0) {
    lVar5 = ZEXT48(piStack_34) + 8;
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
      (**(int (***)())(*piStack_34 + 4))();
    }
  }
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x34,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x100) = iVar7;
  iVar3 = fn_82F53380(uStack_40,param_2 + 0x34,0,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x104) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x30,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0xf8) = iVar7;
  iVar3 = fn_82F53380(uStack_40,param_2 + 0x30,0,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0xfc) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x38,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x108) = iVar7;
  iVar3 = fn_82F53380(uStack_40,param_2 + 0x38,0,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x10c) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x3c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x110) = iVar7;
  iVar3 = fn_82F53380(uStack_40,param_2 + 0x3c,0,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x114) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x40,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x118) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x44,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x11c) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x48,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x120) = iVar7;
  iVar3 = fn_82F53418(uStack_40,param_2 + 0x4c,1);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = iVar3;
  }
  *(int *)(param_1 + 0x124) = iVar7;
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

