extern void fn_8265CA20(void *p);
typedef struct Glob_83140780 {
  char pad[0x18];
  void *p;
  int a;
  int b;
} Glob_83140780;
extern Glob_83140780 lbl_83159A24;

void fn_83140780(void)
{
  if (lbl_83159A24.p != 0) {
    fn_8265CA20(lbl_83159A24.p);
  }
  lbl_83159A24.p = 0;
  lbl_83159A24.a = 0;
  lbl_83159A24.b = 0;
}
