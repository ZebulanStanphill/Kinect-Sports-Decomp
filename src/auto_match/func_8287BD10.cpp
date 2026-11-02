#include <vector>

#include "R1/Soundscape/EmitterSubject.h"

namespace R1 {
namespace Soundscape {

bool EmitterSubject_c::vf0C()
{
    return !observers.empty();
}

} // namespace Soundscape
} // namespace R1
