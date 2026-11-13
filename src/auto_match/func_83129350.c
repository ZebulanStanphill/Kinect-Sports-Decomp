extern unsigned int *auStack_20;
extern int fn_82F62680();
extern int fn_82F626D0();
extern unsigned int lbl_83214418;
extern unsigned int lbl_832632F8;


void fn_83129350(void)

{
  int iVar1;
  unsigned char auStack_20 [16];
  
  fn_82F62680(auStack_20,2);
  iVar1 = lbl_832632F8;
  lbl_832632F8 = lbl_832632F8 + 1;
  fn_82F626D0(auStack_20);
  lbl_83214418 = iVar1;
  return;
}

