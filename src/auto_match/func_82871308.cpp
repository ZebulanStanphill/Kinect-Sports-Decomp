// R1::Soundscape::EventsCallbackDispatcher_c::~EventsCallbackDispatcher_c(): stores
// EventsCallbackDispatcher_c's vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace R1 {
    namespace Soundscape {
        class EventsCallbackDispatcher_c {
        public:
            virtual ~EventsCallbackDispatcher_c();
        };
    }
}

R1::Soundscape::EventsCallbackDispatcher_c::~EventsCallbackDispatcher_c()
{
}
