extern int *fn_8225F160(void);
extern unsigned char fn_823AB478(int a);
extern int fn_8245AE18(void);
extern void fn_8245AF50(int w, int a);
extern void fn_8245AFC0(int w, int a, int b);
extern void fn_8245B050(int w, unsigned int v, int n);
extern void fn_8245B100(int w);
extern void fn_8245B168(int w, void *p, int n);
extern int fn_8245B1F0(void);
extern void fn_824B70F0(void);
extern unsigned char fn_82512508(int a);
extern unsigned char fn_828EA5F8(int a);
extern unsigned char fn_828EA610(int a);

void fn_824B7B48(int param_1, int param_2, int param_3, int param_4, int param_5,
                 int param_6)
{
  int *p; int mode; unsigned char b;
  int w;
  short s;

  mode = (param_3 > 1 || param_4 > 0) ? 4 : param_2;
  p = fn_8225F160();
  p[6] = 3;
  p[7] = 0;
  p[10] = mode;
  p[8] = param_5;
  p[9] = param_6;
  if (fn_828EA610(param_1) == 0) {
    if (fn_828EA5F8(param_1) != 0 && fn_82512508(param_1) != 0) {
      w = fn_8245AE18();
      if (fn_8245B1F0() != 0) {
        fn_8245AF50(w, 2);
        if (*(int *)(w + 0x14) == 0) {
          *(int *)(w + 0x14) = 1;
        }
        b = fn_823AB478(param_1);
        fn_8245B050(w, b, 4);
        fn_8245B050(w, mode & 0xff, 4);
        fn_8245B050(w, param_3 & 0xff, 4);
        fn_8245B050(w, param_4 & 0xff, 4);
        fn_8245B100(w);
        s = (short)param_5;
        fn_8245B168(w, &s, 2);
        s = (short)param_6;
        fn_8245B168(w, &s, 2);
        fn_824B70F0();
        fn_8245AFC0(w, 0, 0);
      }
    }
  }
}
