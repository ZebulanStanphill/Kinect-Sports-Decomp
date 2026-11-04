#include <vector>
extern "C" void fn_82467E00(void *);extern "C" void fn_8265CA20(void *);
struct Element_82466950 { int a[5]; ~Element_82466950() {fn_82467E00((char *)this+4);} };
namespace std {template<> __forceinline void allocator<Element_82466950>::deallocate(Element_82466950 *p,size_type) {fn_8265CA20(p);}}
typedef std::vector<Element_82466950> V;
extern "C" void fn_82466950(char *s) { V *v=(V *)(s+4);v->~V(); }
