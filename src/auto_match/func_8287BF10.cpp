// std::remove for EmitterSubject_c's observer vector, called out of line by
// EmitterSubject_c::vf04.
#include <algorithm>
#include <vector>

#include "R1/Soundscape/EmitterSubject.h"

template std::vector<R1::Soundscape::EmitterObserver_i *>::iterator
std::remove(std::vector<R1::Soundscape::EmitterObserver_i *>::iterator,
            std::vector<R1::Soundscape::EmitterObserver_i *>::iterator,
            R1::Soundscape::EmitterObserver_i *const &);
