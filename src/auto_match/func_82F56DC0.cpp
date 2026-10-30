#include <map>
struct Value_82F56DC0 { __int64 first; char data[40]; };
typedef std::map<unsigned int, Value_82F56DC0> Map_82F56DC0;
extern "C" void fn_82F56DC0(Map_82F56DC0::iterator *out, Map_82F56DC0 *self, const unsigned int *key) {
  *out = self->find(*key);
}
