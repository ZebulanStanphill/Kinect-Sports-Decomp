#include "havok/hkBase.h"
class hkpConstraintOwner : public hkReferencedObject { public: char pad[24]; };
struct __declspec(align(16)) Context { unsigned __int64 words[10]; };
class Action { public:
 virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
 virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
 virtual void apply(void *, void *, Context *, hkpConstraintOwner *);
};
struct Entry { Action *action; void *arg; };
struct World { char pad[0x78]; Context *context; };
struct Object { char pad[8]; World *world; char body[0x154]; Entry *entries; int count; };
extern "C" void fn_82D9BC00(Object *self) {
 Context context = *self->world->context;
 hkpConstraintOwner owner;
 for (int i=0;i<self->count;++i) {
  Entry *entry = &self->entries[i];
  entry->action->apply((char*)self+0x10,entry->arg,&context,&owner);
 }
}
