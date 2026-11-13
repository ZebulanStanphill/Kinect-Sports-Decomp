typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_82509648();
extern int fn_8265C9E0();
extern unsigned int iStack_40;
extern unsigned int lbl_821ADB04;
extern unsigned int uStack_3c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_822DB498(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  unsigned char bVar10;
  double dVar11;
  struct { int first; unsigned int second; } stack_pair_40;

  
  puVar5 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
    bVar10 = 2;
  }
  else {
    puVar6 = puVar5 + 3;
    bVar10 = (puVar6 == (unsigned int *)0x0) << 1;
    puVar5[1] = 1;
    *puVar5 = &lbl_821ADB04;
    puVar5[2] = 1;
    if (puVar6 != (unsigned int *)0x0) {
      *puVar6 = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x154);
  *(unsigned int **)(param_1 + 0x154) = puVar5;
  *(unsigned int **)(param_1 + 0x150) = puVar5 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  piVar2 = *(int **)(param_1 + 0x144);
  dVar11 = (double)*(float *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x14) + 0x8bc);
  for (piVar8 = *(int **)(param_1 + 0x140); piVar8 != piVar2; piVar8 = piVar8 + 2) {
    uVar3 = piVar8[1];
    uVar9 = (unsigned __int64)uVar3;
    stack_pair_40.first = *piVar8;
    if (uVar9 != 0) {
      do {
        puVar7 = (unsigned int *)(uVar9 + 4);
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,uVar9 + 4);
          *puVar7 = uVar4;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
    }
    iVar1 = *piVar8;
    stack_pair_40.second = uVar3;
    fn_82509648((double)*(float *)(iVar1 + 0x10),dVar11,(double)*(float *)(iVar1 + 0x18),
                    (double)*(float *)(iVar1 + 0x1c),*(unsigned int *)(param_1 + 0x150),
                    *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x14) + 0x8c0),iVar1 + 4,
                    iVar1 + 8,&stack_pair_40.first,*(unsigned int *)(iVar1 + 0x14));
    if (uVar3 != 0) {
      fn_822315A0(uVar9);
    }
  }
  return;
}

