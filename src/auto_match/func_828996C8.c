typedef struct State_828996C8 {
    void **vt;
    int f4;
    int f8;
    int owner;
    int f10;
    int a[4];               /* 0x14 */
    int b[4];               /* 0x24 */
    unsigned char c[4];     /* 0x34 */
} State_828996C8;

typedef struct Self_828996C8 {
    char pad[0x1c];
    State_828996C8 *state;  /* 0x1c */
} Self_828996C8;

extern void fn_82898A38(Self_828996C8 *self, int index);

void fn_828996C8(Self_828996C8 *self, int index)
{
    State_828996C8 *state = self->state;
    int i;

    for (i = 0; i < 4; i++) {
        state->a[i] = 0;
        state->c[i] = 1;
    }
    fn_82898A38(self, index);
}
