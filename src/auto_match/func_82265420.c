// Sets up a sound/voice slot from its descriptor: copies the descriptor, clears the state,
// prints the name as a wide string and registers the slot's callback.
typedef struct Desc_82265420 {
    char name[0x64];
    float volume;           /* 0x64 */
    char pad68[0xd0 - 0x68];
    int size;               /* 0xd0 */
} Desc_82265420;

typedef struct Obj_82265420 {
    char desc[0xd0];        /* copy of the descriptor's first 0xd0 bytes */
    int padD0;
    int id;                 /* 0xd4 */
    int dd8;                /* 0xd8 */
    int ddc;                /* 0xdc */
    int de0;                /* 0xe0 */
    int de4;                /* 0xe4 */
    float fe8[4];           /* 0xe8 */
    float volume;           /* 0xf8 */
    int padFC;
    int user;               /* 0x100 */
    char pad104[0x120 - 0x104];
    char buffer[0x508 - 0x120]; /* 0x120 */
    int d508;               /* 0x508 */
    int d50c;               /* 0x50c */
    int d510;               /* 0x510 */
    int pad514;
    int d518;               /* 0x518 */
    int d51c;               /* 0x51c */
    int owner;              /* 0x520 */
    int list[2];            /* 0x524 */
    int d52c;               /* 0x52c */
    int pad530[2];
    int d538;               /* 0x538 */
    int d53c;               /* 0x53c */
    char pad540[0x5a4 - 0x540];
    unsigned short wideName[0x40]; /* 0x5a4 */
    int wideLength;         /* 0x624 */
    int callback[3];        /* 0x628 */
} Obj_82265420;

extern void *memcpy(void *, const void *, unsigned int);
extern void fn_82266D28(int *list, int value);
extern void fn_82A1DD38(char *buffer, int size, int count);
extern void fn_82265680(Obj_82265420 *self);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_82528E38(int *callback, int flags, void (*fn)(void), void *context);
extern void fn_82266CC0(void);

Obj_82265420 *fn_82265420(Obj_82265420 *self, Desc_82265420 *desc, int owner, int *id, int user)
{
    float volume;
    int value;

    memcpy(self, desc, 0xd0);
    self->ddc = 0;
    self->de0 = 0;
    self->de4 = 0;
    self->fe8[0] = 0.0f;
    self->fe8[1] = 0.0f;
    self->fe8[2] = 0.0f;
    self->fe8[3] = 0.0f;
    volume = desc->volume;
    self->user = user;
    self->volume = volume;
    self->d508 = 0;
    self->d50c = 0;
    self->d510 = 4;
    self->d518 = 0;
    self->d51c = 0;
    self->owner = owner;
    self->list[0] = 0;
    self->list[1] = 0;
    fn_82266D28(self->list, 0);
    self->d52c = 0;
    self->d538 = 0;
    self->d53c = 1;
    self->callback[0] = 0;
    self->callback[1] = -1;
    self->callback[2] = 0;
    fn_82A1DD38(self->buffer, desc->size, 1000);
    value = *id;
    self->dd8 = 0;
    self->id = value;
    fn_82265680(self);
    self->wideLength = fn_82528EE0(self->wideName, 0x40, L"%hs", self);
    fn_82528E38(self->callback, 0x40017, fn_82266CC0, self);
    return self;
}
