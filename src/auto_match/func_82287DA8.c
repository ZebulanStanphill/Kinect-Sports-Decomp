typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_420;
extern unsigned int *auStack_42c;
extern unsigned int *auStack_430;
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_8225DA70();
extern int fn_8225F160();
extern int fn_82287F00();
extern int fn_8228ABB8();
extern int fn_8234F298();
extern unsigned int lbl_83265988;


void fn_82287DA8(int param_1,unsigned int param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned char auStack_430 [4];
  unsigned char auStack_42c [12];
  unsigned char auStack_420 [1056];
  
  uVar2 = fn_8225C590();
  uVar9 = 0;
  do {
    bVar1 = false;
    lVar3 = fn_8225D9B8(uVar2,uVar9);
    if (lVar3 != 0) {
      uVar5 = 0;
      if (param_2 != 0) {
        puVar8 = (unsigned int *)(param_1 + 0x6ac);
        do {
          if (bVar1) goto LAB_82287e3c;
          if ((unsigned __int64)*puVar8 == (uVar9 & 0xffffffff)) {
            bVar1 = true;
          }
          uVar5 = uVar5 + 1;
          puVar8 = puVar8 + 0x10;
        } while (uVar5 < param_2);
        if (bVar1) goto LAB_82287e3c;
      }
      iVar4 = fn_8225DA70(uVar2,auStack_420,lVar3,0);
      if (iVar4 != 0) {
        iVar4 = param_2 * 0x40 + param_1;
        *(int *)(iVar4 + 0x6ac) = (int)uVar9;
        *(unsigned int *)(iVar4 + 0x6a8) = 0;
        *(unsigned int *)(iVar4 + 0x6b8) = 0;
        *(unsigned int *)(iVar4 + 0x6bc) = 1;
        fn_8225F160();
        if ((lbl_83265988 == 0) ||
           ((*(unsigned char *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
          uVar5 = param_2;
          if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
            uVar5 = -((param_2 < 2) - 1);
          }
          fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar5,auStack_430,auStack_42c);
          puVar7 = auStack_42c;
          puVar6 = auStack_430;
        }
        else {
          puVar7 = (unsigned char *)0x0;
          puVar6 = (unsigned char *)0x0;
        }
        fn_8228ABB8(param_1,param_2,auStack_420,puVar6,puVar7);
        return;
      }
    }
LAB_82287e3c:
    uVar9 = uVar9 + 1;
    if (3 < (uVar9 & 0xffffffff)) {
      fn_82287F00(param_1,param_2);
      return;
    }
  } while( true );
}

