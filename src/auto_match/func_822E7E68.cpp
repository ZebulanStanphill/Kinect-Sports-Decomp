extern "C" void fn_822315A0(void *);
struct Ref_822E7E68 { void *p; void *r; __forceinline ~Ref_822E7E68() { if(r) fn_822315A0(r); } };
struct Sub_822E7E68 { char pad[12]; Ref_822E7E68 a; char pad2[4]; Ref_822E7E68 b; __forceinline ~Sub_822E7E68() {} };
extern "C" void fn_822E7E68(char *p) { ((Sub_822E7E68 *)(p+12))->~Sub_822E7E68(); }