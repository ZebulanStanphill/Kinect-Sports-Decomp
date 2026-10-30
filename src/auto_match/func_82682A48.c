typedef struct Rc_82682A48 { int a; int b; unsigned rc; } Rc_82682A48;
typedef struct Obj_82682A48 {
  char pad0[0x14]; Rc_82682A48 *f14;
  char pad1[0x18]; Rc_82682A48 *f30; Rc_82682A48 *f34;
} Obj_82682A48;
extern void fn_826824B0(Rc_82682A48 *p);

static __inline void AddRef_82682A48(int p)
{
  if (p != 0) ((Rc_82682A48 *)p)->rc = (((Rc_82682A48 *)p)->rc + 1) & 0x8fffffff;
}
static __inline void Clear_82682A48(Rc_82682A48 **d)
{
  if (*d != 0) fn_826824B0(*d);
  *d = 0;
}
static __inline void Assign_82682A48(Rc_82682A48 **dst, Rc_82682A48 **src)
{
  if (*dst != 0) fn_826824B0(*dst);
  *dst = *src;
}

void fn_82682A48(Obj_82682A48 *o)
{
  if ((int)o->f34 != 0) {
    AddRef_82682A48((int)o->f34);
    Assign_82682A48(&o->f30, &o->f34);
    Clear_82682A48(&o->f34);
    AddRef_82682A48((int)o->f30);
    Assign_82682A48(&o->f14, &o->f30);
  }
}
