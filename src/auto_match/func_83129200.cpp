#include <exception>
#include <typeinfo>
#include <stdlib.h>
namespace NW { class NetObjScopeItem_c { public: virtual void f(); }; }

struct TypeId_83129200 { const type_info *info; };
struct Entry_83129200 {
  void *first;
  void *second;
  void *third;
  int pad;
  TypeId_83129200 id;
  void *(*create)(void);
};
struct Registry_83129200 { int pad; char items[4]; };
struct InsertResult_83129200 { void *it; bool inserted; };

extern "C" {
extern void fn_828E0268(TypeId_83129200 *out, const type_info *info);
extern void *fn_828CB720(void);
extern Registry_83129200 *fn_828CBA80(void);
extern InsertResult_83129200 *fn_828CB7A8(InsertResult_83129200 *out, void *set, Entry_83129200 *entry);
extern void fn_83141320(void);
extern Registry_83129200 *lbl_832143E4;
extern Entry_83129200 lbl_832143F8;
}

extern "C" void fn_83129200(void)
{
  TypeId_83129200 id;
  InsertResult_83129200 res;
  Registry_83129200 *reg;
  fn_828E0268(&id, &typeid(NW::NetObjScopeItem_c));
  lbl_832143F8.first = 0;
  lbl_832143F8.second = 0;
  lbl_832143F8.third = 0;
  lbl_832143F8.create = fn_828CB720;
  lbl_832143F8.id = id;
  reg = lbl_832143E4 ? lbl_832143E4 : fn_828CBA80();
  fn_828CB7A8(&res, reg->items, &lbl_832143F8);
  atexit(fn_83141320);
}
