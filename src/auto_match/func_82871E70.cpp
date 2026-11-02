// WwiseEmitterFactory_c::RegisterEmitter: inserts the emitter's address into the set at +4 (node
// allocated and inserted by the folded tree helpers) and counts it in the manager's statistics.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterFactory_c::RegisterEmitter(Emitter_i *emitter)
{
    char *node = (char *)fn_82834458(&unk04);
    unsigned int *value = (unsigned int *)(node + 0xC);
    if (value != 0)
        *value = (unsigned int)emitter;
    char result[8];
    fn_82872B68(result, &unk04, node, 0);
    fn_82865170();
    ++*(int *)(fn_82866400() + 4);
    return 0x20110000;
}

} // namespace Soundscape
} // namespace R1
