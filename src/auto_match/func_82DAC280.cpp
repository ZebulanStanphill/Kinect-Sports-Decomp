#include "havok/hkBase.h"
class Collector {
public:
 virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
 virtual void chunk(int, const char *, void *, int, int);
 virtual void begin(const char *);
 virtual void end();
};
struct Atom { unsigned short type, size; };
struct Manager { char pad[0x20]; void *ids; int size, cap; char pad2[0x10]; Atom *atom; };
extern "C" int fn_82CFF8D0(void *, int);
extern "C" void fn_82CFF928(Collector *, const char *, void *, unsigned short, int);
extern "C" void fn_82DAC280(Manager *self, Collector *collector) {
 collector->begin("hkpSimpleConstraintContactMgr");
 fn_82CFF928(collector, "ContactAtom", self->atom, self->atom->size, 0);
 if ((self->cap & (int)0x80000000) == 0) {
  int bytes = fn_82CFF8D0(self->ids, self->cap & 0x3fffffff);
  collector->chunk(3, "ContactIds", self->ids, self->size, bytes);
 }
 collector->end();
}
