typedef struct Input_8270EC80 {
    char pad0[0xc];
    char queue[0x658 - 0xc];
    unsigned char keys[0x20];
} Input_8270EC80;

extern void fn_8270EAD8(void *queue, short key, unsigned char a, unsigned int time,
                        unsigned int kind, unsigned char b);

void fn_8270EC80(Input_8270EC80 *self, int key, unsigned char a, unsigned char b)
{
    if (key >= 0 && key < 0xe5) {
        self->keys[key >> 3] |= 1 << (key - (key >> 3) * 8);
        fn_8270EAD8(self->queue, (short)key, a, 0, 5, b);
    }
}
