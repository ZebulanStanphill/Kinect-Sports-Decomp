#define __lwsync() __emit(0x7C2004AC)
long _InterlockedExchange(long volatile *target, long value);

typedef struct Lock_82E668C0 {
    long state;
} Lock_82E668C0;

typedef struct Object_82E668C0 Object_82E668C0;

typedef struct ObjectVtbl_82E668C0 {
    void *f0;
    void *f4;
    void (*Release)(Object_82E668C0 *self); /* 0x08 */
} ObjectVtbl_82E668C0;

struct Object_82E668C0 {
    ObjectVtbl_82E668C0 *vt;
};

typedef struct Player_82E668C0 {
    Object_82E668C0 *voices[0x80]; /* 0x000 */
    Object_82E668C0 *source;       /* 0x200 */
    Object_82E668C0 *master;       /* 0x204 */
    Object_82E668C0 *submixA;      /* 0x208 */
    Object_82E668C0 *submixB;      /* 0x20c */
    int created;                   /* 0x210 */
    char pad214[0x4];
    int current;        /* 0x218 */
    Lock_82E668C0 lock; /* 0x21c */
    int stopping;       /* 0x220 */
    void *event;        /* 0x224 */
    char pad228[0xc];
    int refCount; /* 0x234 */
} Player_82E668C0;

extern char lbl_8323FF68[];
extern void fn_82E664E8(Lock_82E668C0 *lock);
extern int fn_82A1E7D8(void *event);
extern void fn_82E66750(void *state);
extern int fn_82A1E650(void *event, unsigned int timeout);
extern void fn_82EE86E0(Object_82E668C0 *object);
extern void fn_82E66868(Player_82E668C0 *self);

void fn_82E668C0(Player_82E668C0 *self)
{
    int i;
    Object_82E668C0 *voice;

    fn_82E664E8(&self->lock);
    if (self->refCount <= 1) {
        if (self->refCount == 1) {
            fn_82A1E7D8(self->event);
            fn_82E66750(lbl_8323FF68);
            self->stopping = 1;
            fn_82A1E650(self->event, 200);
            if (self->created != 0) {
                if (self->master != 0) {
                    fn_82EE86E0(self->master);
                    self->master->vt->Release(self->master);
                    self->master = 0;
                }
                if (self->source != 0) {
                    fn_82EE86E0(self->source);
                    self->source->vt->Release(self->source);
                    self->source = 0;
                }
                for (i = 0; i < 0x80; i++) {
                    voice = self->voices[i];
                    if (voice != 0) {
                        fn_82EE86E0(voice);
                        voice->vt->Release(voice);
                    }
                    self->voices[i] = 0;
                }
                if (self->submixA != 0) {
                    fn_82EE86E0(self->submixA);
                    self->submixA->vt->Release(self->submixA);
                    self->submixA = 0;
                }
                if (self->submixB != 0) {
                    fn_82EE86E0(self->submixB);
                    self->submixB->vt->Release(self->submixB);
                    self->submixB = 0;
                }
                self->created = 0;
            }
            self->refCount = 0;
            self->stopping = 0;
            self->current = -1;
            fn_82E66868(self);
        }
    } else {
        self->refCount--;
    }
    __lwsync();
    _InterlockedExchange(&self->lock.state, 0);
}
