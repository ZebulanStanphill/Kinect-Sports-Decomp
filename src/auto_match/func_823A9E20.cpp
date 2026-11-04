extern "C" void fn_822315A0(void *);
struct Ref_823A9E20 { void *p; void *r; __forceinline ~Ref_823A9E20() { if(r) fn_822315A0(r); } };
struct Sub_823A9E20 { Ref_823A9E20 a,b; __forceinline ~Sub_823A9E20() {} };
extern "C" void fn_823A9E20(char *p) { ((Sub_823A9E20 *)(p+12))->~Sub_823A9E20(); }