extern int fn_82A8CF68();
extern void fn_83141A78(void);
int atexit(void (*f)(void));
extern unsigned int lbl_820D177C;
extern unsigned int lbl_832234FC;


void fn_8312A880(void)
{
  fn_82A8CF68(&lbl_832234FC);
  lbl_832234FC = &lbl_820D177C;
  atexit(fn_83141A78);
  return;
}
