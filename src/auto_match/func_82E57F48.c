typedef struct Obj_82E57F48 {
  char pad0[0x48];
  char list[0xb0 - 0x48];
  unsigned int count;
} Obj_82E57F48;

extern unsigned int fn_82F64CE0(const unsigned short *s);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern int fn_82A3F758(void *dst, unsigned int cch, const unsigned short *src);
extern int fn_82E57AA0(void *list, void *item, int flags);
extern void fn_82E4FE40(void *p);

static __forceinline int CopyString(unsigned short *dst, unsigned int cch, const unsigned short *src)
{
  int hr;
  if (cch > 0x7fffffff) {
    hr = 0x80070057;
  } else {
    hr = fn_82A3F758(dst, cch, src);
  }
  return hr;
}

int fn_82E57F48(Obj_82E57F48 *self, const unsigned short *name)
{
  int hr;
  unsigned char size;
  unsigned short *copy;

  if (self->count >= 0xffff) {
    hr = 0xc00d3a9a;
  } else if ((fn_82F64CE0(name) + 1) * 2 >= 0x100) {
    hr = 0x80070057;
  } else {
    size = (unsigned char)((fn_82F64CE0(name) + 1) * 2);
    copy = (unsigned short *)fn_82E50BE8(size, 0, 0, 0, 0);
    if (copy == 0) {
      hr = 0x8007000e;
    } else {
      hr = CopyString(copy, size / 2, name);
      if (hr >= 0) {
        if (fn_82E57AA0(self->list, copy, 0) == 0) {
          hr = 0x8007000e;
        } else {
          copy = 0;
        }
      }
      if (copy != 0) {
        fn_82E4FE40(copy);
      }
    }
  }
  return hr;
}
