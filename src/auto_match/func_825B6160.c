//BODY
typedef struct VO { struct { char pad[0x24]; int (*f24)(struct VO *); } *vt; } VO;
typedef struct { int pad; VO *o; } P;
typedef struct { char pad[0x20]; int f20; } R;
extern int fn_82817C98(int, int *);
extern int fn_828182C0(int, int, int, int *);

int fn_825B6160(P *p, int a)
{
  R *r;
  int ok;
  int u;
  int out;
  r = (R *)p->o->vt->f24(p->o);
  ok = fn_828182C0(r->f20, a, 0, &u);
  if (ok != 0) {
    fn_82817C98(u, &out);
    return out;
  }
  return -1;
}