#include <vector>

// vector<unsigned int>::clear() reaches the ICF-folded pointer-element erase(first, last)
// fn_8233EB88 (see func_8287BE10.cpp); push_back(unsigned int&&) is the folded 4-byte
// push_back fn_8233E620 (func_8233E620.cpp), called out of line on a call-site temporary.

typedef std::vector<unsigned int> UIntVector;

struct Obj_8233D980;
struct Buf16_8233D980 { int a[4]; };
struct VT_8233D980 {
  void *s[16];
  void (*f40)(Obj_8233D980 *, Buf16_8233D980 *);
};
struct Obj_8233D980 { VT_8233D980 *vt; };

struct Writer_8233D980 {
  int h[4];
  Buf16_8233D980 *buf;
  int n;
  void *p;
  int q;
  int r;
};

struct Iterator_8233EB88 {
  unsigned int *ptr;
};
extern "C" Iterator_8233EB88 *fn_8233EB88(Iterator_8233EB88 *result, UIntVector *self,
                                          UIntVector::const_iterator first,
                                          UIntVector::const_iterator last);
extern "C" void fn_8233E620(UIntVector *self, const unsigned int &x);

template <>
__forceinline UIntVector::iterator UIntVector::erase(const_iterator first, const_iterator last)
{
    Iterator_8233EB88 result;
    return iterator(fn_8233EB88(&result, this, first, last)->ptr, this);
}

extern "C" unsigned int fn_8223C610(Writer_8233D980 *, int, int, int);
extern "C" void fn_8265CA20(void *);
extern "C" void fn_828E9D28(Writer_8233D980 *, Buf16_8233D980 *, int);

extern "C" void fn_8233D980(Obj_8233D980 *param_1, UIntVector *param_2)
{
  int i;
  Buf16_8233D980 a;
  Writer_8233D980 b;

  param_1->vt->f40(param_1, &a);
  b.p = 0;
  b.q = 0;
  b.r = 0;
  b.buf = &a;
  b.n = 0x10;
  fn_828E9D28(&b, &a, 0x10);
  param_2->clear();
  for (i = 4; i != 0; i--) {
    fn_8233E620(param_2, fn_8223C610(&b, 0x20, 0, 0));
  }
  if (b.p != 0) {
    fn_8265CA20(b.p);
  }
}
