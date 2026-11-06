typedef struct Str_822FB198 {
  union { char buf[16]; char *ptr; } u;
  unsigned int size;
  unsigned int res;
} Str_822FB198;
typedef struct Obj_822FB198 {
  char pad[0x5c];
  Str_822FB198 s;
  char pad2[0x98 - 0x74];
  int f98;
} Obj_822FB198;
typedef struct Arg_822FB198 { char pad[0x10]; int f10; } Arg_822FB198;
extern int fn_8260D428(Arg_822FB198 *, int, int, char *, unsigned int);
extern void fn_82230218(Str_822FB198 *, Arg_822FB198 *, int, unsigned int);
static char *cstr(Str_822FB198 *s)
{
  return s->res >= 0x10 ? s->u.ptr : s->u.buf;
}
void fn_822FB198(Obj_822FB198 *o, Arg_822FB198 *a)
{
  unsigned int n = o->s.size;
  if (fn_8260D428(a, 0, a->f10, cstr(&o->s), n) != 0) {
    fn_82230218(&o->s, a, 0, 0xffffffff);
    o->f98 = 0;
  }
}
