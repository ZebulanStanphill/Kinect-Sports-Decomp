extern int fn_82FB7C50();
extern int fn_82FB7CC8();
extern int fn_82FB8030();
extern int fn_82FB81B8();
extern int fn_82FB8420();
extern int fn_82FB8808();


void fn_82FB8E58(int param_1)

{
  short sVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  char cVar6;
  int iVar5;
  char acStack_30;
  
  sVar1 = *(short *)(param_1 + 0x2a);
  if (sVar1 < 2) {
    if (sVar1 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        *(unsigned char *)(param_1 + 0x18) = 0;
      }
      else {
        *(unsigned char *)(param_1 + 0x18) = 1;
        *(unsigned int *)(param_1 + 0x10) = 0;
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
          acStack_30 = '\x01';
          piVar3 = (int *)fn_82FB7CC8(param_1,*(unsigned int *)(*(int *)(param_1 + 8) + -0xc));
          do {
            if (piVar3 == (int *)0x0) {
              return;
            }
            uVar4 = 0;
            iVar5 = *(int *)(param_1 + 8) + -0xc;
            uVar2 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + -0xc) + 0x1c);
            if (uVar2 < 4) {
              if ((uVar2 == 0) || (uVar2 == 1)) {
                uVar4 = fn_82FB8420(param_1,iVar5,&acStack_30);
              }
              else {
                uVar4 = fn_82FB8808(param_1,iVar5,&acStack_30);
              }
            }
            cVar6 = acStack_30;
            if (acStack_30 == '\0') {
              piVar3 = *(int **)((uVar4 & 0xffff) * 4 + piVar3[4]);
              cVar6 = (**(int (***)())(*piVar3 + 4))(piVar3);
              if (cVar6 != '\0') break;
              if (((piVar3[5] - piVar3[4] & 0xfffffffcU) == 0) ||
                 (*(char *)((int)piVar3 + 0x26) == '\0')) {
                piVar3 = (int *)piVar3[1];
              }
              else {
                iVar5 = fn_82FB81B8(param_1,piVar3);
                if (iVar5 != 1) {
                  fn_82FB8030(param_1);
                  return;
                }
              }
              cVar6 = '\x01';
              acStack_30 = '\x01';
            }
            else {
              iVar5 = piVar3[1];
              fn_82FB7C50(param_1);
              piVar3 = (int *)fn_82FB7CC8(param_1,iVar5);
            }
          } while (cVar6 != '\0');
          if (piVar3 != (int *)0x0) {
            iVar5 = piVar3[4];
            *(int *)(param_1 + 0x10) = iVar5;
            *(char *)(param_1 + 0x18) = '\x01' - (iVar5 == 0);
            *(int *)(param_1 + 0x14) = piVar3[2];
            *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(piVar3 + 3);
          }
        }
      }
    }
  }
  else {
    *(short *)(param_1 + 0x2a) = sVar1 + -1;
  }
  return;
}

