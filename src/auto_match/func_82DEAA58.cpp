#include "havok/hkBase.h"
struct Shape { char pad[0xc]; int type; char p10[4]; void *code; char p18[0x1c]; Shape *child; };
struct Record { int p0, a, b, c, d, e, f, g; };
struct Entity { char pad[0x10]; Shape *shape; char p14[0x3c]; unsigned short count; char p52[2]; Record *records; };
struct Bits { unsigned int *data; };
class hkpMoppModifier { public: virtual ~hkpMoppModifier(); };
class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public:
 virtual ~hkpRemoveTerminalsMoppModifier();
 char pad[20];
};
extern "C" void fn_82D4D618(void *, void *, Bits *);
extern "C" void fn_82D4D1C0(void *, void *);
extern "C" void fn_82D3DA40(Shape *, Bits *);
extern "C" void fn_82DEAA58(Entity *self, Bits *bits) {
 Shape *shape = self->shape;
 Record *records = self->records;
 if (shape->type != 9) {
  if (shape->type != 10) return;
  Shape *child = shape->child;
  union { double align; char buf[32]; } u;
  fn_82D4D618(u.buf, shape->code, bits);
  fn_82D4D1C0(u.buf, shape->code);
  if (child->type == 9) {
   shape = child;
   ((hkpRemoveTerminalsMoppModifier *)u.buf)->hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier();
  } else {
   ((hkpRemoveTerminalsMoppModifier *)u.buf)->hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier();
   goto finish;
  }
 }
 fn_82D3DA40(shape,bits);
finish:
 if(records) {
int count=self->count; int i=0; if(count>0) { int *record=&records->f; for(;i<count;++i,record+=8) { if (((bits->data[i>>5] >> (i & 31)) & 1u) == 0) {
 record[-5]=0x7fff0000; record[-4]=0x7fff0000;
 record[-3]=0; record[-1]=0; *record=0;
} } }
 }
}
