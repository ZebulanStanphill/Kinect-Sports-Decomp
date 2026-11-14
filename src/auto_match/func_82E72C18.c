typedef struct Obj_82E72C18 Obj_82E72C18;
typedef struct Vtbl_82E72C18 {
  char pad0[0x2c];
  unsigned __int64 (*getSize)(Obj_82E72C18 *self);
} Vtbl_82E72C18;

struct Obj_82E72C18 {
  Vtbl_82E72C18 *vt;
  int pad4[2];
  void *source;
  char f10[0x10];
  unsigned __int64 size;
  char f28[0x18];
  unsigned int avail;
};

extern void fn_82E57620(void *, void *);
extern void fn_82E576A8(void *, void *);
extern int fn_82EE5E28(void *, unsigned int);

int fn_82E72C18(Obj_82E72C18 *o, unsigned int *out)
{
  unsigned int avail;
  unsigned __int64 size;
  int hr;
  void *stream;
  if (o->source == 0)
    return 0xC00D36B6;
  if (out == 0)
    return 0x80070057;
  *out = 0;
  avail = o->avail;
  if (avail < 0x18) {
    *out = 0x18;
    return 0xC00D36B1;
  }
  stream = o->f28;
  fn_82E57620(o->f10, stream);
  fn_82E576A8(&o->size, stream);
  size = o->size;
  if (size > 0xffffffff)
    return 0xC00D3A9A;
  if (size < 0x18)
    return 0xC00D3A9A;
  if (o->avail < size - 0x18) {
    *out = (unsigned int)size;
    return 0xC00D36B1;
  }
  hr = fn_82EE5E28(stream, (unsigned int)size - 0x18);
  if (hr < 0)
    return hr;
  *out = avail - o->avail;
  if (o->vt->getSize(o) != *out)
    return 0xC00D3A9A;
  return 0;
}
