extern int atexit(void (*)(void));
extern void fn_8313F998(void);
extern unsigned int lbl_83297014;


void fn_83125760(void)

{
  lbl_83297014 = KeTlsAlloc();
  atexit(fn_8313F998);
  return;
}

