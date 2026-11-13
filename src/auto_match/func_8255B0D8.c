extern int fn_8251FA58();
extern int fn_825604A0();
extern int fn_82566E58();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_83282244;


void fn_8255B0D8(int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  
  if (param_1[0xd6] != 0) {
    param_1[0xd6] = 0;
  }
  puVar1 = (unsigned int *)param_1[5];
  if (puVar1 != (unsigned int *)param_1[4]) {
    for (puVar7 = (unsigned int *)param_1[4]; puVar7 < puVar1; puVar7 = puVar7 + 4) {
      fn_82566E58(*puVar7,param_1);
    }
  }
  *(unsigned short *)(param_1 + 8) = 0;
  param_1[5] = param_1[4];
  param_1[1] = 0;
  if (param_1[0x6c] != 0) {
    fn_825604A0(param_1 + 0xc);
    param_1[0x6c] = 0;
  }
  if (param_1[0xd8] != 0) {
    fn_8251FA58();
    param_1[0xd8] = 0;
  }
  uVar4 = lbl_8218E8E8;
  uVar2 = param_1[0xd9];
  if (uVar2 != 0) {
    uVar5 = 1;
    puVar6 = (unsigned int *)(*param_1 + 0x58);
    lVar8 = 4;
    do {
      if ((uVar5 & uVar2) != 0) {
        uVar3 = *puVar6;
        *puVar6 = (unsigned int)((unsigned __int64)uVar3 - 1);
        if ((unsigned __int64)uVar3 - 1 == 0) {
          puVar6[4] = uVar4;
        }
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 << 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    param_1[0xd9] = 0;
  }
  lbl_83282244 = lbl_83282244 & 0xfffffffe;
  return;
}

