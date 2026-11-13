typedef struct RC_826BDA30 { int pad0, pad4; int refs; } RC_826BDA30;
typedef struct Tgt_826BDA30 { struct TVT_826BDA30 *vt; } Tgt_826BDA30;
typedef struct TVT_826BDA30 {
  char pad[0x50];
  unsigned char (*f50)(Tgt_826BDA30 *, unsigned int, RC_826BDA30 **);
} TVT_826BDA30;
typedef struct Obj_826BDA30 {
  int pad0;
  unsigned char *state;
  Tgt_826BDA30 *tgt;
  char padc[0xc];
  unsigned int f18;
  int count;
} Obj_826BDA30;
extern void fn_826944C8(RC_826BDA30 *);
extern unsigned int fn_826957D0(Obj_826BDA30 *, int);
extern void fn_826959C8(unsigned char *);
extern void fn_82696D38(RC_826BDA30 **, unsigned int, unsigned int, int, int);

void fn_826BDA30(Obj_826BDA30 *o)
{
  unsigned int a, u;
  unsigned char r;
  unsigned char *st;
  RC_826BDA30 *rc;
  RC_826BDA30 *L;
  if (o->count >= 1) {
  a = o->f18;
  u = fn_826957D0(o, 0);
  fn_82696D38(&L, u, a, -1, 0);
  r = o->tgt->vt->f50(o->tgt, o->f18 + 0x78, &L);
  st = o->state;
  fn_826959C8(st);
  st[4] = r;
  st[0] = 2;
  rc = L;
  if (--rc->refs == 0) {
    fn_826944C8(rc);
  }
  } else {

    st = o->state;
    fn_826959C8(st);
    st[0] = 2;
    st[4] = 0;
  }
}
