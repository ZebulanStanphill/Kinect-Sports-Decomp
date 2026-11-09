// std::_Destroy-style explicit destructor call on a std::string-like object
// (fn_82230300 is the folded basic_string::_Tidy(bool, size_t)). The original
// is /Od with inlining on (/Ob1): the compiler-generated scalar deleting
// destructor is inlined with its constant 0 flag left untested-away
// (li r11,0; cmplwi r11,0; beq; operator delete).
extern "C" void fn_82230300(void *, unsigned char, int);
extern "C" void fn_8265CA20(void *);

struct Str_8284A8C8 {
  __forceinline ~Str_8284A8C8() { fn_82230300(this, 1, 0); }
  static __forceinline void operator delete(void *p) { fn_8265CA20(p); }
};

extern "C" void fn_8284A8C8(Str_8284A8C8 *p)
{
  p->~Str_8284A8C8();
}
