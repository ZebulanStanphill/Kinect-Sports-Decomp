typedef struct RC_826BD980 { int pad0, pad4; int refs; } RC_826BD980;
typedef struct Tgt_826BD980 { struct TVT_826BD980 *vt; } Tgt_826BD980;
typedef struct TVT_826BD980 {
  char pad[0x24];
  unsigned char (*f24)(Tgt_826BD980 *, unsigned int, RC_826BD980 **, int);
} TVT_826BD980;
typedef struct Obj_826BD980 {
  int pad0;
  unsigned char *state;
  Tgt_826BD980 *tgt;
  char padc[0xc];
  unsigned int f18;
} Obj_826BD980;
extern void fn_826944C8(RC_826BD980 *);
extern unsigned int fn_826957D0(Obj_826BD980 *, int);
extern void fn_826959C8(unsigned char *);
extern void fn_82696D38(RC_826BD980 **, unsigned int, unsigned int, int, int);

void fn_826BD980(Obj_826BD980 *o)
{
  unsigned int a, u;
  unsigned char r;
  unsigned char *st;
  RC_826BD980 *rc;
  RC_826BD980 *L;
  a = o->f18;
  u = fn_826957D0(o, 0);
  fn_82696D38(&L, u, a, -1, 0);
  r = o->tgt->vt->f24(o->tgt, o->f18 + 0x78, &L, 0);
  st = o->state;
  fn_826959C8(st);
  st[4] = r;
  st[0] = 2;
  rc = L;
  if (--rc->refs == 0) {
    fn_826944C8(rc);
  }
}
