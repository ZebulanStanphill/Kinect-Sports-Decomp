extern void fn_8265CA20(void *p);
typedef struct Glob_83140728 {
  char pad[0x18];
  void *p;
  int a;
  int b;
} Glob_83140728;
extern Glob_83140728 lbl_831599FC;

void fn_83140728(void)
{
  if (lbl_831599FC.p != 0) {
    fn_8265CA20(lbl_831599FC.p);
  }
  lbl_831599FC.p = 0;
  lbl_831599FC.a = 0;
  lbl_831599FC.b = 0;
}
