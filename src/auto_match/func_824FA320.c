extern int fn_824FA308();
extern int fn_824FA3B0();
extern int fn_824FA450();
extern int fn_824FA4F8();
extern int fn_824FA548();
extern int fn_824FA5E0();
extern int fn_82591810();
extern unsigned int lbl_8329E5B0;


void fn_824FA320(void)

{
  unsigned int *puVar1;
  
  if (lbl_8329E5B0 == '\0') {
    puVar1 = (unsigned int *)fn_82591810(0xffffffff8329e584);
    *puVar1 = fn_824FA308;
    puVar1[1] = fn_824FA3B0;
    puVar1[2] = fn_824FA450;
    puVar1[3] = fn_824FA4F8;
    puVar1[5] = fn_824FA548;
    puVar1[9] = fn_824FA5E0;
    lbl_8329E5B0 = '\x01';
  }
  return;
}

