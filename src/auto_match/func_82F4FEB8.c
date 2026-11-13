extern int fn_8265CA60();
extern int fn_82A822A8();
extern unsigned int *lbl_832623D0;


unsigned int fn_82F4FEB8(void)

{
  if (lbl_832623D0 == (unsigned int *)0x0) {
    lbl_832623D0 = (unsigned int *)fn_8265CA60(0x2000);
    fn_82A822A8(0,0,0x2000,lbl_832623D0);
    if (lbl_832623D0 == (unsigned int *)0x0) {
      return 0;
    }
  }
  return *lbl_832623D0;
}

