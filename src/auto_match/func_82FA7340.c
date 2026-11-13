extern unsigned int *auStack_40;
extern int fn_82FA7F30();
extern int fn_82FAB260();
extern unsigned int lbl_83264234;


void fn_82FA7340(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned char auStack_40 [32];
  
  piVar3 = lbl_83264234;
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[0xf];
    iVar2 = piVar3[0xe];
    if (((piVar3[5] & 0x20000U) != 0) &&
       (iVar4 = (**(int (***)())(*piVar3 + 0xc))(piVar3,auStack_40), iVar4 == 1)) {
      fn_82FA7F30(0xffffffff83264240,*(unsigned int *)(iVar2 + 0x20),auStack_40);
    }
    fn_82FAB260(iVar2);
    piVar3 = piVar1;
  }
  return;
}

