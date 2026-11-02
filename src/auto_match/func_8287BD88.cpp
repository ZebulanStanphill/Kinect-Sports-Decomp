#include <vector>

#include "R1/Soundscape/EmitterSubject.h"

namespace R1 {
namespace Soundscape {

unsigned int EmitterSubject_c::vf08()
{
    for (std::vector<EmitterObserver_i *>::iterator it = observers.begin(); it != observers.end(); ++it) {
        (*it)->vf00(this);
    }
    return 0;
}

} // namespace Soundscape
} // namespace R1
