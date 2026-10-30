#include <set>
typedef std::set<unsigned int> Set_82872A90;
extern "C" void fn_82872A90(Set_82872A90::iterator *out, Set_82872A90 *self, const unsigned int *key) {
  *out = self->find(*key);
}
