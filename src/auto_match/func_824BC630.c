long _InterlockedIncrement(long volatile *);

typedef struct Obj_824BC630 {
    int f0;
    long *videoCount;   /* 0x4 */
    long *stillCount;   /* 0x8 */
    long *flashCount;   /* 0xc */
    int key;            /* 0x10 */
} Obj_824BC630;

extern unsigned int fn_828647D8(int *key);
extern int lbl_8328111C;

int fn_824BC630(Obj_824BC630 *self, unsigned int id, const unsigned char *p)
{
    const unsigned char *q;
    unsigned char c;
    unsigned char b;

    if (fn_828647D8(&self->key) == id) {
        q = p;
        c = *p;
        b = 0x76;
        if (c == 0x76) {
            int d = (int)"video" - (int)p;
            do {
                q++;
                if (c == 0) goto video;
                b = q[d];
                c = *q;
            } while (c == b);
        }
        if (c - b == 0) {
video:
            if (lbl_8328111C != 0)
                _InterlockedIncrement(self->videoCount);
            else
                _InterlockedIncrement(self->stillCount);
            return 0;
        }
        q = p;
        c = *p;
        b = 0x73;
        if (c == 0x73) {
            int d = (int)"still" - (int)p;
            do {
                q++;
                if (c == 0) goto still;
                b = q[d];
                c = *q;
            } while (c == b);
        }
        if (c - b == 0) {
still:
            _InterlockedIncrement(self->stillCount);
            return 0;
        }
        q = p;
        c = *p;
        b = 0x66;
        if (c == 0x66) {
            int d = (int)"flash" - (int)p;
            do {
                q++;
                if (c == 0) goto flash;
                b = q[d];
                c = *q;
            } while (c == b);
        }
        if (c - b == 0) {
flash:
            _InterlockedIncrement(self->flashCount);
        }
    }
    return 0;
}
