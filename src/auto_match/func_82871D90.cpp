// WwiseEmitterFactory_c::vf38: whether an emitter (by its address) is registered.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

// std::set<unsigned int>::find: out of line (func_82872A90).
struct Iterator_82872A90 {
    void *node;
};
extern "C" Iterator_82872A90 *fn_82872A90(Iterator_82872A90 *out, void *set, const unsigned int *key);

namespace R1 {
namespace Soundscape {

bool WwiseEmitterFactory_c::vf38(unsigned int key)
{
    if (key == 0)
        return false;
    unsigned int k = key;
    Iterator_82872A90 it;
    return fn_82872A90(&it, &unk04, &k)->node != unk04.head;
}

} // namespace Soundscape
} // namespace R1
