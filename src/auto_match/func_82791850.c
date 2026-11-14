typedef struct Reader_82791850 {
    unsigned int pos;
    int pad;
    unsigned int end;
    unsigned int ch;
} Reader_82791850;

typedef struct Parser_82791850 {
    char pad[8];
    Reader_82791850 reader;
} Parser_82791850;

extern void fn_82791560(Reader_82791850 *reader);

static __forceinline int HasMore(Reader_82791850 *r)
{
    return r->pos < r->end;
}

void fn_82791850(Parser_82791850 *self)
{
    int state = 0;
    while (self->reader.ch != 0 && state != 3) {
        fn_82791560(&self->reader);
        if (self->reader.ch == '-') {
            if (state < 2) {
                state++;
            }
        } else if (self->reader.ch == '>') {
            if (state == 2) {
                state = 3;
            }
        } else {
            state = 0;
        }
    }
    if (HasMore(&self->reader) && state == 3) {
        fn_82791560(&self->reader);
    }
}
