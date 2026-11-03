typedef struct Writer_82D4AD98 Writer_82D4AD98;
typedef struct {
  char pad0[0x14];
  void (*f14)(Writer_82D4AD98 *w, int kind, const char *name, void *p, unsigned size, unsigned crc);
} Vt_82D4AD98;
struct Writer_82D4AD98 { Vt_82D4AD98 *vt; };
typedef struct {
  char pad[0x34];
  void *data;
  unsigned count;
  int flags;
} Obj_82D4AD98;

extern unsigned fn_82CFF8D0(void *p, unsigned n);
extern void fn_82D48E18(Obj_82D4AD98 *o, Writer_82D4AD98 *w, char *s);
extern char lbl_8323C614[];

void fn_82D4AD98(Obj_82D4AD98 *o, Writer_82D4AD98 *w)
{
  unsigned crc;

  if ((o->flags & (int)0x80000000) == 0) {
    crc = fn_82CFF8D0(o->data, (o->flags & 0x3fffffff) * 0x38);
    w->vt->f14(w, 3, "SubParts", o->data, o->count * 0x38, crc);
  }
  fn_82D48E18(o, w, lbl_8323C614);
}
