typedef struct Stream_82BF2560 {
    int f0;
    unsigned int id;
    int f8;
    char padC[0x20 - 0xc];
    char *buffer;
    char *cursor;
    int f28;
    int size;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
} Stream_82BF2560;

extern void fn_82BF2490(Stream_82BF2560 *s, int size);
extern void *memset(void *dst, int value, unsigned int size);

int fn_82BF2560(Stream_82BF2560 *s, unsigned int id)
{
    if (id == 0) {
        s->id = 0;
        return 900;
    }
    if (id != s->id) {
        if (s->buffer == 0 || s->size == 0)
            fn_82BF2490(s, 0x400);
        s->id = id;
        s->f30 = 0;
        s->f8 = 0;
        memset(s->buffer, 0, s->size);
        s->f28 = 0;
        s->f34 = 0;
        s->f38 = 0;
        s->f3c = 0;
        s->f40 = 0;
        s->cursor = s->buffer;
    }
    return 0;
}
