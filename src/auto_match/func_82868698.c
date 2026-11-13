extern unsigned int *auStack_30;
extern int fn_82811080();
extern int fn_82811400();
extern int fn_82873B20();
extern unsigned int lbl_83211720;


void fn_82868698(void)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_30 [32];
  
  if (lbl_83211720 == 0) {
    uVar1 = fn_82811400(auStack_30,4);
    iVar2 = fn_82811080(0xffffffff832116f8,0x10,uVar1);
    if (iVar2 == 0) {
      lbl_83211720 = 0;
    }
    else {
      lbl_83211720 = fn_82873B20();
    }
  }
  return;
}

