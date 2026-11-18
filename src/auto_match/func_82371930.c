/* Plays a three-step sequence of effects: event 4 restarts it with the first effect, events 6 and 7
   play the second, event 0xb the third; any other event resets the sequence. */
typedef struct Handle_82371930 {
    void *object;
} Handle_82371930;

typedef struct Owner_82371930 {
    void *context; /* 0x00 */
} Owner_82371930;

typedef struct Obj_82371930 {
    char padding000[0x21c];
    int enabled; /* 0x21c */
    char padding220[0x44];
    unsigned int step; /* 0x264 */
    char padding268[0x74];
    Handle_82371930 first;  /* 0x2dc */
    Handle_82371930 second; /* 0x2e0 */
    Handle_82371930 third;  /* 0x2e4 */
    char padding2E8[0x6d0];
    Owner_82371930 *owner; /* 0x9b8 */
} Obj_82371930;

extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
extern void *fn_82535298(Handle_82371930 *handle, void *context, void *a, void *b);
extern void fn_82536288(Handle_82371930 *handle);

/* The handle's copy constructor. */
static __forceinline void CopyHandle(Handle_82371930 *self, const Handle_82371930 *other)
{
    const Handle_82371930 *source = other;

    self->object = source->object;
}

void fn_82371930(Obj_82371930 *self, int event)
{
    Handle_82371930 instance;

    switch (event) {
    case 4:
        self->step = 0;
        if (self->first.object == 0) {
            return;
        }
        CopyHandle(&instance, &self->first);
        instance.object = fn_82535298(&instance, self->owner->context, lbl_83296BC0, lbl_83296BD0);
        fn_82536288(&instance);
        self->step++;
        return;
    case 6:
    case 7:
        if (self->step != 1) {
            return;
        }
        if (self->second.object == 0) {
            return;
        }
        CopyHandle(&instance, &self->second);
        instance.object = fn_82535298(&instance, self->owner->context, lbl_83296BC0, lbl_83296BD0);
        fn_82536288(&instance);
        self->step++;
        return;
    case 0xb:
        if (self->enabled == 0) {
            return;
        }
        if (self->step != 2) {
            return;
        }
        if (self->third.object == 0) {
            return;
        }
        CopyHandle(&instance, &self->third);
        instance.object = fn_82535298(&instance, self->owner->context, lbl_83296BC0, lbl_83296BD0);
        fn_82536288(&instance);
        break;
    }
    self->step = 0;
}
