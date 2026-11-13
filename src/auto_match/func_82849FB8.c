extern unsigned int *auStack_1a;
extern int fn_8265C9E0();
extern int fn_8284A700();
extern int fn_828518B8();
extern int fn_82857C40();
extern unsigned int iStack_14;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_832112EC;
extern unsigned int uStack_1b;


void fn_82849FB8(void)

{
  unsigned char uStack_1b;
  unsigned char auStack_1a [2];
  unsigned char *puStack_18;
  int iStack_14;
  
  fn_828518B8();
  fn_82857C40(0xffffffff83211280,lbl_8320A898);
  iStack_14 = fn_8265C9E0(0x10);
  if (iStack_14 == 0) {
    iStack_14 = 0;
  }
  else {
    puStack_18 = auStack_1a;
    fn_8284A700(iStack_14,&uStack_1b,puStack_18);
  }
  lbl_832112EC = iStack_14;
  return;
}

