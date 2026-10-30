extern "C" void fn_826824B0(void *);
extern "C" void fn_826959C8(void *);
struct Res_82696BC8 {
  void *p; void *q; unsigned char flags;
  Res_82696BC8() {}
  __forceinline ~Res_82696BC8() {
    if ((flags & 2) == 0 && p != 0) fn_826824B0(p);
    p = 0;
    if ((flags & 1) == 0 && q != 0) fn_826824B0(q);
  }
};
struct Sub_82696BC8 {
  virtual void v0(); virtual void v1(); virtual int type();
  virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void va(); virtual void vb();
  virtual Res_82696BC8 get();
};
struct Obj_82696BC8 { char pad[8]; unsigned int f8; char pad2[4]; Sub_82696BC8 sub; };
extern "C" void fn_826964E0(char *, const Res_82696BC8 &);
extern "C" void fn_82696BC8(char *a, Obj_82696BC8 *o)
{
  if (o != 0) {
    if (o->sub.type() == 0x17) {
      fn_826964E0(a, o->sub.get());
      return;
    }
  }
  if (*a != 6 || *(Obj_82696BC8 **)(a + 4) != o) {
    fn_826959C8(a);
    *(Obj_82696BC8 **)(a + 4) = o;
    *a = 6;
    if (o != 0) o->f8 = (o->f8 + 1) & 0x8fffffff;
  }
}
