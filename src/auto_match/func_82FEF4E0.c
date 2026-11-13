extern int fn_82FEF328();
extern unsigned int lbl_832643DC;


unsigned __int64 fn_82FEF4E0(int param_1,int param_2)

{
  int iVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  
  *(unsigned char *)(param_1 + 0xdb) = *(unsigned char *)(param_1 + 0xdb) | 0x80;
  *(int *)(param_1 + 0xd0) = param_2 * 0x30;
  piVar3 = (int *)fn_82FEF328(0xffffffff831bc794);
  if (piVar3 == (int *)0x0) {
    uVar2 = 2;
  }
  else {
    piVar3[1] = 6;
    *piVar3 = param_1;
    iVar1 = lbl_832643DC;
    uVar2 = 1;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[2] = iVar1;
  }
  return uVar2;
}

