extern "C" void fn_8267C498(void *);
struct Sub_826811F8 { int p0; int p4; int p8; int stride; int base; };
struct Rec_826811F8 { char pad[8]; Sub_826811F8 s; };
extern "C" Rec_826811F8 *fn_82680AC8(int, int, int, int);
struct Iface_826811F8 {
  virtual void V0(int f);
  virtual void V1();
  virtual void V2();
  virtual void V3();
  virtual void V4();
  virtual int V5();
  virtual int V6();
  virtual int V7(int off);
  virtual void V8();
  virtual void V9();
  virtual unsigned char V10();
};
struct Prov_826811F8 {
  virtual void V0();
  virtual Iface_826811F8 *V1(int p);
};
extern "C" Rec_826811F8 *fn_826811F8(int p1, Prov_826811F8 *prov, int p3)
{
  Iface_826811F8 *it = prov->V1(p1);
  Rec_826811F8 *r;
  if (it == 0) return 0;
  {
    if (it->V10() == 0) {
      int a = it->V5();
      r = fn_82680AC8(2, it->V6(), a, p3);
      if (r != 0) {
        unsigned i = 0;
        if ((unsigned)r->s.p8 > 0) {
          Sub_826811F8 *s = &r->s;
          do {
            if (it->V7(s->stride * i + s->base) == 0) {
              fn_8267C498(r);
              goto clr;
            }
            i++;
          } while (i < (unsigned)r->s.p8);
        }
      }
    } else {
clr:
      r = 0;
    }
    it->V0(1);
  }
  return r;
}