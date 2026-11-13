extern unsigned int *auStack_20;
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256A9F8();
extern int fn_8256B310();
extern int fn_8256B850();
extern int fn_8259C738();
extern int fn_82A1BB18();


void fn_8256AA98(void)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int auStack_20 [2];
  
  uVar2 = fn_82569B10();
  fn_82549610(auStack_20,uVar2);
  iVar3 = fn_82569B10();
  for (puVar1 = (unsigned int *)**(unsigned int **)(iVar3 + 0x14); iVar3 = fn_82569B10(),
      puVar1 != *(unsigned int **)(iVar3 + 0x14); puVar1 = (unsigned int *)*puVar1) {
    iVar3 = puVar1[3];
    if (*(unsigned int *)(iVar3 + 0xc) != 0) {
      if ((*(unsigned char *)(iVar3 + 0x28) & 0x80) != 0) {
        fn_8256B850(iVar3);
      }
      fn_8256B310(iVar3);
      fn_8256A9F8(iVar3);
      *(unsigned int *)(iVar3 + 0xc) = 0;
    }
  }
  fn_82A1BB18();
  fn_8259C738(auStack_20[0]);
  return;
}

