// A receive wrapper around fn_82CE0A80. When a receive succeeds, it copies
// the bytes of every buffer into a record stamped with the socket and the
// counter of the object fn_825089A0 returns, and offers the record to the
// hook of the lazily constructed manager lbl_83213E94. A hook that accepts
// the record swallows the data: the received count becomes 0, error 0x2733
// (WSAEWOULDBLOCK) is set and -1 is returned.
//
// The record's two vectors allocate through Allocator_825089A0. The vector's
// range _Insert stays a call to fn_82889C00. Link-time code generation
// inlined the record's destructor on the normal path but called it out of
// line (fn_82889B80) on the swallowed path, so the record is constructed in
// local storage and destroyed explicitly on each path. The flags add
// /d2inlS1000 so that the vector destructors are inlined as they were.
#include <vector>
#include "game/Allocator_825089A0.h"

struct System_8288A178 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual unsigned __int64 vf0C();
};

struct Element_8288A178 {
    unsigned char value;
};

typedef std::vector<Element_8288A178, Allocator_825089A0<Element_8288A178, 2> > Vector_8288A178;

struct Record_8288A178 {
    int flags;
    Vector_8288A178 bytes, address;
    unsigned int socket;
    unsigned __int64 tick;
};

struct Buffer_8288A178 {
    unsigned int size;
    Element_8288A178 *data;
};

struct Hook_8288A178 {
    virtual void vf00();
    virtual bool vf04(Record_8288A178 *record);
};

struct Manager_8288A178 {
    unsigned char enabled;
    char pad[7];
    int hook; // held as an integer: the null test is signed

};

extern "C" {
int fn_82CE0A80(unsigned int socket, Buffer_8288A178 *buffers, unsigned int count,
    unsigned int *received, void *flags, void *from, void *fromlen, void *overlapped,
    void *completion);
void fn_82CE0BB8(int error);
void fn_82889B80(Record_8288A178 *record);
void fn_82889C00(Vector_8288A178 *self, Element_8288A178 *where, Element_8288A178 *first,
    Element_8288A178 *last, std::forward_iterator_tag tag);
void fn_82889EE0(Manager_8288A178 *manager);
Manager_8288A178 *fn_8288A0F8();
void fn_83140920();
extern Manager_8288A178 lbl_83213E94;
extern unsigned int lbl_83213EC0;
int atexit(void (*function)());
}

template <> template <>
__forceinline void Vector_8288A178::_Insert<Element_8288A178 *>(const_iterator where,
    Element_8288A178 *first, Element_8288A178 *last, std::forward_iterator_tag tag)
{
    fn_82889C00(this, where._Ptr, first, last, tag);
}

// This slot returns the counter, unlike the allocator-only system view.
static __forceinline unsigned __int64 current_tick()
{
    return ((System_8288A178 *)fn_825089A0())->vf0C();
}

extern "C" int fn_8288A178(unsigned int socket, Buffer_8288A178 *buffers,
    unsigned int count, unsigned int *received, void *flags, void *from,
    void *fromlen, void *overlapped, void *completion)
{
    int result = fn_82CE0A80(socket, buffers, count, received, flags, from,
        fromlen, overlapped, completion);
    if (result == 0) {
        unsigned char storage[sizeof(Record_8288A178)];
        Record_8288A178 &record = *new ((void *)storage) Record_8288A178;
        record.tick = current_tick();
        record.socket = socket;
        record.flags = 0;
        if (count) {
            Buffer_8288A178 *buffer = buffers;
            unsigned int left = count;
            do {
                record.bytes.insert(record.bytes.end(), buffer->data,
                    buffer->data + buffer->size);
                ++buffer;
            } while (--left);
        }

        if (!(lbl_83213EC0 & 1)) {
            lbl_83213EC0 |= 1;
            fn_82889EE0(&lbl_83213E94);
            atexit(fn_83140920);
        }
        if (lbl_83213E94.enabled && fn_8288A0F8()->hook != 0) {
            if (((Hook_8288A178 *)fn_8288A0F8()->hook)->vf04(&record)) {
                *received = 0;
                fn_82CE0BB8(0x2733);
                fn_82889B80(&record);
                return -1;
            }
        }
        record.~Record_8288A178();
    }
    return result;
}
