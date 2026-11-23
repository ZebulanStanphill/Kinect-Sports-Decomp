typedef struct Entry_8260EB78 {
    char pad0[0x10];
    struct Object_8260FC90 *object; /* 0x10 */
    char pad14[0x30 - 0x14];
} Entry_8260EB78;

typedef struct Object_8260FC90 {
    char pad0[0xa8];
    float volume; /* 0xa8 */
} Object_8260FC90;

typedef struct Target_8260FC90 {
    char pad0[0x7fc];
    void *sounds; /* 0x7fc */
} Target_8260FC90;

typedef struct Self_8260FC90 {
    char pad0[0x60];
    Target_8260FC90 **target; /* 0x60 */
    char pad64[0xd8 - 0x64];
    Entry_8260EB78 *entries; /* 0xd8 */
} Self_8260FC90;

typedef struct Event_8260FC90 {
    int pad0;
    float start; /* 0x4 */
    float end;   /* 0x8 */
    int padc;
    unsigned char id; /* 0x10 */
    char pad11[3];
    unsigned int key; /* 0x14 */
    int sound;        /* 0x18 */
    int hasDuration;  /* 0x1c */
    float volume;     /* 0x20 */
    float chance;     /* 0x24 */
    int effect;       /* 0x28 */
    int effectData;   /* 0x2c */
} Event_8260FC90;

typedef struct Request_8260FC90 {
    int type;                /* 0x0 */
    Object_8260FC90 *object; /* 0x4 */
    int sound;               /* 0x8 */
} Request_8260FC90;

typedef struct Sound_8260FC90 {
    unsigned int flags; /* 0x0 */
    char pad4[0x28];
    float volume; /* 0x2c */
} Sound_8260FC90;

extern int lbl_83265A28;
extern Request_8260FC90 lbl_832748EC;
extern int fn_82520780(int *random, float chance);
extern int fn_82569980(Self_8260FC90 *self, unsigned char id);
extern Sound_8260FC90 *fn_825BC4F8(Object_8260FC90 *object, Request_8260FC90 *request);
extern int fn_82599B18(void **table, unsigned int *key, Sound_8260FC90 *sound);
extern void fn_826244E0(Target_8260FC90 *target, float duration);
extern void fn_82563230(Object_8260FC90 *object, int effect, int *data, int a, int b);

static __forceinline Object_8260FC90 *Lookup(Self_8260FC90 *self, unsigned char id)
{
    int index = fn_82569980(self, id);
    if (index != -1) {
        return self->entries[index].object;
    }
    return 0;
}

static __forceinline int HasData(const int *data)
{
    return data != 0 ? *data != 0 : 0;
}

void fn_8260FC90(Self_8260FC90 *self, int unused1, Event_8260FC90 *event, int unused3, int kind)
{
    Object_8260FC90 *object;
    Target_8260FC90 *target;
    Sound_8260FC90 *playing;

    if (kind == 0 && fn_82520780(&lbl_83265A28, event->chance) != 0) {
        object = Lookup(self, event->id);
        if (object != 0) {
            int sound = event->sound;

            target = *self->target;
            lbl_832748EC.type = 0;
            lbl_832748EC.object = object;
            lbl_832748EC.sound = sound;
            playing = fn_825BC4F8(object, &lbl_832748EC);
            playing->volume = object->volume * event->volume;
            playing->flags |= 0x40;
            if (fn_82599B18(&target->sounds, &event->key, playing) != -1) {
                fn_826244E0(target, event->hasDuration != 0 ? event->end - event->start : -2.0f);
            }
            if (HasData(&event->effectData)) {
                fn_82563230(object, event->effect, &event->effectData, 0, 0);
            }
        }
    }
}
