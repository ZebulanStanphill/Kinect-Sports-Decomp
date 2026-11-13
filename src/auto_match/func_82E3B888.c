extern char lbl_82154AA8[];

typedef struct Unknown_82E3B888 Unknown_82E3B888;
typedef int (*Call_82E3B888)();
struct Unknown_82E3B888 { Call_82E3B888 *vt; };

extern int fn_82E627B8(Unknown_82E3B888 *p, unsigned __int64 offset);

int fn_82E3B888(Unknown_82E3B888 *self, void *name, Unknown_82E3B888 *target)
{
  Unknown_82E3B888 *out;
  unsigned __int64 offset;
  unsigned __int64 base;
  int hr;

  if (name == 0 || target == 0) {
    return 0x80004003;
  }
  out = 0;
  offset = 0;
  hr = self->vt[6](self, name, &offset);
  if (hr >= 0) {
    base = 0;
    hr = self->vt[14](self, &base);
    if (hr >= 0) {
      offset = base + offset;
      hr = target->vt[4](target, lbl_82154AA8, 0, &out);
      if (hr >= 0) {
        hr = fn_82E627B8(out, offset);
      }
    }
  }
  if (out != 0) {
    out->vt[2](out);
  }
  return hr;
}
