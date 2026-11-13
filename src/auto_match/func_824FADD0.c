extern int fn_824FADB8();
extern int fn_824FAE58();
extern int fn_824FAEB8();
extern int fn_824FAF10();
extern int fn_824FAFB0();
extern int fn_82591810();
extern unsigned int lbl_8329E580;


void fn_824FADD0(void)

{
  unsigned int *puVar1;
  
  if (lbl_8329E580 == '\0') {
    puVar1 = (unsigned int *)fn_82591810(0xffffffff8329e554);
    *puVar1 = fn_824FADB8;
    puVar1[1] = fn_824FAE58;
    puVar1[2] = fn_824FAEB8;
    puVar1[3] = fn_824FAF10;
    puVar1[5] = fn_824FAFB0;
    lbl_8329E580 = '\x01';
  }
  return;
}

