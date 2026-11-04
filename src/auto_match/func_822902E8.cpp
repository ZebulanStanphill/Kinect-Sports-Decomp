#include <vector>
extern "C" void fn_82273C88(void *);extern "C" void fn_8265CA20(void *);
struct Element_822902E8 { int a[4]; ~Element_822902E8() {fn_82273C88((char *)this+0);} };
namespace std {template<> __forceinline void allocator<Element_822902E8>::deallocate(Element_822902E8 *p,size_type) {fn_8265CA20(p);}}
typedef std::vector<Element_822902E8> V;
extern "C" void fn_822902E8(char *s) { V *v=(V *)(s+0);v->~V(); }
