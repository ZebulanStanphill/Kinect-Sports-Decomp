typedef unsigned char bool;
extern int fn_82D015D8();
extern int fn_82D029B8();


void fn_82CF9318(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (0 < *(int *)(param_1 + 0x208)) {
    piVar5 = (int *)(param_1 + 0x17c);
    iVar6 = 1;
    do {
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        fn_82D015D8(iVar2);
        if (iVar2 + 0x34 == *(int *)(param_1 + 0x20c)) {
          *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + -0x34;
        }
        piVar4 = piVar5;
        iVar3 = iVar6;
        if (iVar6 < *(int *)(param_1 + 0x208)) {
          do {
            piVar4 = piVar4 + 1;
            if (*piVar4 == iVar2) {
              *piVar4 = 0;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x208));
        }
      }
      piVar5 = piVar5 + 1;
      bVar1 = iVar6 < *(int *)(param_1 + 0x208);
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  fn_82D029B8(param_1 + 0x2c);
  return;
}

