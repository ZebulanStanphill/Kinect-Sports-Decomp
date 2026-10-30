typedef struct Obj_824C0570 Obj_824C0570;
typedef struct VT_824C0570 { void *s0[3]; void (*fc)(Obj_824C0570 *); void (*f10)(Obj_824C0570 *, void *); void (*f14)(Obj_824C0570 *); } VT_824C0570;
struct Obj_824C0570 { VT_824C0570 *vt; };
typedef struct SP_824C0570 { Obj_824C0570 *p; void *rc; } SP_824C0570;
typedef struct Mgr_824C0570 { char pad[0x40]; unsigned int f40; } Mgr_824C0570;
extern SP_824C0570 *fn_824C0998(SP_824C0570 *out, Mgr_824C0570 *m, int key);
extern void fn_822315A0(void *rc);

void fn_824C0570(Mgr_824C0570 *m, int a, int b)
{
  SP_824C0570 t1, t2, t3;
  SP_824C0570 *r;
  void *rc;
  if (a != 0) {
    r = fn_824C0998(&t1, m, a);
    r->p->vt->f14(r->p);
    if (t1.rc != 0) fn_822315A0(t1.rc);
  }
  if (b != 0) {
    if (m->f40 == 0) {
      r = fn_824C0998(&t2, m, b);
      r->p->vt->fc(r->p);
      rc = t2.rc;
    } else {
      r = fn_824C0998(&t3, m, b);
      r->p->vt->f10(r->p, &m->f40);
      rc = t3.rc;
    }
    if (rc != 0) fn_822315A0(rc);
  }
}
