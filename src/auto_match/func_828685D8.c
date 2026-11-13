extern unsigned int *auStack_30;
extern int fn_82811080();
extern int fn_82811400();
extern int fn_828725A0();
extern unsigned int lbl_8321171C;


void fn_828685D8(void)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_30 [32];
  
  if (lbl_8321171C == 0) {
    uVar1 = fn_82811400(auStack_30,4);
    iVar2 = fn_82811080(0xffffffff832116f8,0x44,uVar1);
    if (iVar2 == 0) {
      lbl_8321171C = 0;
    }
    else {
      lbl_8321171C = fn_828725A0();
    }
  }
  return;
}

