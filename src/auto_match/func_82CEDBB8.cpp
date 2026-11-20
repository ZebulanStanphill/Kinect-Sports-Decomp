#include "havok/hkString.h"

class Stream_82CEDBB8 {
public:
  virtual void s0();
  virtual void s1();
  virtual void s2();
  virtual void s3();
  virtual void Write(const char *p, unsigned n);
};
struct Obj_82CEDBB8 { int pad[2]; Stream_82CEDBB8 *s; };

extern "C" Obj_82CEDBB8 *fn_82CEDBB8(Obj_82CEDBB8 *o, short v)
{
  char buf[0x2728];
  hkString::snprintf(buf, 0x2728, "%i", v);
  Stream_82CEDBB8 *st = o->s;
  st->Write(buf, hkString::strLen(buf));
  return o;
}
