typedef struct Message_82628EE0 {
    int type;
    int size;
} Message_82628EE0;

typedef struct Listener_82628EE0 Listener_82628EE0;

typedef struct ListenerVtbl_82628EE0 {
    void *slot0;
    void *slot4;
    void *slot8;
    void (*handle)(Listener_82628EE0 *self, Message_82628EE0 *message); /* 0x0c */
} ListenerVtbl_82628EE0;

struct Listener_82628EE0 {
    ListenerVtbl_82628EE0 *vt; /* 0x000 */
    char pad4[0x8b4];
    unsigned short id; /* 0x8b8 */
};

typedef struct Binding_82628EE0 {
    Listener_82628EE0 *listener; /* 0x0 */
    int key;                     /* 0x4 */
} Binding_82628EE0;

typedef struct Owner_82628EE0 {
    char pad0[0x310];
    Binding_82628EE0 *begin; /* 0x310 */
    Binding_82628EE0 *end;   /* 0x314 */
} Owner_82628EE0;

typedef struct Event_82628EE0 {
    int pad0;
    int type;           /* 0x4 */
    unsigned int value; /* 0x8 */
} Event_82628EE0;

extern int fn_82586B60(void *value);

static __forceinline Listener_82628EE0 *FindListener(Owner_82628EE0 *owner, unsigned int id)
{
    Binding_82628EE0 *it;
    Binding_82628EE0 *end;

    for (it = owner->begin, end = owner->end; it < end; it++) {
        if (it->listener->id == id) {
            return it->listener;
        }
    }
    return 0;
}

int fn_82628EE0(Event_82628EE0 **eventRef, Owner_82628EE0 *owner)
{
    Event_82628EE0 *event;
    Binding_82628EE0 *it;
    Binding_82628EE0 *end;
    Listener_82628EE0 *found;
    Message_82628EE0 found_message;
    Message_82628EE0 message;
    unsigned short id;
    int key;

    event = *eventRef;
    switch (event->type) {
    case 0x2d:
        message.type = 1;
        message.size = 8;
        key = fn_82586B60(&event->value);
        for (it = owner->begin, end = owner->end; it < end; it++) {
            if (it->key == key) {
                it->listener->vt->handle(it->listener, &message);
            }
        }
        break;
    case 0x37:
        id = (unsigned short)event->value;
        if (id != 0) {
            found = FindListener(owner, id);
            if (found != 0) {
                found_message.type = 0x16;
                found_message.size = 8;
                found->vt->handle(found, &found_message);
            }
        }
        break;
    default:
        return 4;
    }
    return 3;
}
