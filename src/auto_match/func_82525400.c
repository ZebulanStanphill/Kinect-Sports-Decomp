typedef struct Player_82525400 Player_82525400;

typedef struct PlayerVtbl_82525400 {
    void *slot0;
    void *slot4;
    void *slot8;
    void (*Reset)(Player_82525400 *self); /* 0xc */
    void *slot10;
    int (*IsActive)(Player_82525400 *self); /* 0x14 */
} PlayerVtbl_82525400;

struct Player_82525400 {
    PlayerVtbl_82525400 *vtbl; /* 0x0 */
    char pad4[0x1dc];
    char leftTarget[0x3e8];  /* 0x1e0 */
    char rightTarget[0x3ec]; /* 0x5c8 */
    int side;                /* 0x9b4 */
    int dirty;               /* 0x9b8 */
    char pad9BC[0x148];
    void *buffer;       /* 0xb04 */
    void *stream;       /* 0xb08 */
    unsigned int delay; /* 0xb0c */
    int release;        /* 0xb10 */
    char padB14[0x54];
    void *table; /* 0xb68 */
    char padB6C[0xd74];
    unsigned int values[5]; /* 0x18e0 */
    unsigned int state;     /* 0x18f4 */
};

extern unsigned int lbl_831C2114[];

extern void fn_82524548(Player_82525400 *self);
extern float *fn_827EFAE8(void *table, unsigned short id);
extern void fn_82526260(void *target, void *buffer, void *stream);
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82A1F238(void *p);

void fn_82525400(Player_82525400 *self)
{
    int i;

    if (self->vtbl->IsActive(self) == 0) {
        self->vtbl->Reset(self);
    } else if (self->dirty != 0) {
        fn_82524548(self);
        self->dirty = 0;
    }
    if (self->table != 0) {
        for (i = 0; i < 5; i++)
            self->values[i] =
                (unsigned int)(*fn_827EFAE8(self->table, (unsigned short)lbl_831C2114[i]) - 0.5f);
        if (self->values[3] == 0xb)
            self->values[4] = 0xc;
        else if (self->values[3] == 0xc)
            self->values[4] = 0xb;
    }
    if (self->delay != 0 && --self->delay == 0) {
        if (self->release != 0) {
            if (self->buffer == 0 || self->stream == 0)
                return;
            fn_82526260(self->side == 1 ? self->rightTarget : self->leftTarget, self->buffer, self->stream);
            self->buffer = 0;
        } else {
            if (self->buffer != 0) {
                fn_8265C990(self->buffer, 0x21006000);
                self->buffer = 0;
            }
            if (self->stream == 0)
                return;
            fn_82A1F238(self->stream);
        }
        self->stream = 0;
    }
}
