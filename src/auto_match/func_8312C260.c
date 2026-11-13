extern int atexit(void (*)(void));
extern void fn_83141B18(void);
extern unsigned int lbl_8323B220;


void fn_8312C260(void)

{
  lbl_8323B220 = KeTlsAlloc();
  atexit(fn_83141B18);
  return;
}

