typedef struct Vt_82E73C58 { void *pad0; void (*addref)(void *); void (*release)(void *); } Vt_82E73C58;
typedef struct Iface_82E73C58 { Vt_82E73C58 *vt; } Iface_82E73C58;
extern int fn_82E58BE8(char *, Iface_82E73C58 **);
int fn_82E73C58(char *self, Iface_82E73C58 **out)
{
  Iface_82E73C58 *p;
  if (out != 0) {
    *out = 0;
  }
  p = 0;
  if (fn_82E58BE8(self + 0x44, &p) != 0) {
    if (out != 0) {
      *out = p;
      if (p == 0) {
        goto done;
      }
      p->vt->addref(p);
    }
    if (p != 0) {
      p->vt->release(p);
    }
done:
    return 0;
  }
  return 0xc00d36b2;
}
