extern int fn_82FA5060();
extern int fn_83008328();
extern int fn_83015E68();
extern unsigned int lbl_8217C594;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;


unsigned int * fn_83021760(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82FA5060(lbl_831BC768,0x20);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_83008328(puVar1,param_1);
    *puVar1 = &lbl_8217C594;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    fn_83015E68((unsigned __int64)lbl_832642E0 + 0x674,puVar1);
  }
  return puVar1;
}

