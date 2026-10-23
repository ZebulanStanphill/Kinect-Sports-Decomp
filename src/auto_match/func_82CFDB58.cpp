// Parses "hkArray<...>", "hkSimpleArray<...>" or "[N]" type suffixes. The temporary strings are
// objects with destructors (hkString: ctor fn_82D052F0, ~hkArray<char> fn_82CE7E68), so each branch
// gets its own stack slot and destroys its string before returning; plain C locals share one slot.
#include "havok/hkBase.h"
extern "C" {
int fn_82CFBC20(const char *, const char *, int);
int fn_82CFBE40(const char *);
const char *fn_82CFBEA8(const char *, int);
int fn_82CFD9A0(const char *);
int fn_82CFBE68(const char *, int);
}
struct Str;
extern "C" void fn_82D052F0(Str *, const char *, int);
extern "C" void fn_82CE7E68(Str *);
struct Str {
 Str(const char *s, int len) { fn_82D052F0(this, s, len); }
 ~Str() { fn_82CE7E68(this); }
 const char *cString() const { return m_data; }
 char *m_data; int m_size; int m_cap; char m_storage[36];
};
extern "C" int fn_82CFDB58(const char *s) {
 if (fn_82CFBC20(s, "hkArray<", 8) == 0) {
  Str t(s + 8, fn_82CFBE40(s + 8) - 1);
  return fn_82CFD9A0(t.cString());
 } else if (fn_82CFBC20(s, "hkSimpleArray<", 14) == 0) {
  Str t(s + 14, fn_82CFBE40(s + 14) - 1);
  return fn_82CFD9A0(t.cString());
 } else {
  const char *open = fn_82CFBEA8(s, '[');
  if (open) {
   const char *close = fn_82CFBEA8(s, ']');
   Str t(open + 1, (int)(close - open) - 1);
   return fn_82CFBE68(t.cString(), 0);
  }
 }
 return 0;
}
