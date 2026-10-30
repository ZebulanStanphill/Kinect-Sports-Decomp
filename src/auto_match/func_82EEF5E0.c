typedef struct Obj_82EEF5E0 {
  struct { char pad[0x2c]; unsigned __int64 (*f2c)(struct Obj_82EEF5E0 *); } *vt;
  char pad[0xc - 4]; unsigned fc;
  char f10[0x40 - 0x10]; unsigned f40;
  char pad2[0x48 - 0x44]; unsigned f48; unsigned f4c;
} Obj_82EEF5E0;
extern void fn_82E57620(void *, void *);
extern void fn_82E576A8(void *, void *);
extern int fn_82E59EC8(void *, void *);
extern unsigned fn_82E50BE8(unsigned, int, int, int, int);
extern int fn_82E57820(unsigned, void *, unsigned);

int fn_82EEF5E0(Obj_82EEF5E0 *o, unsigned *out)
{
  unsigned avail;
  int hr;
  if (o->fc == 0) return (int)0xC00D36B6;
  avail = o->f40;
  if (out == 0) return (int)0x80070057;
  *out = 0;
  if (avail < 0x1c) {
    *out = 0x1c;
    hr = (int)0xC00D36B1;
    goto done;
  }
  fn_82E57620((char *)o + 0x10, (char *)o + 0x28);
  fn_82E576A8((char *)o + 0x20, (char *)o + 0x28);
  hr = fn_82E59EC8((char *)o + 0x4c, (char *)o + 0x28);
  if (hr >= 0 && o->f4c != 0) {
    o->f48 = fn_82E50BE8(o->f4c, 0, 0, 0, 0);
    if (o->f48 == 0) {
      hr = (int)0x8007000E;
      goto fin;
    }
    hr = fn_82E57820(o->f48, (char *)o + 0x28, o->f4c);
  }
  if (hr == (int)0xC00D36B1) goto done;
fin:
  *out = avail - o->f40;
  if (hr >= 0 && o->vt->f2c(o) != *out) hr = (int)0xC00D3A9A;
done:
  return hr;
}
