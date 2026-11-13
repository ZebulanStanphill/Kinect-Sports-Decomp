#define true 1


int * fn_82876858(int param_1,unsigned int param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  if (param_4 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = (unsigned int)*(unsigned short *)(param_1 + 4);
  }
  iVar3 = 0;
  iVar1 = *param_3 + -1;
  do {
    uVar4 = iVar1 - iVar3;
    iVar2 = ((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0) + iVar3;
    if (param_2 < (unsigned int)param_3[iVar2 * 6 + 1]) {
LAB_828768b8:
      iVar1 = iVar2 + -1;
    }
    else {
      if (param_2 <= (unsigned int)param_3[iVar2 * 6 + 1]) {
        uVar4 = (param_3 + iVar2 * 6 + 1)[5];
        if (uVar5 < uVar4) goto LAB_828768b8;
        if (uVar5 <= uVar4) {
          return param_3 + iVar2 * 6 + 1;
        }
      }
      iVar3 = iVar2 + 1;
    }
    if (iVar1 < iVar3) {
      return (int *)0x0;
    }
  } while( true );
}

