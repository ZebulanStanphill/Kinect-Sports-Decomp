extern int atexit(void (*)(void));
extern void fn_83141B28(void);
extern unsigned int lbl_8323B4A0;


void fn_8312C790(void)

{
  lbl_8323B4A0 = KeTlsAlloc();
  atexit(fn_83141B28);
  return;
}

