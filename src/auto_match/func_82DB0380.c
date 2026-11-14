extern void fn_82D7C038(unsigned char *rec, float a, float b, int c);

typedef struct {
    char pad[0x58];
    int lastSize;
    unsigned char **blocks;
    int count;
} Stream_82DB0380;

void fn_82DB0380(Stream_82DB0380 *self, float a, float b, int c)
{
    int i = 0;
    unsigned char *p;
    unsigned char *end;
    int *count = &self->count;

    if (0 < self->count) {
        do {
            p = self->blocks[i];
            i++;
            if (i == self->count) {
                end = p + self->lastSize;
            } else {
                end = p + 0x200;
            }
            for (; p < end; p += p[3]) {
                fn_82D7C038(p, a, b, c);
            }
        } while (i < *count);
    }
}
