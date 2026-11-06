struct Itf_82C0D1C8 {
  virtual void v0(); virtual void v1(); virtual int release();
  virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
  virtual void v13(); virtual void v14(); virtual void v15();
  virtual int f40(Itf_82C0D1C8 **, int, int);
};
struct Owner_82C0D1C8 { char pad[0x2c]; Itf_82C0D1C8 *itf; };

extern "C" int fn_82C008D8(Itf_82C0D1C8 *, int *);

extern "C" int fn_82C0D1C8(Owner_82C0D1C8 *o, int *out)
{
  Itf_82C0D1C8 *p = 0;
  int hr;
  hr = o->itf->f40(&p, 0, 0);
  if (p != 0) {
    hr = fn_82C008D8(p, out);
    if (p != 0) {
      p->release();
    }
  } else {
    *out = 0;
  }
  return hr;
}
