struct Com_82E7C920 {
  virtual long QueryInterface(const void *, void **);
  virtual unsigned long AddRef();
  virtual unsigned long Release();
};

struct Src_82E7C920 {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual long f10(const void *, int, Com_82E7C920 **);
};

struct Obj_82E7C920 {
  void *vt;
  Src_82E7C920 *src;
};

extern "C" char lbl_82154988[];

extern "C" long fn_82E7C920(Obj_82E7C920 *self, Com_82E7C920 **out)
{
  Com_82E7C920 *p = 0;
  long hr = self->src->f10(lbl_82154988, 0, &p);
  if (hr >= 0) {
    *out = p;
    p = 0;
  }
  if (p != 0)
    p->Release();
  return hr;
}
