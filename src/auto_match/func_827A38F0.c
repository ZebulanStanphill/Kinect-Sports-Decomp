typedef struct Counter_827A38F0 {
    char pad0[0x10];
    unsigned short count; /* 0x10 */
} Counter_827A38F0;

typedef struct Track_827A38F0 {
    char pad0[0x24];
    Counter_827A38F0 counter; /* 0x24 */
    char pad36[0x2];
    double time; /* 0x38 */
    char pad40[0x28];

    union {
        unsigned short flags;
        unsigned char flagBytes[2];
    } state; /* 0x68 */
} Track_827A38F0;

typedef struct Player_827A38F0 {
    char pad0[0xc];
    Track_827A38F0 *track; /* 0xc */
    char pad10[0x20];
    unsigned int base; /* 0x30 */
    char pad34[0x8];
    unsigned int offset; /* 0x3c */
} Player_827A38F0;

extern const double lbl_82005710;
extern void fn_827A36C0(Track_827A38F0 *track, unsigned int position, int flags, int looping);

static __forceinline void AddCount(Counter_827A38F0 *counter, unsigned short delta)
{
    counter->count += delta;
}

static __forceinline void SetPaused(Track_827A38F0 *track, unsigned char paused)
{
    if ((track->state.flags & 1) == 0 && paused) {
        track->state.flags |= 8;
    } else {
        track->state.flags &= 0xfff7;
    }
    track->time = lbl_82005710;
}

void fn_827A38F0(Player_827A38F0 *self, unsigned int offset)
{
    self->offset = offset;
    AddCount(&self->track->counter, 0xffff);
    SetPaused(self->track, 1);
    fn_827A36C0(self->track, self->base + self->offset, 0, self->track->state.flagBytes[0] & 1);
}
