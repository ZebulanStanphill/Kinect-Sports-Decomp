extern int fn_82FAB9C0();
extern float lbl_82021544;
extern unsigned int lbl_832642E0;


double fn_82FF1AD8(double param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x4c) == 0) {
      uVar2 = fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0xfe0,*(unsigned int *)(iVar1 + 0xc));
      *(unsigned int *)(iVar1 + 0x4c) = uVar2;
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if ((iVar1 != 0) &&
       (piVar3 = (int *)(-(unsigned int)(*(unsigned char *)(iVar1 + 0x5c) != 0xff) &
                        (unsigned int)*(unsigned char *)(iVar1 + 0x5c) * 0xc + iVar1 + 0x20), piVar3 != (int *)0x0))
    {
      param_1 = (double)((float)((double)*(float *)(piVar3[1] * 0xc + *piVar3 + -0xc) * param_1) *
                        lbl_82021544);
    }
  }
  return param_1;
}

