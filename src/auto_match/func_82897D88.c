extern char lbl_821970E0[];
extern void fn_8265CA20(void *);
extern void fn_82240D08(void *);
typedef struct Str_82897D88 {
  union { char buf[16]; char *ptr; } u;
  unsigned int size;
  unsigned int res;
} Str_82897D88;
typedef struct Obj_82897D88 {
  void *vtbl;
  int base[13];
  Str_82897D88 s;
} Obj_82897D88;
void fn_82897D88(Obj_82897D88 *o)
{
  Str_82897D88 *s;
  s = &o->s;
  o->vtbl = lbl_821970E0;
  if (s->res >= 0x10) {
    fn_8265CA20(s->u.ptr);
  }
  s->size = 0;
  s->res = 0xf;
  s->u.buf[0] = 0;
  fn_82240D08(&o->base);
}
