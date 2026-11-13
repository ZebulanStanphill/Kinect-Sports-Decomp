extern int fn_824FB8D0();
extern int fn_824FB970();
extern int fn_824FBA38();
extern int fn_824FBBD0();
extern int fn_82592340();
extern int fn_82BA02A8();
extern unsigned int lbl_8329E81C;


void fn_824FB8E8(void)

{
  unsigned int *puVar1;
  
  if (lbl_8329E81C == '\0') {
    puVar1 = (unsigned int *)fn_82592340(0xffffffff8329e7e8);
    *puVar1 = fn_824FB8D0;
    puVar1[1] = fn_824FB970;
    puVar1[2] = fn_82BA02A8;
    puVar1[3] = fn_824FBBD0;
    puVar1[5] = fn_824FBA38;
    lbl_8329E81C = '\x01';
  }
  return;
}

