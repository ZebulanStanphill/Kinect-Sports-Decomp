typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_824D3898();
extern int fn_82517978();
extern int fn_82F514D8();
extern int fn_82F54148();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824D3510(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned char auStack_28 [4];
  int *piStack_24;
  unsigned char auStack_20 [4];
  int *piStack_1c;
  unsigned char auStack_18 [4];
  int *piStack_14;
  
  if (param_2 != *(int *)(param_1 + 0xa48)) {
    *(int *)(param_1 + 0xa48) = param_2;
    if (param_2 == 0) {
      puVar2 = (unsigned int *)fn_82F514D8(auStack_18,*(unsigned int *)(param_1 + 0x20));
      uStack_30 = 0;
      iStack_2c = 0;
      fn_82517978(&uStack_30,*puVar2,puVar2[1],0);
      fn_82F54148(uStack_30);
      if (iStack_2c != 0) {
        fn_822315A0();
      }
      if (ZEXT48(piStack_14) == 0) {
        return;
      }
      lVar4 = ZEXT48(piStack_14) + 8;
      do {
        puVar5 = (unsigned int *)lVar4;
        lVar3 = (unsigned __int64)*puVar5 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar3,0,lVar4);
          *puVar5 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      puVar2 = (unsigned int *)fn_82F514D8(auStack_20,*(unsigned int *)(param_1 + 0x20));
      uStack_30 = 0;
      iStack_2c = 0;
      fn_82517978(&uStack_30,*puVar2,puVar2[1],0);
      fn_824D3898(auStack_28,uStack_30);
      if (ZEXT48(piStack_24) != 0) {
        lVar4 = ZEXT48(piStack_24) + 8;
        do {
          puVar5 = (unsigned int *)lVar4;
          lVar3 = (unsigned __int64)*puVar5 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar3,0,lVar4);
            *puVar5 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if ((int)lVar3 == 0) {
          (**(int (***)())(*piStack_24 + 4))();
        }
      }
      if (iStack_2c != 0) {
        fn_822315A0();
      }
      if (ZEXT48(piStack_1c) == 0) {
        return;
      }
      lVar4 = ZEXT48(piStack_1c) + 8;
      do {
        puVar5 = (unsigned int *)lVar4;
        lVar3 = (unsigned __int64)*puVar5 - 1;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(lVar3,0,lVar4);
          *puVar5 = uVar1;
          in_cr0 = 2;
        }
        piStack_14 = piStack_1c;
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    if ((int)lVar3 == 0) {
      (**(int (***)())(*piStack_14 + 4))();
    }
  }
  return;
}

