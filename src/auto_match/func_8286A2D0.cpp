#include <map>
struct Value_8286A2D0 { char data[36]; };
typedef std::map<unsigned int, Value_8286A2D0> Map_8286A2D0;
extern "C" void fn_8286A2D0(Map_8286A2D0::iterator *out, Map_8286A2D0 *self, const unsigned int *key) {
  *out = self->find(*key);
}
