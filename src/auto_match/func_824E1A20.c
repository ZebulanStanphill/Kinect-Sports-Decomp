typedef struct State_824E1A20 {
    char pad[0x24];
    int active;
    int pending;
    int start;
    char pad30[0x48];
    int enabled;
} State_824E1A20;
typedef struct Object_824E1A20 Object_824E1A20;

typedef struct Vtable_824E1A20 {
    void *slots[9];
    void (*stop)(Object_824E1A20 *);
} Vtable_824E1A20;

struct Object_824E1A20 {
    Vtable_824E1A20 *vtable;
    char pad[0x38];
    State_824E1A20 *state;
};

typedef struct Link_824E1A20 {
    Object_824E1A20 *object;
    char pad[0x60];
    unsigned int mode;
} Link_824E1A20;

typedef struct Owner_824E1A20 {
    char pad[0xfc];
    Link_824E1A20 *link;
} Owner_824E1A20;

extern int fn_824CD030(Owner_824E1A20 *);

void fn_824E1A20(Owner_824E1A20 *self, unsigned int mode)
{
    if (fn_824CD030(self)) {
        Object_824E1A20 *object;
        switch (mode) {
        case 3:
            object = self->link->object;
            object->state->pending = 0;
            object->state->active = 0;
            break;
        case 2:
            object = self->link->object;
            object->vtable->stop(object);
            self->link->object->state->enabled = 0;
            break;
        case 1:
            object = self->link->object;
            object->state->enabled = 1;
            object->state->pending = 0;
            object->state->active = 1;
            break;
        case 0:
            object = self->link->object;
            if (object->state->active == 0) {
                object->state->start = 1;
            }
            object->state->pending = 0;
            object->state->active = 1;
            self->link->object->state->enabled = 0;
            break;
        }
    }
    self->link->mode = mode;
}
