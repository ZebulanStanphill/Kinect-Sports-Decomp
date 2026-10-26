extern void fn_828BDDA0(void *p);
extern void fn_828B5608(void *p);
extern char lbl_82026234[];
extern char lbl_82026238[];
typedef struct {
  void *vt;
  char pad04[0x4c];
  void *vt2;
  char pad54[0x2c];
  char sub[0x10];
  int a, b, c;
  int pad9c;
  float f;
  unsigned char x, y;
} S;
S *fn_828C7728(S *s)
{
  fn_828BDDA0(s);
  s->vt = lbl_82026238;
  s->vt2 = lbl_82026234;
  fn_828B5608(s->sub);
  s->a = 0;
  s->b = 0;
  s->c = 0;
  s->f = 0.0f;
  s->x = 0;
  s->y = 0;
  return s;
}
