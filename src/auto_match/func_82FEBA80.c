extern int fn_82FAB9C0();
extern __int64 fn_83021A98();
extern unsigned int lbl_832642E0;


extern char lbl_8326434C[];
unsigned __int64 fn_82FEBA80(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  
  if ((*param_2 == 0) || ((param_3 & 0xffffffff) != 0)) {
    RtlEnterCriticalSection(lbl_8326434C);
    piVar2 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x674,param_1);
    if (piVar2 == (int *)0x0) {
      RtlLeaveCriticalSection(lbl_8326434C);
      uVar1 = 0xf;
    }
    else {
      uVar1 = fn_83021A98(piVar2,param_2,param_3);
      (*(void (**)(int *))(*piVar2 + 8))(piVar2);
      RtlLeaveCriticalSection(lbl_8326434C);
    }
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}

