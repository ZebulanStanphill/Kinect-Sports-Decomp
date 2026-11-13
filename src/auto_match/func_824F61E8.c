extern int fn_824F61D0();
extern int fn_824F6278();
extern int fn_824F6478();
extern int fn_824F6550();
extern int fn_824F8CF8();
extern int fn_824F8DC0();
extern int fn_82591810();
extern unsigned int lbl_8329E5E0;


void fn_824F61E8(void)

{
  unsigned int *puVar1;
  
  if (lbl_8329E5E0 == '\0') {
    puVar1 = (unsigned int *)fn_82591810(0xffffffff8329e5b4);
    *puVar1 = fn_824F61D0;
    puVar1[1] = fn_824F6278;
    puVar1[2] = fn_824F6478;
    puVar1[3] = fn_824F6550;
    puVar1[5] = fn_824F8CF8;
    puVar1[7] = fn_824F8DC0;
    lbl_8329E5E0 = '\x01';
  }
  return;
}

