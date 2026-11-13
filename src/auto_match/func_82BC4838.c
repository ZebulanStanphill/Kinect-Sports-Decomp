extern int fn_82B7BD28();
extern int fn_82BC3CE0();
extern unsigned int lbl_820E4440;


unsigned int * fn_82BC4838(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = *(unsigned int *)(param_2 + 0x5ac);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x3c4);
  *puVar2 = uVar1;
  if (puVar2 + 1 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2 = (unsigned int *)fn_82BC3CE0(puVar2 + 1,0x8e,param_2);
    *puVar2 = &lbl_820E4440;
  }
  return puVar2;
}

