#define true 1
extern int fn_82AB15D0();
extern int fn_82B7FAF0();
extern int fn_82B9FA18();


void fn_82B771B0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x664) == 0) {
    *(unsigned int *)(param_1 + 0x66c) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x66c) = 1;
  }
  if (*piVar1 == 0) {
    fn_82B9FA18(param_2,0x7ba,piVar1[0x16a8]);
    fn_82B9FA18(param_2,0x7c0,(unsigned __int64)*(unsigned int *)(param_1 + 0x668) - 1);
    fn_82B9FA18(param_2,0x7c3,*(unsigned int *)(param_1 + 0x678));
    fn_82B9FA18(param_2,0x7c1,*(unsigned int *)(param_1 + 0x680));
    uVar2 = *(unsigned int *)(param_1 + 0x66c);
    uVar3 = 0x7bc;
  }
  else {
    fn_82B9FA18(param_2,0x7bb,piVar1[0x16a8]);
    fn_82B9FA18(param_2,0x7c2,*(unsigned int *)(param_1 + 0x684));
    fn_82B9FA18(param_2,0x7bf,*(unsigned int *)(param_1 + 0x674));
    fn_82B9FA18(param_2,0x7bd,*(unsigned int *)(param_1 + 0x66c));
    uVar2 = *(unsigned int *)(param_1 + 0x69c);
    uVar3 = 0x7c7;
  }
  fn_82B9FA18(param_2,uVar3,uVar2);
  fn_82B9FA18(param_2,0x7c8,*(unsigned int *)(param_1 + 0x688));
  fn_82B9FA18(param_2,0x7c9,*(unsigned int *)(param_1 + 0x68c));
  uVar7 = 0;
  puVar6 = (unsigned int *)(piVar1 + 0xc24);
  do {
    uVar4 = *puVar6;
    if (uVar4 < 0x19) {
      uVar5 = 0xff;
      if (uVar4 == 0xf) {
        uVar3 = 8;
      }
      else if (uVar4 == 0x10) {
        uVar3 = 5;
      }
      else if (uVar4 == 0x11) {
        uVar3 = 2;
      }
      else if (uVar4 == 0x12) {
        uVar3 = 3;
      }
      else if (uVar4 == 0x13) {
        uVar3 = 4;
      }
      else if (uVar4 == 0x16) {
        uVar3 = 0xc;
      }
      else {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x39f3);
        uVar3 = 1;
      }
      uVar4 = 0;
      do {
        if ((unsigned __int64)(unsigned int)piVar1[*puVar6 * 0x40 + uVar4 + 0x1068] == (uVar7 & 0xffffffff)) {
          uVar5 = uVar4;
          if (uVar4 != 0xff) goto LAB_82b773b8;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x14);
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daa80,0xffffffff820da3b8,0x3a03);
      uVar4 = uVar5;
LAB_82b773b8:
      fn_82B7FAF0(*(unsigned int *)(param_1 + 0x10),0,uVar7,uVar3,uVar4,0x1010101,puVar6[5] == 0,0
                     );
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 7;
    if (0x13 < (uVar7 & 0xffffffff)) {
      return;
    }
  } while( true );
}

