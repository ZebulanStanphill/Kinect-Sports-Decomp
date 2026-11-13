struct Obj_8236DEB8;
typedef struct {
  char pad[4];
  void (*f10)(struct Obj_8236DEB8 *);
  void (*f14)(struct Obj_8236DEB8 *, void *);
  char padc[8];
  void (*f18)(struct Obj_8236DEB8 *);
} Vt_8236DEB8;
typedef struct Obj_8236DEB8 { Vt_8236DEB8 *vt; } Obj_8236DEB8;
typedef struct { Obj_8236DEB8 *p; void *rc; } SP_8236DEB8;
typedef struct { char pad[0x40]; unsigned f40; } Self_8236DEB8;
extern SP_8236DEB8 *fn_82359DB8(SP_8236DEB8 *, Self_8236DEB8 *, unsigned);
extern void fn_822315A0(void *);

void fn_8236DEB8(Self_8236DEB8 *s, unsigned a, unsigned b)
{
  SP_8236DEB8 t1, t2, t3;
  void *rc;
  if (a != 0) {
    SP_8236DEB8 *r = fn_82359DB8(&t1, s, a);
    r->p->vt->f18(r->p);
    if (t1.rc != 0) fn_822315A0(t1.rc);
  }
  if (b != 0) {
    if (s->f40 == 0) {
      SP_8236DEB8 *r = fn_82359DB8(&t2, s, b);
      r->p->vt->f10(r->p);
      rc = t2.rc;
    } else {
      SP_8236DEB8 *r = fn_82359DB8(&t3, s, b);
      r->p->vt->f14(r->p, &s->f40);
      rc = t3.rc;
    }
    if (rc != 0) fn_822315A0(rc);
  }
}
