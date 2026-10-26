typedef struct { int p; unsigned char b; } Str;
typedef struct { void *vtbl; int a; int b; int c; int d; unsigned char flag; Str s; } Obj;
extern void fn_82F62A28(Str *s, const char *t);
extern char lbl_82167F10[];

Obj *fn_82F62B40(Obj *o, unsigned char flag)
{
  o->a = 1;
  o->b = 0;
  o->vtbl = lbl_82167F10;
  o->flag = flag;
  o->c = 0;
  o->d = 0;
  o->s.p = 0;
  o->s.b = 0;
  fn_82F62A28(&o->s, "*");
  return o;
}
