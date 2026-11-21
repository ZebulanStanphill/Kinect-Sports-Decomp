#define __lwsync() __emit(0x7C2004AC)
long _InterlockedExchange(long volatile *target, long value);
long _InterlockedIncrement(long volatile *addend);

typedef struct Lock_82E66BD8 {
    long state;
} Lock_82E66BD8;

typedef struct Object_82E66BD8 Object_82E66BD8;

typedef struct Player_82E66BD8 {
    Object_82E66BD8 *voices[0x80]; /* 0x000 */
    Object_82E66BD8 *source;       /* 0x200 */
    Object_82E66BD8 *master;       /* 0x204 */
    Object_82E66BD8 *submixA;      /* 0x208 */
    Object_82E66BD8 *submixB;      /* 0x20c */
    int created;                   /* 0x210 */
    char pad214[0x4];
    unsigned int flags; /* 0x218 */
    Lock_82E66BD8 lock; /* 0x21c */
    int stopping;       /* 0x220 */
    void *event;        /* 0x224 */
    char pad228[0xc];
    int refCount; /* 0x234 */
} Player_82E66BD8;

typedef struct State_82E66BD8 {
    char pad0[0x214];
    long users; /* 0x214 */
} State_82E66BD8;

extern State_82E66BD8 lbl_8323FF68;
extern void fn_82E664E8(Lock_82E66BD8 *lock);
extern int fn_82E667D8(Player_82E66BD8 *self);
extern int fn_82EEACD0(int create, int kind, Object_82E66BD8 **out);
extern int fn_82EE8EE0(int create, int kind, Object_82E66BD8 **out);
extern int fn_82EE8830(Object_82E66BD8 *object, unsigned int value);
extern int fn_82EEAA60(void);
extern int fn_82EE9680(void);

int fn_82E66BD8(Player_82E66BD8 *self, unsigned int options)
{
    int hr;

    hr = 0;
    fn_82E664E8(&self->lock);
    if (self->refCount == 0) {
        hr = fn_82E667D8(self);
        if (hr < 0) {
            goto done;
        }
        _InterlockedIncrement(&lbl_8323FF68.users);
    }
    if (self->created == 0) {
        hr = fn_82EEACD0((int)fn_82EEAA60, 2, &self->submixA);
        if (hr < 0) {
            goto done;
        }
        hr = fn_82EEACD0((int)fn_82EEAA60, 1, &self->submixB);
        if (hr < 0) {
            goto done;
        }
        hr = fn_82EE8EE0((int)fn_82EE9680, 1, &self->voices[0]);
        if (hr < 0) {
            goto done;
        }
        hr = fn_82EE8830(self->voices[0], 0xf);
        if (hr < 0) {
            goto done;
        }
        hr = fn_82EE8EE0((int)fn_82EEAA60, 0, &self->voices[1]);
        if (hr < 0) {
            goto done;
        }
        hr = fn_82EE8EE0((int)fn_82EEAA60, 0, &self->source);
        if (hr < 0) {
            goto done;
        }
        hr = fn_82EE8EE0((int)fn_82EEAA60, 1, &self->voices[2]);
        if (hr < 0) {
            goto done;
        }
        self->created = 1;
    }
    if ((self->flags & 1) != 0 && (options & 1) == 0) {
        self->flags &= ~1;
    }
    self->refCount++;
done:
    __lwsync();
    _InterlockedExchange(&self->lock.state, 0);
    return hr;
}
