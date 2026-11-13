extern unsigned int *auStack_20;
extern int fn_827909A8();


void fn_827A5BE8(unsigned __int64 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int auStack_20 [4];
  
  iVar2 = 0;
  if ((*(int *)*param_3 == 2) && (iVar2 = 1, (unsigned int)param_3[1] < 2)) {
    return;
  }
  piVar4 = (int *)*param_3 + iVar2 * 3;
  if ((*piVar4 == 4) && (piVar4[2] == 7)) {
    auStack_20[0] = 0;
    fn_827909A8(auStack_20,(unsigned __int64)(unsigned int)piVar4[1] + 2,6);
    uVar3 = 0;
    if (param_2[1] != 0) {
      iVar2 = 0;
      do {
        uVar3 = uVar3 + 1;
        iVar1 = *(int *)(*param_2 + iVar2);
        iVar2 = iVar2 + 4;
        *(unsigned short *)(iVar1 + 0x2a) = *(unsigned short *)(iVar1 + 0x2a) | 1;
        *(unsigned int *)(iVar1 + 0x20) = *(unsigned int *)(iVar1 + 0x20) & 0xff000000 | auStack_20[0] & 0xffffff;
      } while (uVar3 < (unsigned int)param_2[1]);
    }
  }
  return;
}

