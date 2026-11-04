extern void *fn_82A1E6A0(int, int, int, int); extern int fn_82A1F470(void);
typedef struct O_82E667D8 { char pad[0x224]; void *h; char pad2[0x10]; int open; } O_82E667D8;
int fn_82E667D8(O_82E667D8 *o) {
  int hr = 0; int r;
  if (o->open == 0) {
    o->h = fn_82A1E6A0(0, 0, 0, 0);
    if (o->h == 0) {
      r = fn_82A1F470();
      if (r <= 0) hr = r; else hr = (r & 0xffff) | 0x80070000;
    } else {
      o->open = 1;
    }
  }
  return hr;
}
