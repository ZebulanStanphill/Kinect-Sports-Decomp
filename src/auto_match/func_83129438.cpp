#include <exception>
#include <typeinfo>
#include <stdlib.h>
namespace NW { namespace Function { class FunctionScopeItem_c { public: virtual void f(); }; } }

struct TypeId_83129438 { const type_info *info; };
struct Entry_83129438 {
  void *first;
  void *second;
  void *third;
  int pad;
  TypeId_83129438 id;
  void *(*create)(void);
};
struct Registry_83129438 { int pad; char items[4]; };
struct InsertResult_83129438 { void *it; bool inserted; };

extern "C" {
extern void fn_828E0268(TypeId_83129438 *out, const type_info *info);
extern void *fn_828E3A68(void);
extern Registry_83129438 *fn_828CBA80(void);
extern InsertResult_83129438 *fn_828CB7A8(InsertResult_83129438 *out, void *set, Entry_83129438 *entry);
extern void fn_831415D0(void);
extern Registry_83129438 *lbl_832143E4;
extern Entry_83129438 lbl_83214460;
}

extern "C" void fn_83129438(void)
{
  TypeId_83129438 id;
  InsertResult_83129438 res;
  Registry_83129438 *reg;
  fn_828E0268(&id, &typeid(NW::Function::FunctionScopeItem_c));
  lbl_83214460.first = 0;
  lbl_83214460.second = 0;
  lbl_83214460.third = 0;
  lbl_83214460.create = fn_828E3A68;
  lbl_83214460.id = id;
  reg = lbl_832143E4 ? lbl_832143E4 : fn_828CBA80();
  fn_828CB7A8(&res, reg->items, &lbl_83214460);
  atexit(fn_831415D0);
}
