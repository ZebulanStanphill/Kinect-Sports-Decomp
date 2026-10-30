typedef struct Obj_826A46D8 { char *base; unsigned char level; } Obj_826A46D8;
extern int fn_826A18A8(char *p, int a, int flag);
extern void fn_826A21E0(char *self, Obj_826A46D8 *o, int a, int b);
extern void fn_826C1620(char *p, char *q, Obj_826A46D8 *o, int a, int b, int c);

void fn_826A46D8(char *self, Obj_826A46D8 *o, int a, int b)
{
  int r = fn_826A18A8(o->base + 0x13c, a, o->level > 6);
  if ((unsigned char)r == 0 && (unsigned char)fn_826A18A8(o->base + 0x138, a, o->level > 6) == 0) {
    fn_826A21E0(self, o, a, b);
  } else {
    fn_826C1620(self + 0x38, self - 0x10, o, a, b, r);
  }
}
