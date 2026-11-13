#include <exception>
#include <typeinfo>
#include <stdlib.h>
namespace NW { namespace Function { class RootContainerScopeItem_c { public: virtual void f(); }; } }

struct TypeId_831294E8 { const type_info *info; };
struct Entry_831294E8 {
  void *first;
  void *second;
  void *third;
  int pad;
  TypeId_831294E8 id;
  void *(*create)(void);
};
struct Registry_831294E8 { int pad; char items[4]; };
struct InsertResult_831294E8 { void *it; bool inserted; };

extern "C" {
extern void fn_828E0268(TypeId_831294E8 *out, const type_info *info);
extern void *fn_828E7B20(void);
extern Registry_831294E8 *fn_828CBA80(void);
extern InsertResult_831294E8 *fn_828CB7A8(InsertResult_831294E8 *out, void *set, Entry_831294E8 *entry);
extern void fn_831416E0(void);
extern Registry_831294E8 *lbl_832143E4;
extern Entry_831294E8 lbl_832144D8;
}

extern "C" void fn_831294E8(void)
{
  TypeId_831294E8 id;
  InsertResult_831294E8 res;
  Registry_831294E8 *reg;
  fn_828E0268(&id, &typeid(NW::Function::RootContainerScopeItem_c));
  lbl_832144D8.first = 0;
  lbl_832144D8.second = 0;
  lbl_832144D8.third = 0;
  lbl_832144D8.create = fn_828E7B20;
  lbl_832144D8.id = id;
  reg = lbl_832143E4 ? lbl_832143E4 : fn_828CBA80();
  fn_828CB7A8(&res, reg->items, &lbl_832144D8);
  atexit(fn_831416E0);
}
