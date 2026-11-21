#define true 1

/* WARNING: Inlined function: __savegprlr_29 */

void fn_82AA1C88(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned short uVar2;
  char *pcVar3;
  
  iVar1 = 0;
  pcVar3 = (char *)(param_2 + -1);
  do {
    if (param_3 == 0) {
      return;
    }
    pcVar3 = pcVar3 + 1;
    param_3 = param_3 + -1;
    if (*pcVar3 == '\n') {
LAB_82aa1c70:
      iVar1 = fn_82AA1BA8(param_1);
    }
    else {
      *(char *)((unsigned int)*(unsigned short *)(param_1 + 8) + param_1 + 0x10) = *pcVar3;
      uVar2 = *(short *)(param_1 + 8) + 1;
      *(unsigned short *)(param_1 + 8) = uVar2;
      if (0x1fe < uVar2) goto LAB_82aa1c70;
    }
    if (iVar1 < 0) {
      return;
    }
  } while( true );
}
