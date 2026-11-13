extern int atexit(void (*)(void));
extern void fn_83141AF8(void);
extern unsigned int lbl_8323A964;


void fn_8312ABC0(void)

{
  lbl_8323A964 = KeTlsAlloc();
  atexit(fn_83141AF8);
  return;
}

