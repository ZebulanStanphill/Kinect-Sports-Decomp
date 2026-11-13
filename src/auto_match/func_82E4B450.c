typedef struct Rec_82E4B450 { unsigned short f0; unsigned short pad[3]; double f8; } Rec_82E4B450;
extern int fn_82E50F00(void *, int);
extern int fn_82E51028(void *, int);
extern Rec_82E4B450 *fn_82E63500(void *, int);

int fn_82E4B450(char *param_2, int param_3, double param_1)
{
  Rec_82E4B450 *p;
  int r;

  fn_82E50F00(param_2 + 4, 1);
  p = fn_82E63500(param_2, param_3);
  r = 0;
  if (p == 0) {
    r = 0x8007000e;
  }
  else {
    p->f8 = param_1;
    p->f0 = 5;
  }
  fn_82E51028(param_2 + 4, 1);
  return r;
}
