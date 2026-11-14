typedef struct Entry_828170D8 {
    char pad[4];
    unsigned int value;
} Entry_828170D8;

typedef struct Reader_828170D8 {
    char pad[0x70];
    int remaining;
} Reader_828170D8;

extern int fn_8281FEB0(Reader_828170D8 *self);
extern unsigned char fn_82817088(Reader_828170D8 *self, Entry_828170D8 **out);

void fn_828170D8(Reader_828170D8 *self, unsigned int *out)
{
    Entry_828170D8 *e;
    if (fn_8281FEB0(self) != 0) {
        while (self->remaining > 0) {
            self->remaining--;
            if (fn_82817088(self, &e)) {
                *out = e->value;
                return;
            }
        }
    }
    *out = 0;
}
