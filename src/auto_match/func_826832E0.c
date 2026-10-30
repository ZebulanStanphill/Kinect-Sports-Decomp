typedef struct Rc_826832E0 { char pad0[8]; int refs; } Rc_826832E0;
typedef struct { unsigned char tag; char pad[3]; Rc_826832E0 *rc; char tail[8]; } Tmp_826832E0;
typedef struct Mgr_826832E0 Mgr_826832E0;
typedef struct { void *s[0x17]; Mgr_826832E0 *(*f5c)(void *); } Vt_826832E0;
typedef struct { Vt_826832E0 *vt; } Fac_826832E0;
struct Mgr_826832E0 { char pad[0x78]; char *f78; };
typedef struct { char pad[0x68]; Fac_826832E0 *f68; } Obj_826832E0;
extern void fn_82273CD8(int, int);
extern void fn_82682D30(Obj_826832E0 *, Mgr_826832E0 *, Tmp_826832E0 *, int);
extern void fn_826944C8(Rc_826832E0 *);
extern void fn_82696330(Tmp_826832E0 *);
extern Rc_826832E0 *fn_82694738(char *, int);

void fn_826832E0(Obj_826832E0 *o, int a, int b)
{
  Tmp_826832E0 t;
  Mgr_826832E0 *m;
  Rc_826832E0 *rc;
  char *base;
  m = o->f68->vt->f5c(o->f68);
  base = m->f78 + 8;
  rc = fn_82694738(base + 0x24c, b);
  rc->refs = rc->refs + 1;
  fn_82273CD8(a, 0x85);
  t.tag = 5;
  t.rc = rc;
  rc->refs = rc->refs + 1;
  fn_82682D30(o, m, &t, a);
  fn_82696330(&t);
  rc->refs = rc->refs - 1;
  if (rc->refs == 0) fn_826944C8(rc);
}
