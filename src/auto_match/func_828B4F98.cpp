// Works through a queue of pending operations while the object is active. For
// each queued item it looks for a registered entry whose object has the same
// key as the item's object (both through fn_8240D930). On a match it records
// the system clock and hands the item to fn_828B2040; if that refuses, the
// loop stops and leaves the item queued. Otherwise the item is erased from the
// std::deque (fn_828B4C28 is the out-of-line deque::erase). fn_828B4D60 runs
// at the end in every case.
//
// The types are placeholders named after this function. begin() and end()
// must go through self->queue rather than a local pointer to the queue: that
// decides the order in which end() loads _Myoff and _Mysize.
#include <deque>
#include "game/Allocator_825089A0.h"

struct Clock_828B4F98 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
    virtual unsigned __int64 vf0C();
};

struct Element_828B4D60 {
    int pad[2];
    void *object;
    int pad0[3];
    char payload[1];
};
struct Object_828B4F98 {
    int pad[10];
    void *key;
};
struct Entry_828B4F98 {
    int pad[4];
    Object_828B4F98 *object;
};
struct Node_828B4F98 {
    Node_828B4F98 *next, *prev;
    Entry_828B4F98 *value;
};
typedef std::deque<Element_828B4D60, Allocator_825089A0<Element_828B4D60, 0> > Deque;
template <> Deque::iterator Deque::erase(Deque::const_iterator where);
struct State_828B4F98 {
    int pad[2];
    Deque queue;
    Node_828B4F98 *head;
    int pad1[2];
    void *target;
    int result[2];
    unsigned char active;
    unsigned __int64 time;
};

extern "C" {
Object_828B4F98 *fn_8240D930(void *object);
bool fn_828B2040(void *target, void *payload, void *result);
void fn_828B4D60(State_828B4F98 *self);
}

extern "C" void fn_828B4F98(State_828B4F98 *self)
{
    if (self->active && !self->queue.empty()) {
        for (Deque::iterator it = self->queue.begin(); it != self->queue.end();) {
            Element_828B4D60 *item = &*it;
            void *object = item->object;
            fn_8240D930(object);
            Entry_828B4F98 *match = 0;
            Node_828B4F98 *node = self->head->next;
            if (node != self->head) {
                do {
                    Entry_828B4F98 *entry = node->value;
                    Object_828B4F98 *candidate = entry->object;
                    Object_828B4F98 *current = fn_8240D930(object);
                    if (candidate->key == current->key)
                        match = entry;
                    node = node->next;
                } while (node != self->head);
                if (match) {
                    self->time = ((Clock_828B4F98 *)fn_825089A0())->vf0C();
                    if (!fn_828B2040(self->target, item->payload, self->result))
                        break;
                }
            }
            it = self->queue.erase(it);
        }
    }
    fn_828B4D60(self);
}
