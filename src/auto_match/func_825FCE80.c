#define true 1
extern unsigned int lbl_8218DBA8;
extern unsigned int lbl_8218DBB0;


int fn_825FCE80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == param_2) {
    return param_1;
  }
  do {
    if (iVar1 == 2) {
      return 0;
    }
    iVar2 = 0;
    uVar3 = 0;
    piVar4 = (int *)&lbl_8218DBA8;
    do {
      if (*piVar4 == iVar1) goto LAB_825fcecc;
      uVar3 = uVar3 + 0xc;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 3;
    } while ((uVar3 & 0xffffffff) < 0x3cc);
    iVar2 = -1;
LAB_825fcecc:
    param_1 = *(int *)(&lbl_8218DBB0 + iVar2 * 0xc) + param_1;
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == param_2) {
      return param_1;
    }
  } while( true );
}

