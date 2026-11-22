typedef struct Listener_8242BC50 Listener_8242BC50;

typedef struct ListenerVtbl_8242BC50 {
    void *slots[9];
    void (*Notify)(Listener_8242BC50 *self); // 0x24
} ListenerVtbl_8242BC50;

struct Listener_8242BC50 {
    ListenerVtbl_8242BC50 *vt;
};

typedef struct Target_8242BC50 {
    char pad0[0x24];
    Listener_8242BC50 *listener; // 0x24
} Target_8242BC50;

typedef struct Item_8242BC50 {
    void **entries; // 0x0
    char pad4[0xc];
    int index; // 0x10
} Item_8242BC50;

typedef struct ItemList_8242BC50 {
    Item_8242BC50 **items; // 0x0
} ItemList_8242BC50;

typedef struct State_8242BC50 {
    char pad0[0x10];
    char field10[0xc];  // 0x10
    char field1C[0x44]; // 0x1c
    char field60[0x5c]; // 0x60
    int count;          // 0xbc
    char padC0[0xc];
    float timer; // 0xcc
} State_8242BC50;

typedef struct Object_8242BC50 {
    char pad0[8];
    ItemList_8242BC50 *list; // 0x8
    char padC[0x168];
    State_8242BC50 *state; // 0x174
} Object_8242BC50;

extern void fn_823588D0(Object_8242BC50 *self);
extern int fn_8243A400(void *field, float delta);
extern Target_8242BC50 *fn_822ABA88(void *entry, int flags);
extern void fn_82432868(void *field);
extern void fn_82441EF0(void *field, Object_8242BC50 *self, float delta);

static __forceinline float ClampToZero(float value)
{
    return -value >= 0.0f ? 0.0f : value;
}

int fn_8242BC50(Object_8242BC50 *self, float delta)
{
    int hr;
    int i;
    Item_8242BC50 *item;
    Target_8242BC50 *target;
    Listener_8242BC50 *listener;
    State_8242BC50 *state;

    fn_823588D0(self);
    hr = fn_8243A400(self->state->field1C, delta);
    if (hr != 0) {
        return hr;
    }
    self->state->timer = ClampToZero(self->state->timer - delta);
    state = self->state;
    if (state->timer > 0.0f) {
        for (i = 0; i < state->count; i++) {
            item = self->list->items[i];
            target = fn_822ABA88(item->entries[item->index], 0);
            listener = target->listener;
            if (listener != 0) {
                listener->vt->Notify(listener);
            }
            state = self->state;
        }
    }
    fn_82432868(state->field60);
    fn_82441EF0(self->state->field10, self, delta);
    return 0;
}
