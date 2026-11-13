typedef struct World_8260F0A8 {
    char pad0[0x93c];
    void *target;
} World_8260F0A8;

typedef struct Obj_8260F0A8 {
    char pad0[0x60];
    World_8260F0A8 **world;
} Obj_8260F0A8;

typedef struct Event_8260F0A8 {
    char pad0[0x10];
    float value;
} Event_8260F0A8;

extern void fn_82577168(void *target, float value);

void fn_8260F0A8(Obj_8260F0A8 *self, int unused, Event_8260F0A8 *e)
{
    void *t = (*self->world)->target;
    if (t != 0) {
        fn_82577168(t, e->value);
    }
}
