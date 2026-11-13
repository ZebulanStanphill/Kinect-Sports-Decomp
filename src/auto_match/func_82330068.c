extern int fn_822315A0();
extern int fn_823303F0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern unsigned int lbl_821B0948;


void fn_82330068(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  unsigned int *puVar8;
  
  if (param_2 == 0) {
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0xc);
    uVar2 = *(unsigned int *)(iVar1 + 0x24);
    if (*(int *)(iVar1 + 0x790) != *(int *)(param_1 + 0x58)) {
      if (*(int *)(iVar1 + 0x168) == 0) {
        uVar7 = *(unsigned int *)(iVar1 + 0x16c);
      }
      else {
        uVar7 = fn_8288B760();
        uVar7 = uVar7 & 0xff;
      }
      if (uVar7 == 0) {
        *(unsigned int *)(param_1 + 0x38) = 0;
      }
      else {
        uVar6 = fn_8251F720(param_1 + 0x10,0);
        uVar3 = *(unsigned int *)(param_1 + 0xc);
        uVar4 = *(unsigned int *)(param_1 + 0x24);
        uVar5 = *(unsigned int *)(param_1 + 0x20);
        puVar8 = (unsigned int *)fn_8265C9E0(0x118);
        if (puVar8 == (unsigned int *)0x0) {
          puVar8 = (unsigned int *)0x0;
        }
        else {
          puVar8[1] = 1;
          *puVar8 = &lbl_821B0948;
          puVar8[2] = 1;
          if (puVar8 + 4 != (unsigned int *)0x0) {
            fn_823303F0(puVar8 + 4,uVar6,*(unsigned int *)(param_1 + 0x1c),uVar3,uVar2,uVar5,uVar4
                            ,param_1 + 0x40);
          }
        }
        iVar1 = *(int *)(param_1 + 0x18);
        *(unsigned int **)(param_1 + 0x18) = puVar8;
        *(unsigned int **)(param_1 + 0x14) = puVar8 + 4;
        if (iVar1 != 0) {
          fn_822315A0();
        }
        if ((uVar6 & 0xffffffff) != 0) {
          fn_8251FA58(uVar6);
        }
      }
    }
  }
  *(int *)(param_1 + 0x28) = param_2;
  return;
}

