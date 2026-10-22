extern void fn_8265CA20(void *p);
extern void fn_82897F68(void *p, int a);
extern void fn_828B55B0(void *p);
extern char lbl_82197140[];

void fn_82890328(int *param_1, int *param_2)
{
  int *p;

  if (param_1 != param_2) {
    p = param_1 + 5;
    do {
      p[-2] = (int)lbl_82197140;
      if (p[-1] == 7) {
        if ((unsigned int)p[1] <= 4) {
          *p = 0;
        } else {
          fn_8265CA20((void *)*p);
          *p = 0;
        }
      } else if (p[-1] == 8) {
        fn_82897F68(p, 0);
      }
      fn_828B55B0(p - 5);
      p += 8;
    } while (p - 5 != param_2);
  }
}
