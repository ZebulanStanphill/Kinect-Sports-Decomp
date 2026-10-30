typedef struct Rec { char pad[0xc]; int f0c; char pad1[4]; unsigned int f14; } Rec;
typedef struct Owner { char pad[0x60]; int state; } Owner;
typedef struct Hdr { char pad[8]; Owner *owner; } Hdr;
typedef struct Par { char pad[0x5a]; unsigned short s5a; } Par;
typedef struct Obj { char pad[0x2c]; Par *par; char pad1[0x2c]; unsigned short s5c; } Obj;
extern void *memcpy(void *d, const void *s, unsigned int n);
extern Rec *fn_82BE50B0(Owner *o, int n);

int fn_82BEFC38(Obj *obj, Hdr *h, Rec *dst)
{
  Owner *o = h->owner;
  Rec *r = fn_82BE50B0(o, 1);
  unsigned short lim;
  if (obj->par != 0) {
    lim = obj->par->s5a;
  } else {
    lim = obj->s5c;
  }
  o->state = 3;
  if (r != 0 && r->f0c != 0) {
    o->state = 1;
    if (r->f14 > dst->f14) {
      memcpy(dst, r, 0x24);
      if (r->f14 >= lim) {
        o->state = 2;
        return 1;
      }
    }
  }
  return 0;
}
