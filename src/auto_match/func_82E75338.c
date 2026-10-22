
typedef struct GUID { unsigned int a; unsigned short b, c; unsigned char d[8]; } GUID;
typedef struct IAttr IAttr;
typedef struct IAttrVtbl { void *pad[7]; int (*GetUINT32)(IAttr *, const GUID *, unsigned int *); } IAttrVtbl;
struct IAttr { IAttrVtbl *lpVtbl; };
typedef struct Obj { char pad[0x20]; unsigned int counter; } Obj;
extern const GUID lbl_82153468;
static unsigned int GetAttr(IAttr *p, const GUID *g, unsigned int def)
{
  unsigned int v;
  int hr = p->lpVtbl->GetUINT32(p, g, &v);
  if (hr < 0) v = def;
  return v;
}
unsigned int fn_82E75338(Obj *o, IAttr *a)
{
  unsigned int r;
  if (GetAttr(a, &lbl_82153468, 0)) o->counter = (o->counter + 1) & 0xff;
  r = o->counter;
  o->counter = (r + 1) & 0xff;
  return r;
}
