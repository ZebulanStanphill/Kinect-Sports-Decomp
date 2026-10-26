extern char lbl_8219688C[];
extern int lbl_8315A31C;

/* inlined std::string _Tidy: _Myres = 15, _Mysize = 0, _Buf[0] = 0 */
typedef struct {
  char buf[16];
  int size;
  int res;
} Str;

static void Str_tidy(Str *s)
{
  s->res = 0xf;
  s->size = 0;
  s->buf[0] = 0;
}

void fn_828E3508(int *p)
{
  int v;
  p[1] = 0;
  v = lbl_8315A31C;
  p[2] = 0;
  p[3] = 0;
  p[0] = (int)lbl_8219688C;
  Str_tidy((Str *)(p + 4));
  *(char *)(p + 0xb) = 0;
  p[0xc] = v;
}
