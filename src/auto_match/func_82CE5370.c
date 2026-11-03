typedef struct Iface_82CE5370 Iface_82CE5370;
struct Iface_82CE5370 {
  struct {
    char pad[0x30];
    void (*f30)(Iface_82CE5370 *self);
  } *vt;
};
typedef struct {
  char pad0[0xc];
  Iface_82CE5370 *m0c;
  Iface_82CE5370 *m10;
  Iface_82CE5370 *m14;
  Iface_82CE5370 *m18;
  Iface_82CE5370 *m1c;
} Obj_82CE5370;

void fn_82CE5370(Obj_82CE5370 *o)
{
  o->m14->vt->f30(o->m14);
  o->m1c->vt->f30(o->m1c);
  o->m10->vt->f30(o->m10);
  o->m18->vt->f30(o->m18);
  o->m0c->vt->f30(o->m0c);
}
