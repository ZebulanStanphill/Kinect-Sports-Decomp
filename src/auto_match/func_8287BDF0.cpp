// EmitterSubject_c constructor: the three zeroed words at +4 are a small
// member object (a list head) with its own inline constructor.
namespace R1 {
namespace Soundscape {
struct ObserverList_8287BDF0 {
    void *first;
    void *last;
    void *end;
    ObserverList_8287BDF0() : first(0), last(0), end(0) {}
};

class EmitterSubject_c {
public:
    EmitterSubject_c();
    virtual ~EmitterSubject_c();
    ObserverList_8287BDF0 observers;
};

EmitterSubject_c::EmitterSubject_c()
{
}
}
}
