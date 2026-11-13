extern unsigned int *auStack_90;
extern int fn_82FA5190();
extern int fn_82FF5198();
extern int fn_83032FE8();
extern int iRam00000000;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264304;
extern unsigned int lbl_832643DC;


void fn_8300FB78(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  unsigned int auStack_90 [20];
  
  piVar7 = (int *)(param_1 + 0x50);
  piVar1 = *(int **)(param_1 + 0x50);
  while ((piVar1 != (int *)0x0 && ((unsigned int)piVar1[1] <= *(unsigned int *)(param_1 + 0x90)))) {
    puVar2 = (unsigned int *)piVar1[2];
    iVar5 = *piVar1;
    if (piVar1 == (int *)*piVar7) {
      *piVar7 = *piVar1;
      iVar5 = iRam00000000;
    }
    iRam00000000 = iVar5;
    if (piVar1 == *(int **)(param_1 + 0x54)) {
      *(unsigned int *)(param_1 + 0x54) = 0;
    }
    *piVar1 = *(int *)(param_1 + 0x58);
    *(int **)(param_1 + 0x58) = piVar1;
    auStack_90[0] = 0;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    uVar3 = *(unsigned int *)(puVar2[2] + 0x14) >> 8;
    if ((uVar3 == 0x4011) || ((uVar3 == 0x5011 && (cVar6 = fn_83032FE8(), cVar6 != '\0')))) {
      (**(int (***)())(*(int *)puVar2[2] + 0x28))((int *)puVar2[2],auStack_90);
    }
    (**(int (***)())(*(int *)puVar2[2] + 0x18))((int *)puVar2[2],puVar2);
    if (puVar2[10] != 0) {
      fn_82FF5198(lbl_83264304);
    }
    (**(int (***)())(*(int *)puVar2[2] + 8))();
    uVar4 = lbl_831BC768;
    (**(int (***)())*puVar2)(puVar2,0);
    fn_82FA5190(uVar4,puVar2);
    lbl_832643DC = lbl_832643DC + 1;
    piVar1 = (int *)*piVar7;
  }
  return;
}

