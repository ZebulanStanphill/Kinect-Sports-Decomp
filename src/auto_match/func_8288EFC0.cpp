#include <vector>

struct Element_8288C1B8;
struct Reader_8288EFC0;
struct Sub_8288EFC0;

extern "C" {
unsigned int fn_8265C9E0(unsigned int);
int fn_8288CBD8(void *, void *);
void *fn_8288CD40(void *, void *, void *);
int fn_82897B50(int, int, unsigned int, int, void *);
int fn_828A12E8(int);
int fn_828B55F8(void *);
int fn_828B57E8(void *, int, void *);
int fn_828C7F70(int, int, int, void *, int);
int fn_828E9D90(void *);
int fn_828E9DA8(void *);
int fn_828E9FF8(void *, int);
}

struct Obj_8288EFC0 {
  char pad0[0x18];
  int f18;
  char pad1c[0x50];
  int f6c;
  char pad70[0x10];
  char sub[0xc];
  std::vector<Element_8288C1B8 *> vec;
  char pad98[1];
  char b9d;
  unsigned char b9e;
};

struct Hdr_8288EFC0 { char pad[0x40]; struct { char pad[8]; unsigned int n; } *f40; };

extern "C" void fn_8288EFC0(Obj_8288EFC0 *o, void *r)
{
  int a;
  int rem;
  unsigned int flag;
  unsigned int n;
  unsigned int i;
  int elem;
  int six;
  char buf[4];
  Hdr_8288EFC0 **h;

  a = fn_828A12E8(o->f6c);
  fn_828B57E8(o->sub, o->f6c, r);
  rem = fn_828E9DA8(r) - fn_828E9D90(r);
  if (rem >= 1) {
    flag = fn_828E9FF8(r, 1);
  } else {
    flag = 0;
  }
  o->b9d = flag != 0;
  elem = fn_828B55F8(o->sub);
  h = (Hdr_8288EFC0 **)fn_8288CD40(buf, (char *)a + 0x94, &elem);
  n = (*h)->f40->n;
  if (o->b9d != 0) {
    rem = fn_828E9DA8(r) - fn_828E9D90(r);
    o->b9e = rem >= 8 ? fn_828E9FF8(r, 8) : 0;
    o->vec.reserve(n);
    for (i = 0; i < n; i++) {
      rem = fn_828E9DA8(r) - fn_828E9D90(r);
      if (rem >= 1) {
        flag = fn_828E9FF8(r, 1);
      } else {
        flag = 0;
      }
      elem = 0;
      if (flag != 0) {
        elem = 0;
        six = o->f6c;
        fn_82897B50(six, fn_828B55F8(o->sub), i, 1, &elem);
        unsigned int m = fn_8265C9E0(0x24);
        if (m != 0) {
          int p18 = o->f18;
          int p6c = o->f6c;
          elem = fn_828C7F70(m, p6c, p18, r, elem);
        } else {
          elem = 0;
        }
      }
      fn_8288CBD8(&o->vec, &elem);
    }
  }
}
