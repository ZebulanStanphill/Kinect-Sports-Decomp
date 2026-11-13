typedef struct { void *vt; char pad[0x38]; void *child; } Obj_824A6398;
typedef struct { int a; int b; int c; int d; int e; } Sub_824A6398;
typedef struct { void *vt; Sub_824A6398 s; } Child_824A6398;
extern void fn_82F53A20(void *, void *);
extern void *fn_8265C9E0(unsigned);
extern void fn_824A60F0(Sub_824A6398 *);
extern char lbl_821BF7A0[];
extern char lbl_821BFFD0[];

Obj_824A6398 *fn_824A6398(void *src)
{
  Obj_824A6398 *p = (Obj_824A6398 *)fn_8265C9E0(0x40);
  if (p != 0) {
    Child_824A6398 *c;
    fn_82F53A20(p, src);
    p->vt = lbl_821BF7A0;
    c = (Child_824A6398 *)fn_8265C9E0(0x1c);
    if (c != 0) {
      Sub_824A6398 *s;
      c->vt = lbl_821BFFD0;
      s = &c->s;
      s->a = 0;
      s->b = 0;
      s->c = 0;
      s->d = 0;
      s->e = 0;
      fn_824A60F0(s);
    } else {
      c = 0;
    }
    p->child = c;
    return p;
  }
  return 0;
}
