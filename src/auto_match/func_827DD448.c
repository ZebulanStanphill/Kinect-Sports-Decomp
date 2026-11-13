extern unsigned int *auStack_40;
extern int fn_827E41A0();
extern int fn_82811400();
extern unsigned int lbl_8201C638;
extern unsigned int lbl_83156AA0;


unsigned int * fn_827DD448(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned char auStack_40 [48];
  
  iVar1 = *(int *)lbl_83156AA0;
  uVar2 = fn_82811400(auStack_40,4);
  puVar3 = (unsigned int *)(**(int (***)())(iVar1 + 0xc))(lbl_83156AA0,0x10,uVar2);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    fn_827E41A0(puVar3,*(unsigned int *)(param_1 + 8));
    *puVar3 = &lbl_8201C638;
  }
  return puVar3;
}

