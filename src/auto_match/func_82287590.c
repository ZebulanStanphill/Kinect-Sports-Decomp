typedef struct Target_82287590 Target_82287590;

typedef struct Vtable_82287590 {
    void *slots000[3];
    void (*reset)(Target_82287590 *);
    void *slot010;
    int (*ready)(Target_82287590 *);
} Vtable_82287590;

struct Target_82287590 {
    Vtable_82287590 *vtable;
};

typedef struct State_82287590 {
    char pad000[0x8c0];
    Target_82287590 *target; /* 0x8c0 */
} State_82287590;

typedef struct Entry_82287590 {
    char pad000[0x14];
    int status;            /* 0x14 */
    State_82287590 *state; /* 0x18 */
    char pad01c[0x24];
} Entry_82287590;

typedef struct Object_82287590 {
    void *context;
    char pad004[0x158];
    char resource[0x54c];      /* 0x15c */
    Entry_82287590 entries[1]; /* 0x6a8 */
} Object_82287590;

extern void fn_8252D240(State_82287590 *, void *, int);
extern void fn_8252D370(State_82287590 *);
extern void fn_8252D6E0(State_82287590 *, void *);
extern void fn_822883D0(Object_82287590 *, int, State_82287590 *);

int fn_82287590(Object_82287590 *self, int index)
{
    Entry_82287590 *entry = &self->entries[index];
    Target_82287590 *target = entry->state->target;
    int result = 0;
    if (target->vtable->ready(target) == 0) {
        target->vtable->reset(target);
    } else {
        fn_8252D240(entry->state, self->resource, 0);
        fn_8252D370(entry->state);
        fn_8252D6E0(entry->state, self->context);
        entry->status = 0;
        fn_822883D0(self, index, entry->state);
        result = 1;
    }
    return result;
}
