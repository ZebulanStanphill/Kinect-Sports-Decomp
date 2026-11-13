extern void *memcpy(void *, const void *, unsigned int);

typedef struct Iface_82A50118 Iface_82A50118;
typedef struct Vt_82A50118 { int pad[3]; void (*f)(Iface_82A50118 *, int, void *, int); } Vt_82A50118;
struct Iface_82A50118 { Vt_82A50118 *vt; };
typedef struct Obj_82A50118 { Iface_82A50118 *h; int w; int a; int b; int pad[2]; void *data; } Obj_82A50118;

void fn_82A50118(Obj_82A50118 *o, void *dst)
{
  o->h->vt->f(o->h, 0, o->data, (o->a * o->w + 3) * 4);
  memcpy(dst, o->data, 0xc);
}
