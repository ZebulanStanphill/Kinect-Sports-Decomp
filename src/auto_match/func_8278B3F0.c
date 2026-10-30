typedef struct { int vt; int refs; } Ref_8278B3F0;
typedef struct {
  char pad0[0x18];
  Ref_8278B3F0 *ptr;
  char pad1c[0xe];
  unsigned short flags;
} Obj_8278B3F0;
extern void fn_8267C498(Ref_8278B3F0 *);

void fn_8278B3F0(Obj_8278B3F0 *o, Ref_8278B3F0 *p)
{
  if (p != 0) p->refs++;
  if (o->ptr != 0) fn_8267C498(o->ptr);
  { unsigned short *f = &o->flags; o->ptr = p; *f |= 0x200; }
}
