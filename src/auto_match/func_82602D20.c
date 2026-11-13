extern void fn_825FBDB8(void *);
extern void fn_82627DB0(void *, void *);
extern void *fn_8265C9E0(unsigned);
struct Obj_82602D20;
struct Sub_82602D20;
typedef struct VT_82602D20 { int s0, s1, s2; void (*f0c)(void *, int); } VT_82602D20;
typedef struct Child_82602D20 { VT_82602D20 *vt; } Child_82602D20;
typedef struct Mid_82602D20 { char pad[0x1a8]; Child_82602D20 *child; } Mid_82602D20;
extern Mid_82602D20 *fn_82549960(void *, void *, int, int, int, int);
extern void fn_8265B648(void *, int);
extern int fn_8251F720(void *, int);
extern void fn_82602390(void *, void *, float);
extern float lbl_8327F880[];
typedef struct Slot_82602D20 { char pad[0xa2]; unsigned short id; char pad2[0x1d0 - 0xa4]; } Slot_82602D20;
typedef struct Obj_82602D20 { char pad[6]; short n; char pad1[0x24c]; int f254; char pad2[0x1c]; Mid_82602D20 *f274; char pad3[0x18]; unsigned f290; int f294; int pad4[2]; Slot_82602D20 slots[1]; } Obj_82602D20;
typedef struct P1_82602D20 { char pad[0x820]; float f820; char pad1[0x14]; float f838; } P1_82602D20;
void fn_82602D20(P1_82602D20 *p1, Obj_82602D20 *o)
{
  if (o->f290 != 0) {
    int i;
    void *mem;
    Mid_82602D20 *m;
    unsigned tmp;
    fn_825FBDB8(o);
    for (i = 0; i < o->n; i++) {
      if (o->slots[i].id == 0xfffe) fn_82627DB0(o, &o->slots[i]);
    }
    mem = fn_8265C9E0(0x200);
    if (mem != 0) m = fn_82549960(mem, &o->f290, 0, 0, 0, 0);
    else m = 0;
    o->f274 = m;
    m->child->vt->f0c(m->child, 0);
    if (o->f290 != 0) {
      tmp = o->f290;
      fn_8265B648(&tmp, 5);
    } else {
      tmp = 0;
    }
    o->f294 = fn_8251F720(&tmp, 0);
    o->f254 = 7;
    o->f290 = 0;
  }
  if (o->f254 == 7) {
    float t = 0.0f;
    if (p1->f838 <= t) t = p1->f820 * lbl_8327F880[5];
    fn_82602390(p1, o, t);
  }
}
