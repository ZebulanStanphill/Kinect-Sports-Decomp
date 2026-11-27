typedef struct Handle_82566CA8 {
    unsigned int id; /* 0x0 */
} Handle_82566CA8;

typedef struct Definition_82566CA8 {
    char pad0[2];
    unsigned char attachToParent; /* 0x2 */
    unsigned char kind;           /* 0x3 */
    char pad4[8];
    float volume; /* 0xc */
} Definition_82566CA8;

typedef struct Source_82566CA8 {
    char pad00[0x1c];
    void *stream; /* 0x1c */
} Source_82566CA8;

typedef struct Sound_82566CA8 {
    char pad000[0xd0];
    Source_82566CA8 *source; /* 0x0d0 */
    char pad0D4[0x34];
    unsigned int handleId; /* 0x108 */
    char pad10C[0x1c];
    unsigned int callbackId; /* 0x128 */
    int unk12C;              /* 0x12c */
} Sound_82566CA8;

typedef struct Parent_82566CA8 {
    char pad00[0xa8];
    unsigned int flags; /* 0xa8 */
} Parent_82566CA8;

typedef struct System_82566CA8 {
    char pad00[0x78];
    char listeners[4]; /* 0x78 */
} System_82566CA8;

typedef struct World_82566CA8 {
    System_82566CA8 *system; /* 0x000 */
    char pad004[0x354];
    unsigned int paused; /* 0x358 */
    char pad35C[0xc];
    int unk368; /* 0x368 */
} World_82566CA8;

typedef struct Event_82566CA8 {
    int type;              /* 0x0 */
    int size;              /* 0x4 */
    Sound_82566CA8 *sound; /* 0x8 */
} Event_82566CA8;

extern void *XMemSet(void *dst, int value, unsigned int size);
extern Definition_82566CA8 *fn_8251F720(Handle_82566CA8 *handle, int load);
extern Sound_82566CA8 *fn_82566A18(World_82566CA8 *world, unsigned char kind, Definition_82566CA8 *definition,
                                   float volume, unsigned int flags, int arg7, float scale, int arg10);
extern unsigned int fn_82512B08(int callback, int context);
extern void fn_82568308(Sound_82566CA8 *sound, System_82566CA8 *system, Definition_82566CA8 *definition,
                        unsigned int looping, int arg);
extern void fn_82568260(Sound_82566CA8 *sound, Definition_82566CA8 *definition);
extern void fn_8265B648(Handle_82566CA8 *handle, unsigned int tag);
extern void fn_82568A30(Sound_82566CA8 *sound, Handle_82566CA8 *handle);
extern void fn_82568980(Sound_82566CA8 *sound);
extern void fn_82567088(Sound_82566CA8 *sound, Parent_82566CA8 *parent);
extern void fn_82569A68(Sound_82566CA8 *sound, int start);
extern void fn_8257C8F0(System_82566CA8 *system, Event_82566CA8 *event);
extern void fn_8257CB40(void *listeners, Event_82566CA8 *event, unsigned char notify);

Sound_82566CA8 *fn_82566CA8(World_82566CA8 *world, Handle_82566CA8 *handle, unsigned int flags,
                            Parent_82566CA8 *parent, int arg7, int wantCallback, float scale, int arg10)
{
    Definition_82566CA8 *definition;
    Sound_82566CA8 *sound;
    Handle_82566CA8 copy;
    Event_82566CA8 event;
    unsigned char kind;

    definition = fn_8251F720(handle, 1);
    if (definition == 0) {
        return 0;
    }
    kind = definition->kind;
    sound = fn_82566A18(world, kind, definition, definition->volume, flags, arg7, scale, arg10);
    sound->handleId = handle->id;
    if (wantCallback != 0) {
        sound->callbackId = fn_82512B08(1, 1);
    }
    fn_82568308(sound, world->system, definition, flags & 4, world->unk368);
    fn_82568260(sound, definition);
    if (sound->source->stream == 0) {
        if (handle->id != 0) {
            copy.id = handle->id;
            fn_8265B648(&copy, 9);
        } else {
            copy.id = 0;
        }
        fn_82568A30(sound, &copy);
    } else {
        fn_82568980(sound);
    }
    if (definition->attachToParent && parent != 0 && world->paused == 0) {
        fn_82567088(sound, parent);
    }
    fn_82569A68(sound, 1);
    XMemSet(&event.sound, 0, sizeof(event.sound));
    event.sound = sound;
    event.type = 0x47;
    event.size = 0xc;
    fn_8257C8F0(world->system, &event);
    fn_8257CB40(world->system->listeners, &event, 1);
    sound->unk12C = 0;
    if (parent != 0) {
        parent->flags &= ~0x80;
    }
    return sound;
}
