extern "C" int fn_828974A8(void *);
extern "C" int fn_8289D4C0(void *);
extern "C" unsigned int lbl_82197060;
extern "C" unsigned int lbl_82197158;
extern "C" unsigned int lbl_821971B0;
extern "C" unsigned int lbl_821B4200;
namespace v2 { extern "C" unsigned int lbl_821B4200; }

struct Base_822407E0 {
  unsigned vt;
  char pad[0x34];
  __forceinline ~Base_822407E0() { fn_828974A8(this); }
};
struct M1_822407E0 {
  unsigned vt;
  char pad[0x50];
  unsigned vb;
  char pad2[8];
  __forceinline ~M1_822407E0() { vb = (unsigned)&v2::lbl_821B4200; vt = (unsigned)&lbl_82197158; fn_8289D4C0(this); }
};
struct M2_822407E0 {
  unsigned vt;
  char pad[0x50];
  unsigned vb;
  char pad2[8];
  __forceinline ~M2_822407E0() { vb = (unsigned)&lbl_821B4200; vt = (unsigned)&lbl_821971B0; fn_8289D4C0(this); }
};
struct D_822407E0 : Base_822407E0 {
  M1_822407E0 m1;
  M2_822407E0 m2;
  __forceinline ~D_822407E0() { vt = (unsigned)&lbl_82197060; }
};
extern "C" void fn_822407E0(D_822407E0 *p)
{
  p->D_822407E0::~D_822407E0();
}
