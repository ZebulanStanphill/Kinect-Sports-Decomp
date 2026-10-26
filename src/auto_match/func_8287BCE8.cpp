// R1::Soundscape::EmitterObserver_i::~EmitterObserver_i(): stores EmitterObserver_i's vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace R1 {
    namespace Soundscape {
        class EmitterObserver_i {
        public:
            virtual ~EmitterObserver_i();
        };
    }
}

R1::Soundscape::EmitterObserver_i::~EmitterObserver_i()
{
}
