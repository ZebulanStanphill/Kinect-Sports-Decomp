extern int fn_82E7AB58();

typedef struct {
  int a0;
  int a4;
  short a8;
  short pada;
  unsigned int ac;
} In_82E7B1E8;
typedef struct {
  char pad0[0x13c];
  int f13c;
  int f140;
  short f144;
  short pad146;
  unsigned int f148;
  char pad14c[0xec];
  unsigned char f238;
} Obj_82E7B1E8;

int fn_82E7B1E8(Obj_82E7B1E8 *o, In_82E7B1E8 *in)
{
  int had;
  int hr;

  if (in == 0) {
    return 0x80070057;
  }
  if (in->a0 != 0) {
    return 0x80004001;
  }
  had = o->f148 != 0;
  if (had && in->ac != o->f148) {
    return 0xc00d36b5;
  }
  o->f13c = 0;
  o->f140 = in->a4;
  o->f144 = in->a8;
  o->f148 = in->ac;
  if (!had) {
    hr = fn_82E7AB58(o);
    if (hr < 0) {
      return hr;
    }
  }
  o->f238 = 3;
  return 0;
}
