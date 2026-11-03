typedef struct Comp_823A86F0 Comp_823A86F0;
struct Comp_823A86F0 {
  struct { int p0, p4, p8, pc; void (*f10)(Comp_823A86F0 *, int, void *); void (*f14)(Comp_823A86F0 *, int, void *); } *vt;
};
typedef struct Lis_823A86F0 Lis_823A86F0;
struct Lis_823A86F0 { struct { int p0; void (*f4)(Lis_823A86F0 *, int, int, int); } *vt; };
typedef struct { int first; void *second; } Sp_823A86F0;
typedef struct {
  char pad0[0x48];
  Lis_823A86F0 *lis;      /* 0x48 */
  char pad4c[0x1c];
  Comp_823A86F0 *c68;     /* 0x68 */
  int p6c;
  Comp_823A86F0 *c70;     /* 0x70 */
  int p74;
  Comp_823A86F0 *c78;     /* 0x78 */
} Obj_823A86F0;
extern void *fn_8265C9E0(int);
extern int fn_822D7FE0();
extern void fn_822D79D8(Sp_823A86F0 *, int);
extern void fn_828E9D90(int);
extern void fn_828E9D40(int);
extern void fn_828E2B28(Obj_823A86F0 *, Sp_823A86F0 *);
extern void fn_822315A0(void *);

void fn_823A86F0(Obj_823A86F0 *o, int a, int b, int c)
{
  Sp_823A86F0 sp;
  void *mem;
  int obj;
  int r;
  int s2, s1, s0;
  int u;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) {
    obj = fn_822D7FE0(mem);
  } else {
    obj = 0;
  }
  sp.first = 0;
  sp.second = 0;
  fn_822D79D8(&sp, obj);
  o->c68->vt->f10(o->c68, sp.first, &a);
  o->c70->vt->f10(o->c70, sp.first, &b);
  o->c78->vt->f10(o->c78, sp.first, &c);
  if (o->lis != 0) {
    fn_828E9D90(sp.first);
    fn_828E9D40(sp.first);
    u = sp.first;
    o->c68->vt->f14(o->c68, u, &s2);
    o->c70->vt->f14(o->c70, u, &s1);
    o->c78->vt->f14(o->c78, u, &s0);
    if (o->lis != 0) {
      o->lis->vt->f4(o->lis, s2, s1, s0);
    }
  }
  fn_828E2B28(o, &sp);
  if (sp.second != 0) {
    fn_822315A0(sp.second);
  }
}
