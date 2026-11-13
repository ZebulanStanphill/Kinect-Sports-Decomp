extern int fn_82FB7CC8();
extern int fn_82FB8030();
extern int fn_82FB81B8();
extern int fn_82FB8420();
extern int fn_82FB8808();


void fn_82FB9020(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  char cVar6;
  int iVar4;
  int *piVar5;
  char acStack_40 [16];
  
  *(unsigned char *)(param_1 + 0x18) = 1;
  *(unsigned int *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
    acStack_40[0] = '\x01';
    piVar5 = *(int **)(*(int *)(param_1 + 8) + -0xc);
    do {
      if (piVar5 == (int *)0x0) {
        return;
      }
      uVar3 = 0;
      iVar4 = *(int *)(param_1 + 8) + -0xc;
      uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + -0xc) + 0x1c);
      if (uVar1 < 4) {
        if ((uVar1 == 0) || (uVar1 == 1)) {
          uVar3 = fn_82FB8420(param_1,iVar4,acStack_40);
        }
        else {
          uVar3 = fn_82FB8808(param_1,iVar4,acStack_40);
        }
      }
      cVar6 = acStack_40[0];
      if (acStack_40[0] == '\0') {
        piVar5 = *(int **)((uVar3 & 0xffff) * 4 + piVar5[4]);
        cVar6 = (**(int (***)())(*piVar5 + 4))(piVar5);
        if (cVar6 != '\0') break;
        iVar4 = fn_82FB81B8(param_1,piVar5);
        if (iVar4 != 1) {
          fn_82FB8030(param_1);
          return;
        }
        cVar6 = '\x01';
        acStack_40[0] = '\x01';
      }
      else {
        iVar4 = piVar5[1];
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + -0xc) + 0x1c);
        if (((iVar2 == 0) || (iVar2 == 2)) &&
           (piVar5 = *(int **)(*(int *)(param_1 + 8) + -4), piVar5 != (int *)0x0)) {
          (**(int (***)())(*piVar5 + 4))();
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0xc;
        piVar5 = (int *)fn_82FB7CC8(param_1,iVar4);
      }
    } while (cVar6 != '\0');
    if (piVar5 != (int *)0x0) {
      iVar4 = piVar5[4];
      *(int *)(param_1 + 0x10) = iVar4;
      *(char *)(param_1 + 0x18) = '\x01' - (iVar4 == 0);
      *(int *)(param_1 + 0x14) = piVar5[2];
      *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(piVar5 + 3);
    }
  }
  return;
}

