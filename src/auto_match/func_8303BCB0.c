typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_82FAB9C0();
extern int fn_83004F10();
extern int fn_83004FC0();
extern int fn_83016C90();
extern int fn_8301A448();
extern int fn_8303BB18();
extern int fn_8303BBF0();
extern unsigned int iStack_38;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642EC;


unsigned __int64 fn_8303BCB0(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  bool bVar6;
  int *piVar7;
  unsigned char auStack_40 [8];
  int iStack_38;
  
  iVar1 = *(int *)(param_2 + 0x34);
  uVar3 = *(unsigned int *)(param_1 + 0x14) >> 8;
  if (uVar3 < 0x80022) {
    if (uVar3 == 0x80021) {
      if (*(unsigned int **)(iVar1 + 4) != (unsigned int *)0x0) {
        for (puVar2 = (unsigned int *)**(unsigned int **)(iVar1 + 4); puVar2 != (unsigned int *)0x0;
            puVar2 = (unsigned int *)*puVar2) {
          piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,puVar2[1]);
          if (piVar4 != (int *)0x0) {
            fn_83004FC0(piVar4,*(unsigned int *)(param_1 + 0x2c),iVar1);
            (**(int (***)())(*piVar4 + 8))(piVar4);
          }
        }
      }
    }
    else if (uVar3 < 0x80012) {
      if (uVar3 < 0x80010) {
        if (((0x7000f < uVar3) && (uVar3 < 0x70012)) &&
           (piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,
                                              *(unsigned int *)(param_1 + 0x10)), piVar4 != (int *)0x0
           )) {
          if (*(char *)(param_1 + 0x28) == '\0') {
            uVar5 = 0;
          }
          else {
            uVar5 = *(unsigned int *)(param_1 + 0x2c);
          }
          fn_83004F10(piVar4,uVar5,*(unsigned int *)(param_1 + 0x2c),iVar1,0);
          (**(int (***)())(*piVar4 + 8))(piVar4);
        }
      }
      else {
        piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,
                                          *(unsigned int *)(param_1 + 0x10));
        if (piVar4 != (int *)0x0) {
          fn_83004FC0(piVar4,*(unsigned int *)(param_1 + 0x2c),iVar1);
          (**(int (***)())(*piVar4 + 8))(piVar4);
        }
      }
    }
    else if (uVar3 == 0x80020) {
      fn_8303BB18(param_1,(unsigned __int64)lbl_832642EC + 4);
      fn_83016C90(auStack_40,(unsigned __int64)lbl_832642EC + 0x24);
      while (iStack_38 != 0) {
        fn_8303BB18(param_1,*(unsigned int *)(*(int *)(iStack_38 + 8) + 4));
        fn_8301A448(auStack_40);
      }
    }
  }
  else if ((unsigned __int64)uVar3 - 0x80040 == 0) {
    fn_8303BBF0(param_1,(unsigned __int64)lbl_832642EC + 4);
    fn_83016C90(auStack_40,(unsigned __int64)lbl_832642EC + 0x24);
    while (iStack_38 != 0) {
      fn_8303BBF0(param_1,*(unsigned int *)(*(int *)(iStack_38 + 8) + 4));
      fn_8301A448(auStack_40);
    }
  }
  else if ((((unsigned __int64)uVar3 - 0x80040 & 0xffffffff) == 1) &&
          (*(unsigned int **)(iVar1 + 4) != (unsigned int *)0x0)) {
    for (puVar2 = (unsigned int *)**(unsigned int **)(iVar1 + 4); puVar2 != (unsigned int *)0x0;
        puVar2 = (unsigned int *)*puVar2) {
      piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,puVar2[1]);
      if (piVar4 != (int *)0x0) {
        piVar7 = *(int **)(param_1 + 0x1c);
        bVar6 = false;
        if (piVar7 != *(int **)(param_1 + 0x20)) {
          do {
            if (*piVar7 == piVar4[3]) {
              bVar6 = true;
              break;
            }
            piVar7 = piVar7 + 1;
          } while (piVar7 != *(int **)(param_1 + 0x20));
        }
        if (!bVar6) {
          fn_83004FC0(piVar4,*(unsigned int *)(param_1 + 0x2c),0);
        }
        (**(int (***)())(*piVar4 + 8))(piVar4);
      }
    }
  }
  return 1;
}

