typedef struct Object_82423658 {
    char padding[0x1a0];
    int active; // 0x1a0
    char padding1a4[0x10];
    int state; // 0x1b4
    char padding1b8[0x28];
    int pending; // 0x1e0
} Object_82423658;

extern Object_82423658 *fn_82417F58(Object_82423658 *self);
extern void fn_8229FF28(void *, unsigned int);
extern void fn_8229FDA0(void *, unsigned int);

typedef struct Owner_82423658 {
    char padding[0xc];
    void *target; // 0x0c
} Owner_82423658;

typedef struct Context_82423658 {
    char padding[0xd4];
    Owner_82423658 *owner; // 0xd4
} Context_82423658;

typedef struct State_82423658 {
    int padding;
    Object_82423658 *object;   // 0x04
    Context_82423658 *context; // 0x08
    char paddingc[0x50];
    float remaining; // 0x5c
} State_82423658;

typedef struct Request_82423658 {
    char padding[0x30];
    unsigned int first; // 0x30
    char padding34[8];
    unsigned int second; // 0x3c
} Request_82423658;

void fn_82423658(State_82423658 *self, Request_82423658 *request, float elapsed)
{
    Owner_82423658 *owner;
    unsigned int second;
    if (self->object->state == 4) {
        float remaining = self->remaining - elapsed;
        self->remaining = -remaining >= 0.0f ? 0.0f : remaining;
        if (self->remaining != 0.0f) {
            return;
        }
    } else {
        Object_82423658 *object = fn_82417F58(self->object);
        if (object->active == 0 && object->pending == 0) {
            return;
        }
    }
    second = request->second;
    owner = self->context->owner;
    fn_8229FF28(owner->target, request->first);
    fn_8229FDA0(owner->target, second);
}
