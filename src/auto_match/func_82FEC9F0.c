extern int fn_82FA5190();
extern int fn_830224E8();
extern int fn_83024470();
extern unsigned int lbl_831BC770;
extern unsigned int lbl_831BC774;


void fn_82FEC9F0(void)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  
  for (puVar1 = lbl_831BC774; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1) {
    uVar2 = (unsigned __int64)(unsigned int)puVar1[2];
    fn_83024470(uVar2);
    fn_830224E8(uVar2 + 0x80);
    fn_82FA5190(lbl_831BC770,uVar2);
  }
  return;
}

