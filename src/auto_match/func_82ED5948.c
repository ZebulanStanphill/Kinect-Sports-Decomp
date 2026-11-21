typedef struct Player_82ED5948 {
    char pad0[0x4];
    int format; /* 0x04 */
    char pad8[0x4eec];
    void *decoder; /* 0x4ef4 */
    char pad4ef8[0x1e48];
    int looping; /* 0x6d40 */
} Player_82ED5948;

extern void *fn_82F17A50(int *status, int a, int b, int c, int d, int e, int f, int g, int h, int mode, int i,
                         int j, int k, int l);
extern int fn_82F175E8(void *decoder, int a, int b, int c, int d, int e, int f, int g, int h, int mode, int i,
                       int j, int k);
extern int fn_82F17548(void *decoder, int a, int b, int mode, int c, int d);

static __forceinline int GetMode_82ED5948(Player_82ED5948 *self)
{
    if (self->format == 8 && self->looping == 0) {
        return 2;
    }
    return 0;
}

int fn_82ED5948(Player_82ED5948 *self, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
    int status = 0;

    if (self->decoder == 0) {
        self->decoder = fn_82F17A50(&status, a, b, c, d, 0, 0, e, f, GetMode_82ED5948(self), 0, 0, 0, 1);
        if (self->decoder == 0) {
            return 0;
        }
        if (status != 0 && status != 7) {
            return 0;
        }
    } else {
        status = fn_82F175E8(self->decoder, a, b, c, d, 0, 0, e, f, GetMode_82ED5948(self), 0, 0, 0);
    }
    if (self->decoder != 0 && (status == 0 || status == 7)) {
        status = fn_82F17548(self->decoder, g, h, GetMode_82ED5948(self), i, j);
        if (status == 0 || status == 7) {
            return 1;
        }
    }
    return 0;
}
