extern "C" {
void fn_8267BE38(void *);
void fn_82696330(void *);
void fn_8269A990(void *, void *);
void fn_826AE560(void *, void *);
void fn_826D18D0(void *);
void fn_826D1970(void *);
extern char lbl_82005700[];
extern char lbl_8200C1CC[];
}

struct Base_826D4010 {
  void *vt;
  __forceinline ~Base_826D4010() { vt = lbl_82005700; }
};
struct M8 { char b[0x20]; __forceinline ~M8() { fn_826D18D0(this); } };
struct E16 { char b[0x10]; __forceinline ~E16() { fn_82696330(this); } };
struct E18 { char b[0x18]; __forceinline ~E18() { fn_82696330(this); } };
struct VecB { void *b, *e, *c; __forceinline ~VecB() { fn_8269A990(b, e); fn_8267BE38(b); } };
struct M80 { char b[0x24]; __forceinline ~M80() { fn_826D1970(this); } };
struct Vec29 { void *p; __forceinline ~Vec29() { fn_8267BE38(p); } };
struct VecA { void *b, *e, *c; __forceinline ~VecA() { fn_826AE560(b, e); fn_8267BE38(b); } };

struct D_826D4010 : Base_826D4010 {
  char pad4[4];
  M8 m8;
  E16 arr[4];
  VecB vb;
  char pad74[0xc];
  M80 m80;
  Vec29 v29;
  char padA8[8];
  E18 e18;
  VecA va;
  __forceinline ~D_826D4010() { vt = lbl_8200C1CC; }
};

extern "C" void fn_826D4010(D_826D4010 *p)
{
  p->D_826D4010::~D_826D4010();
}
