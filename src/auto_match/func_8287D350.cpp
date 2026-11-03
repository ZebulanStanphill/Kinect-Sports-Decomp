#include <set>
#include <algorithm>

struct Element_8287EFA0 {
  char pad[0x2c];
  float f;
  bool operator<(const Element_8287EFA0 &o) const { return f < o.f; }
};

struct Owner_8287D350 {
  char pad[0xf0];
  std::set<Element_8287EFA0> s;
};

extern "C" double fn_8287D350(Owner_8287D350 *o)
{
  float m = 0.0f;
  for (std::set<Element_8287EFA0>::const_iterator it = o->s.begin(); it != o->s.end(); ++it)
    m = std::max(m, it->f);
  return m;
}
