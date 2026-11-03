typedef struct Iface_82A40368 Iface_82A40368;
struct Iface_82A40368 {
  struct {
    char pad[0x34];
    void (*f34)(Iface_82A40368 *self, unsigned int arg);
  } *vt;
};
typedef struct {
  char pad0[0xb0];
  Iface_82A40368 *p;
  unsigned int b4;
  unsigned int b8;
  char pad1[0x250 - 0xbc];
  char sub[1];
} Obj_82A40368;

extern void fn_82A42D68(void *sub);
extern void fn_82A772B8(Iface_82A40368 **pp);

void fn_82A40368(Obj_82A40368 *o)
{
  Iface_82A40368 **pp = &o->p;

  if (*pp != 0) {
    if (o->b8 != 0) {
      (*pp)->vt->f34(*pp, o->b8);
      o->b8 = 0;
    }
    if (o->b4 != 0) {
      (*pp)->vt->f34(*pp, o->b4);
      o->b4 = 0;
    }
    fn_82A42D68(o->sub);
    fn_82A772B8(pp);
  }
}
