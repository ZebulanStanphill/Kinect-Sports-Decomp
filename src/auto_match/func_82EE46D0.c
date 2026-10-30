typedef struct Elem_82EE46D0 { char pad[0x40]; unsigned count; } Elem_82EE46D0;
typedef struct Obj_82EE46D0 { char pad[0xc]; unsigned fc; char pad10[0x38]; char c48[0x68]; unsigned fb0; } Obj_82EE46D0;
extern int fn_82E3C5F8(void *, unsigned, unsigned short **);
extern int fn_82EE3360(Elem_82EE46D0 *, unsigned);
extern void fn_82EE3630(void *, unsigned, void *);

int fn_82EE46D0(Obj_82EE46D0 *o, unsigned idx, unsigned short key)
{
  struct { Elem_82EE46D0 **p1; Elem_82EE46D0 **p2; union { unsigned short *s; Elem_82EE46D0 **p; } q; } l;
  Elem_82EE46D0 *e;
  unsigned i, n;
  void *c;
  if (o->fc == 0)
    return 0xc00d36b6;
  idx = idx & 0xffff;
  if (idx < o->fb0) {
    c = o->c48;
    i = 0;
    fn_82EE3630(c, idx, &l.p1);
    if ((*l.p1)->count > 0) {
      do {
        fn_82EE3630(c, idx, &l.p2);
        fn_82E3C5F8(*l.p2, i, &l.q.s);
        if (*l.q.s == key) {
          fn_82EE3630(c, idx, &l.q);
          e = *l.q.p;
          if (i + 1 <= e->count) {
            n = 0;
            do {
              if ((int)fn_82EE3360(e, i) < 0)
                break;
              e->count--;
              n++;
            } while (n < 1);
          }
          return 0;
        }
        i++;
        fn_82EE3630(c, idx, &l.p1);
      } while (i < (*l.p1)->count);
    }
  }
  return 0xc00d36d5;
}
