extern unsigned int *auStack_30;
extern int fn_826CC3C8();
extern int fn_826CDA28();
extern int fn_826D0660();


void fn_826D0E88(int *param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned int auStack_30 [12];
  
  (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff821cc86c);
  param_2 = param_2 & 0xffff;
  iVar1 = fn_826CC3C8(param_3,param_2,auStack_30);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x34) != '\0') {
      fn_826D0660(param_3,auStack_30[0]);
      iVar1 = 0;
    }
    if (iVar1 != 0) {
      if (((*(int **)(iVar1 + 0x10) != (int *)0x0) && (*(int *)(param_3 + 0x30) == 0)) &&
         (piVar2 = (int *)(**(int (***)())(**(int **)(iVar1 + 0x10) + 0x24))(), piVar2 != (int *)0x0)) {
        uVar3 = 0;
        if (piVar2[1] != 0) {
          iVar4 = 0;
          do {
            if ((**(unsigned int **)(iVar4 + *piVar2) & 4) != 0) {
              pbVar5 = (unsigned char *)(iVar1 + 0x35);
              iVar1 = 0;
              *pbVar5 = *pbVar5 | 2;
              break;
            }
            uVar3 = uVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (uVar3 < (unsigned int)piVar2[1]);
        }
      }
      if (iVar1 != 0) {
        fn_826D0660(param_3,auStack_30[0]);
        return;
      }
    }
  }
  if (*(int *)(param_3 + 0x30) == 0) {
    iVar1 = fn_826CDA28(param_3,param_2);
    *(unsigned int *)(iVar1 + 0xc) = param_2;
    *(unsigned char *)(iVar1 + 0x34) = 3;
    *(unsigned char *)(iVar1 + 0x35) = *(unsigned char *)(iVar1 + 0x35) | 2;
  }
  return;
}

