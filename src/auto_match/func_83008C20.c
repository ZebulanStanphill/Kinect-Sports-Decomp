struct Iface_83008C20;
typedef struct VT_83008C20 { int s[37]; void (*f94)(struct Iface_83008C20 *self, int v); } VT_83008C20;
typedef struct Iface_83008C20 { VT_83008C20 *vt; } Iface_83008C20;
typedef struct { unsigned int a; unsigned int iface; } Holder_83008C20;
typedef struct {
  char pad[0x14];
  Iface_83008C20 *obj;
  short u18;
  unsigned short cnt;
  char pad2[0x44 - 0x1c];
  Holder_83008C20 *holder;
} Obj_83008C20;

void fn_83008C20(Obj_83008C20 *p)
{
  p->cnt = p->cnt + 1;
  if (p->obj != 0)
    p->obj->vt->f94(p->obj, 3);
  if (p->holder != 0 && p->holder->iface != 0)
    ((Iface_83008C20 *)p->holder->iface)->vt->f94((Iface_83008C20 *)p->holder->iface, 3);
}
