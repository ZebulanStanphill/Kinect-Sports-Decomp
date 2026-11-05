extern int fn_82EF1198(void *, void *, void *, void *);
typedef struct Iface_82EF1568 { struct IfaceVT_82EF1568 *vt; } Iface_82EF1568;
typedef struct IfaceVT_82EF1568 { void *f0; void (*f4)(Iface_82EF1568 *); } IfaceVT_82EF1568;
int fn_82EF1568(char *self, int p2, Iface_82EF1568 **out)
{
  Iface_82EF1568 *obj = 0;
  char tmp[8];
  int r;
  if (out == 0) {
    r = 0x80070057;
  } else {
    if (fn_82EF1198(self + 8, &p2, &obj, tmp) != 0) {
      *out = obj;
      obj->vt->f4(obj);
      r = 0;
    } else {
      r = 1;
    }
  }
  return r;
}
