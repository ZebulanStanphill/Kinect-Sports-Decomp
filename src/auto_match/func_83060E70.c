#define true 1
extern int fn_8305D5F0();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_83065E50();


void fn_83060E70(unsigned __int64 param_1,int param_2)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    uVar2 = fn_83065E50();
    fn_8305D5F0();
    fn_8305E0F8(uVar2,param_1);
    fn_8305EC98(uVar2,iVar1);
    if (iVar1 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return;
}

