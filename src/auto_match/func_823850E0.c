extern unsigned int fStack_18;
extern int fn_8249ABC0();
extern int fn_8249CED0();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

double fn_823850E0(double param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  float afStack_20 [2];
  float fStack_18;
  
  if (param_3 == 0) {
    iVar1 = fn_8249ABC0();
    fn_8249CED0(afStack_20,*(unsigned int *)(iVar1 + 0xec));
  }
  else {
    iVar1 = fn_8249ABC0();
    afStack_20[0] = **(float **)(iVar1 + 0xec);
    fStack_18 = (*(float **)(iVar1 + 0xec))[2];
  }
  return (double)(float)((double)(fStack_18 - afStack_20[0]) * param_1);
}

