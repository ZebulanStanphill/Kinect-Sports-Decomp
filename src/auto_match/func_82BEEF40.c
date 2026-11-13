extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BEB628();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;


unsigned __int64 fn_82BEEF40(__int64 param_1,int param_2)

{
  int *piVar2;
  unsigned __int64 uVar1;
  int iVar3;
  
  if (param_2 == 0) {
    fn_82BE5240(param_1,600,0xffffffff82196582);
  }
  else {
    piVar2 = (int *)(*(int (**)())lbl_831751D0)(4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
      uVar1 = thunk_FUN_82be5550(0xc);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82BEB628(uVar1,piVar2);
      }
      if (iVar3 != 0) {
        fn_82BE52B8(param_1 + 0x4c);
        return 1;
      }
      (*(int (**)())lbl_831751CC)(piVar2);
    }
  }
  return 0;
}

