extern __int64 fn_82CEAC20();
extern int fn_82CFBBF0();


extern char lbl_8323AE68[];
extern char lbl_8323AEC8[];
unsigned __int64 fn_82E12ED8(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned r;
  
  uVar1 = fn_82CEAC20(lbl_8323AE68);
  uVar2 = fn_82CEAC20(param_2);
  iVar3 = fn_82CFBBF0(uVar2,uVar1);
  if (iVar3 != 0) {
    uVar1 = fn_82CEAC20(lbl_8323AEC8);
    uVar2 = fn_82CEAC20(param_2);
    iVar3 = fn_82CFBBF0(uVar2,uVar1);
    if (iVar3 != 0) {
      iVar3 = *param_1;
      uVar1 = fn_82CEAC20(param_2);
      r = ((unsigned (*)(int *, __int64))*(int *)(iVar3 + 0x10))(param_1,uVar1);
      if (r == 0) {
        (*(void (*)(int *, __int64, int))*(int *)(*param_1 + 0x1c))(param_1,param_2,0);
      }
    }
  }
  return 0;
}

