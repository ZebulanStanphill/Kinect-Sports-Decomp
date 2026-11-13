extern unsigned int *auStack_30;
extern int fn_826CC3C8();
extern int fn_826CDA28();
extern int fn_826D0660();


void fn_826D0FD8(int *param_1,int param_2)

{
  unsigned short uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned char *pbVar6;
  unsigned int auStack_30 [12];
  
  uVar1 = *(unsigned short *)(param_1 + 1);
  (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff821cc86c);
  iVar2 = fn_826CC3C8(param_2,uVar1,auStack_30);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x34) != '\0') {
      fn_826D0660(param_2,auStack_30[0]);
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      if (((*(int **)(iVar2 + 0x10) != (int *)0x0) && (*(int *)(param_2 + 0x30) == 0)) &&
         (piVar3 = (int *)(**(int (***)())(**(int **)(iVar2 + 0x10) + 0x24))(), piVar3 != (int *)0x0)) {
        uVar4 = 0;
        if (piVar3[1] != 0) {
          iVar5 = 0;
          do {
            if ((**(unsigned int **)(iVar5 + *piVar3) & 4) != 0) {
              pbVar6 = (unsigned char *)(iVar2 + 0x35);
              iVar2 = 0;
              *pbVar6 = *pbVar6 | 2;
              break;
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 4;
          } while (uVar4 < (unsigned int)piVar3[1]);
        }
      }
      if (iVar2 != 0) {
        fn_826D0660(param_2,auStack_30[0]);
        return;
      }
    }
  }
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar2 = fn_826CDA28(param_2,uVar1);
    *(unsigned int *)(iVar2 + 0xc) = (unsigned int)uVar1;
    *(unsigned char *)(iVar2 + 0x34) = 3;
    *(unsigned char *)(iVar2 + 0x35) = *(unsigned char *)(iVar2 + 0x35) | 2;
  }
  return;
}

