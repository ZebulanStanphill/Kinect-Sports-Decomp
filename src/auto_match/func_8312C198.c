extern int atexit(void (*)(void));
extern void fn_83141B08(void);
extern unsigned int lbl_8323B1B0;


void fn_8312C198(void)

{
  lbl_8323B1B0 = KeTlsAlloc();
  atexit(fn_83141B08);
  return;
}

