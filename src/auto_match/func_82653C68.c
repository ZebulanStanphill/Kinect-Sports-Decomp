typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82653BE8();
extern int fn_82A1E108();


void fn_82653C68(int param_1)

{
  char cVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char *pcVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  char acStack_120 [288];
  
  uVar3 = (**(int (***)())(param_1 + 4))(0x5d0);
  bVar2 = false;
  fn_82653BE8(param_1,0xffffffff821cc818,0xffffffff821cc80c,uVar3);
  lVar7 = 0xb;
  puVar9 = (unsigned int *)0x831be894;
  do {
    if (((unsigned int)puVar9[-1] & uVar3) != 0) {
      if (bVar2) {
        fn_82653BE8(param_1,0xffffffff82196824);
      }
      fn_82653BE8(param_1,*puVar9);
      bVar2 = true;
    }
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 2;
  } while (lVar7 != 0);
  if (!bVar2) {
    fn_82653BE8(param_1,0xffffffff821cc82c);
  }
  fn_82653BE8(param_1,0xffffffff821cc840);
  (**(int (***)())(param_1 + 8))(0xf11,0);
  fn_82A1E108(1);
  uVar4 = (**(int (***)())(param_1 + 4))(0xf12);
  fn_82653BE8(param_1,0xffffffff821cc858,0xffffffff821cc844,uVar4);
  lVar7 = 0x1e;
  puVar9 = (unsigned int *)0x831be8e4;
  do {
    uVar4 = (**(int (***)())(param_1 + 4))(puVar9[1]);
    puVar9 = puVar9 + 2;
    fn_82653BE8(param_1,0xffffffff821cc858,*puVar9,uVar4);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar10 = (unsigned int *)0x831be9e8;
  lVar7 = 5;
  do {
    fn_82653BE8(param_1,0xffffffff821cc86c);
    uVar3 = 0;
    if (*puVar10 != 0) {
      do {
        xboxkrnl_sprintf(acStack_120,"%s 0x%02x: ",(unsigned __int64)puVar10[1],uVar3);
        uVar8 = uVar3 + 8;
        while( true ) {
          uVar5 = (unsigned __int64)*puVar10;
          if ((uVar8 & 0xffffffff) < (unsigned __int64)*puVar10) {
            uVar5 = uVar8;
          }
          if ((uVar5 & 0xffffffff) <= (uVar3 & 0xffffffff)) break;
          (**(int (***)())(param_1 + 8))(puVar10[-4],(int)uVar3 << (puVar10[-1] & 0x3f) | puVar10[-2]);
          fn_82A1E108(1);
          uVar4 = (**(int (***)())(param_1 + 4))(puVar10[-3]);
          pcVar6 = acStack_120;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          xboxkrnl_sprintf(pcVar6 + (int)(acStack_120 + (-1 - (int)acStack_120)),"%08x ",uVar4);
          uVar3 = uVar3 + 1;
        }
        fn_82653BE8(param_1,0xffffffff821cc884,acStack_120);
        uVar3 = uVar8;
      } while ((uVar8 & 0xffffffff) < (unsigned __int64)*puVar10);
    }
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 6;
  } while (lVar7 != 0);
  return;
}

