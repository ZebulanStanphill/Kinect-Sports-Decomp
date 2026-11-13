extern unsigned int *auStack_30;
extern int fn_82811080();
extern int fn_82811400();
extern int fn_82871308();
extern unsigned int lbl_83211718;


void fn_82868568(void)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_30 [32];
  
  if (lbl_83211718 == 0) {
    uVar1 = fn_82811400(auStack_30,4);
    iVar2 = fn_82811080(0xffffffff832116f8,4,uVar1);
    if (iVar2 == 0) {
      lbl_83211718 = 0;
    }
    else {
      lbl_83211718 = fn_82871308();
    }
  }
  return;
}

