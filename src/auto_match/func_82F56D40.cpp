#include <map>
struct Value_82F56D40 { char data[16]; };
typedef std::map<unsigned int, Value_82F56D40> Map_82F56D40;
extern "C" void fn_82F56D40(Map_82F56D40::iterator *out, Map_82F56D40 *self, const unsigned int *key) {
  *out = self->find(*key);
}
