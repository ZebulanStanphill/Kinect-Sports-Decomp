typedef struct Sub_82BF7D08 { int pad[2]; int a; unsigned int b; } Sub_82BF7D08;
typedef struct Obj_82BF7D08 { char pad[0xc]; char *name; int pad2; Sub_82BF7D08 *sub; } Obj_82BF7D08;
extern void *fn_82BE56B0(int);
extern void *fn_82BFB328(void *, char *, Sub_82BF7D08 *);

void *fn_82BF7D08(Obj_82BF7D08 *o)
{
  char *s = o->name ? o->name : "(none)";
  void *r;
  void *m;
  if (s != 0 && *s != 0 && o->sub != 0 && o->sub->a != 0 && o->sub->b != 0) {
    m = fn_82BE56B0(0x14);
    if (m != 0) {
      r = fn_82BFB328(m, o->name ? o->name : "(none)", o->sub);
    } else {
      r = 0;
    }
    if (r != 0) {
      return r;
    }
  }
  return 0;
}
