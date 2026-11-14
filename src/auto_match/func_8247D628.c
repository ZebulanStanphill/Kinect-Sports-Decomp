long _InterlockedExchangeAdd(long volatile *addend, long value);

typedef struct Flags_8247D628 {
    unsigned char f0 : 1;
    unsigned char bit6 : 1;
    unsigned char rest : 6;
} Flags_8247D628;

typedef struct Info_8247D628 {
    char pad[8];
    Flags_8247D628 flags;
} Info_8247D628;

typedef struct Inner_8247D628 {
    char pad[8];
    Info_8247D628 *info;
} Inner_8247D628;

typedef struct Root_8247D628 {
    char pad[0xf0];
    Inner_8247D628 *inner;
} Root_8247D628;

typedef struct Globals_8247D628 {
    Root_8247D628 *root;
    char pad4[0x41];
    unsigned char enabled;
    char pad46[0x6c - 0x46];
} Globals_8247D628;

typedef struct Counter_8247D628 {
    char pad[0xa0];
    long count;
} Counter_8247D628;

typedef struct Self_8247D628 {
    char pad[0x88];
    int active;
} Self_8247D628;

extern Globals_8247D628 lbl_83265988;
extern Counter_8247D628 *lbl_832767C8;

unsigned char fn_8247D628(Self_8247D628 *self)
{
    int active;

    if (lbl_83265988.enabled && _InterlockedExchangeAdd(&lbl_832767C8->count, 0) <= 0)
        active = self->active;
    else
        active = 0;
    if (active != 0)
        return lbl_83265988.root->inner->info->flags.bit6 | 4;
    return 0;
}
