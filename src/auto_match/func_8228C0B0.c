#define true 1
extern int fn_822315A0();
extern int fn_82267750();
extern int fn_82517978();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_8228C0B0(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned int uStack_30;
  int iStack_2c;
  
  iVar5 = 0;
  do {
    puVar1 = (unsigned int *)**(int **)(param_1 + 0x80);
    for (puVar2 = (unsigned int *)*puVar1; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
      iVar4 = puVar2[2];
      if (*(int *)(iVar4 + 0x40) == iVar5) goto LAB_8228c100;
    }
    iVar4 = 0;
LAB_8228c100:
    if (iVar4 != 0) {
      puVar1 = (unsigned int *)**(int **)(param_1 + 0x80);
      for (puVar2 = (unsigned int *)*puVar1; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
        iVar4 = puVar2[2];
        if (*(int *)(iVar4 + 0x40) == iVar5) goto LAB_8228c134;
      }
      iVar4 = 0;
LAB_8228c134:
      uStack_30 = 0;
      iStack_2c = 0;
      fn_82517978(&uStack_30,*(unsigned int *)(iVar4 + 0x524),*(unsigned int *)(iVar4 + 0x528),0);
      uVar3 = fn_8266F6B8();
      fn_826728E8(uStack_30,0xffffffff821a96f8,uVar3);
      if (iStack_2c != 0) {
        fn_822315A0();
      }
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      fn_82267750(*(unsigned int *)(param_1 + 0x80),0);
      fn_82267750(*(unsigned int *)(param_1 + 0x80),2);
      fn_82267750(*(unsigned int *)(param_1 + 0x80),1);
      return;
    }
  } while( true );
}

