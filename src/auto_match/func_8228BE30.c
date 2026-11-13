#define true 1
extern int fn_822315A0();
extern int fn_82267130();
extern int fn_82359C18();
extern int fn_82517978();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_8228BE30(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int uStack_30;
  int iStack_2c;
  
  iVar6 = 0;
  do {
    puVar1 = (unsigned int *)**(int **)(param_1 + 0x80);
    for (puVar2 = (unsigned int *)*puVar1; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
      iVar4 = puVar2[2];
      if (*(int *)(iVar4 + 0x40) == iVar6) goto LAB_8228be80;
    }
    iVar4 = 0;
LAB_8228be80:
    if (iVar4 != 0) {
      puVar1 = (unsigned int *)**(int **)(param_1 + 0x80);
      for (puVar2 = (unsigned int *)*puVar1; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
        iVar4 = puVar2[2];
        if (*(int *)(iVar4 + 0x40) == iVar6) goto LAB_8228beb4;
      }
      iVar4 = 0;
LAB_8228beb4:
      uStack_30 = 0;
      iStack_2c = 0;
      fn_82517978(&uStack_30,*(unsigned int *)(iVar4 + 0x524),*(unsigned int *)(iVar4 + 0x528),0);
      uVar3 = fn_8266F6B8();
      fn_826728E8(uStack_30,0xffffffff821a96f8,uVar3);
      if (iStack_2c != 0) {
        fn_822315A0();
      }
    }
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      if (*(int *)(param_1 + 0x80) != 0) {
        fn_82267130();
      }
      param_1 = param_1 + 0x78;
      lVar5 = 2;
      do {
        param_1 = param_1 + -0x18;
        fn_82359C18(param_1);
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
      return;
    }
  } while( true );
}

