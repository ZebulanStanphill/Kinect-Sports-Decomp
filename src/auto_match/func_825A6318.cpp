// Scalar deleting destructor of a game class derived from hkpContactListener.
// The game class's own vtable is unnamed (lbl_821C8024), so the class is
// written out by hand: its destructor stores that vtable, releases four
// members (fn_8251E400) and the member at +0x15C (fn_8259C558), frees the
// buffer of the vector at +0x138, and then runs hkpContactListener's
// destructor, which stores ??_7hkpContactListener@@6B@; the object is freed
// with the global operator delete.
#include "havok/hkBase.h"

extern "C" {
void fn_8265CA20(void *p);    // global operator delete
void fn_8251E400(void *p);
void fn_8259C558(void *p);
extern void *lbl_821C8024[];
}

class hkpContactPointAddedEvent;
class hkpContactPointConfirmedEvent;
class hkpContactPointRemovedEvent;
class hkpContactProcessEvent;

class hkpContactListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void contactPointAddedCallback(hkpContactPointAddedEvent &event) {}
    virtual void contactPointConfirmedCallback(hkpContactPointConfirmedEvent &event) {}
    virtual void contactPointRemovedCallback(hkpContactPointRemovedEvent &event) {}
    virtual ~hkpContactListener() {}
    virtual void contactProcessCallback(hkpContactProcessEvent &event) {}
};

// VC10 std::vector storage (_Myfirst, _Mylast, _Myend) and its _Tidy.
struct Vec {
    void *first;
    void *last;
    void *end;
    void tidy()
    {
        if (first != 0)
            fn_8265CA20(first);
        first = 0;
        last = 0;
        end = 0;
    }
};

struct Member14 {
    char data[0x14];
};

struct GameContactListener : public hkpContactListener {
    Member14 m_a;             // +0x4
    Member14 m_b;             // +0x18
    Member14 m_c;             // +0x2C
    Member14 m_d;             // +0x40
    char pad54[0xE4];
    Vec m_vec;                // +0x138
    char pad144[0x18];
    char m_e[4];              // +0x15C
};

extern "C" GameContactListener *fn_825A6318(GameContactListener *self, unsigned int flags)
{
    *reinterpret_cast<void ***>(self) = lbl_821C8024;   // the game class's vtable
    fn_8251E400(&self->m_a);
    fn_8251E400(&self->m_b);
    fn_8251E400(&self->m_c);
    fn_8251E400(&self->m_d);
    fn_8259C558(&self->m_e);
    self->m_vec.tidy();
    self->hkpContactListener::~hkpContactListener();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
