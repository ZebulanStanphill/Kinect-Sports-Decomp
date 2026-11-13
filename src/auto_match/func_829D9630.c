extern int fn_829D4038();
extern int fn_829D7480();
extern int fn_829D76B8();
extern int fn_82A1E810();
extern unsigned int lbl_832179FC;


void fn_829D9630(int param_1)

{
  int iVar2;
  __int64 lVar1;
  int iVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  if (*(int *)(lbl_832179FC + 0x8f404) != 0) {
    iVar8 = 0;
    do {
      iVar2 = iVar8 + lbl_832179FC;
      iVar3 = *(int *)(iVar2 + 0x8f414);
      iVar7 = *(int *)(iVar2 + 0x8f410);
      iVar2 = (**(int (***)())(iVar2 + 0x8f408))(*(unsigned int *)(iVar2 + 0x8f40c),iVar2 + 0x8f410);
      if (iVar2 == 0) {
        if (iVar7 == 0) {
LAB_829d9700:
          iVar7 = lbl_832179FC + 0x24980;
          RtlEnterCriticalSection(iVar7);
          uVar5 = 0;
          piVar4 = (int *)(lbl_832179FC + 0x8bc);
          do {
            if (*piVar4 == iVar3) {
              iVar3 = uVar5 * 0x58 + lbl_832179FC + 0x8a0;
              goto LAB_829d9738;
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 0x16;
          } while (uVar5 < 2);
          iVar3 = 0;
LAB_829d9738:
          if (iVar3 != 0) {
            fn_829D4038(lbl_832179FC,iVar3,2);
          }
          RtlLeaveCriticalSection(iVar7);
        }
        else if (iVar7 == 2) {
          if (*(unsigned int *)(*(int *)(lbl_832179FC + 0x8f4d8) + 0xf4a10) < 200) goto LAB_829d9700;
          lVar1 = fn_829D7480(param_1);
          if (-1 < lVar1) {
            *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4) & 0xfffffffe;
          }
          fn_829D76B8(0,param_1);
        }
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 0x1c;
    } while (uVar6 < *(unsigned int *)(lbl_832179FC + 0x8f404));
  }
  iVar8 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar8);
  if (*(char *)(lbl_832179FC + 0x24977) != '\0') {
    uVar6 = 0;
    piVar4 = (int *)(lbl_832179FC + 0x9a8);
    do {
      if ((piVar4[-0x16] != 0) && (*piVar4 == 2)) goto LAB_829d97d4;
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 0x18;
    } while (uVar6 < 2);
    *(char *)(lbl_832179FC + 0x24977) = '\0';
    fn_82A1E810(*(unsigned int *)(lbl_832179FC + 0x8f4c0));
  }
LAB_829d97d4:
  RtlLeaveCriticalSection(iVar8);
  *(unsigned int *)(lbl_832179FC + 0x8f404) = 0;
  return;
}

