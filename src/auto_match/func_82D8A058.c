extern int fn_83081A78();


void fn_82D8A058(int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x200);
  iVar2 = 0;
  if (*(unsigned short *)(param_1 + 0x204) != 0) {
    piVar1 = (int *)*piVar3;
    do {
      if (*piVar1 == 0) {
        if (-1 < iVar2) {
          *(unsigned int *)(iVar2 * 4 + *piVar3) = param_2;
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x204));
  }
  if (*(unsigned short *)(param_1 + 0x204) == (*(unsigned short *)(param_1 + 0x206) & 0x3fff)) {
    fn_83081A78(piVar3,4);
  }
  *(unsigned int *)((unsigned int)*(unsigned short *)(param_1 + 0x204) * 4 + *piVar3) = param_2;
  *(short *)(param_1 + 0x204) = *(short *)(param_1 + 0x204) + 1;
  return;
}

