extern unsigned int *auStack_40;
extern int fn_8251EFD0();
extern int fn_8251F340();
extern unsigned int lbl_83214050;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


void fn_828BF798(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned char auStack_40 [12];
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  puVar2 = &uStack_34;
  puVar3 = (unsigned int *)(param_1 + -4);
  lVar4 = 7;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (lbl_83214050 == 2) {
    uStack_1c = 0;
    uStack_18 = 0;
  }
  iVar1 = fn_8251F340(0xffffffff83214368);
  puVar3 = (unsigned int *)(iVar1 + 0xc);
  if (puVar3 != (unsigned int *)0x0) {
    puVar2 = &uStack_34;
    lVar4 = 7;
    *puVar3 = uStack_30;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  fn_8251EFD0(auStack_40,0xffffffff83214368,iVar1,0);
  return;
}

