extern void fn_8302D080(void *);

struct Itf_8302D2E8;
typedef struct VT_8302D2E8 {
  int p0, p4;
  void (*f8)(struct Itf_8302D2E8 *);
  unsigned (*fc)(struct Itf_8302D2E8 *);
  int p10, p14, p18;
  void (*f1c)(struct Itf_8302D2E8 *);
} VT_8302D2E8;
typedef struct Itf_8302D2E8 { VT_8302D2E8 *vt; } Itf_8302D2E8;
typedef struct Obj_8302D2E8 {
  char pad[0x88];
  Itf_8302D2E8 *itf;
  char pad2[0x11f - 0x8c];
  unsigned char flags;
} Obj_8302D2E8;

void fn_8302D2E8(Obj_8302D2E8 *o)
{
  if (o->itf != 0) {
    if (o->itf->vt->fc(o->itf) != 0) {
      o->itf->vt->f1c(o->itf);
      o->flags = o->flags & 0xef;
      fn_8302D080(o);
    }
    o->itf->vt->f8(o->itf);
  }
}
