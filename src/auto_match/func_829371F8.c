typedef struct VT_829371F8 { int f0, f4; void (*f8)(void *self); } VT_829371F8;
typedef struct Iface_829371F8 { VT_829371F8 *vt; } Iface_829371F8;
typedef struct Obj_829371F8 {
  char pad[0x80]; Iface_829371F8 *f80;
  char pad2[0x138 - 0x84]; void *f138; void *f13c;
} Obj_829371F8;
extern void fn_82EE8150(void *p);
extern void fn_82635978(void *p);

void fn_829371F8(Obj_829371F8 *o)
{
  if (o->f13c != 0) {
    fn_82EE8150(o->f13c);
    o->f13c = 0;
  }
  if (o->f138 != 0) {
    fn_82635978(o->f138);
    o->f138 = 0;
  }
  if (o->f80 != 0) {
    o->f80->vt->f8(o->f80);
    o->f80 = 0;
  }
}
