typedef struct Reader_82792710 {
    unsigned int position; /* 0x0 */
    unsigned int pad4;
    unsigned int end; /* 0x8 */
} Reader_82792710;

typedef struct Tokenizer_82792710 {
    int pad0;
    int state;              /* 0x04 */
    Reader_82792710 reader; /* 0x08 */
    unsigned int current;   /* 0x14 */
} Tokenizer_82792710;

extern void fn_82791560(Reader_82792710 *reader);
extern void fn_82791758(Tokenizer_82792710 *self);
extern void fn_82791850(Tokenizer_82792710 *self);
extern void fn_827918F8(Tokenizer_82792710 *self);

static __forceinline int HasMore_82792710(Reader_82792710 *reader)
{
    return reader->position < reader->end;
}

int fn_82792710(Tokenizer_82792710 *self)
{
    int next;

    if (self->state == 1) {
        return 1;
    }
    if (!(self->state & 0x8000)) {
        switch (self->state) {
        case 2:
            fn_82791758(self);
        case 7:
        case 8:
            while (self->state == 7 || self->state == 8) {
                fn_827918F8(self);
            }
        case 9:
            if (self->current == '>') {
                fn_82791560(&self->reader);
                self->state = 0x8002;
            }
            break;
        case 3:
            while (HasMore_82792710(&self->reader) && self->current != '<') {
                fn_82791560(&self->reader);
            }
            self->state = 0x8003;
            break;
        case 4:
            while (HasMore_82792710(&self->reader) && self->current != '>') {
                fn_82791560(&self->reader);
            }
            if (self->current == '>') {
                fn_82791560(&self->reader);
                self->state = 0x8004;
            } else {
                self->state = 1;
            }
            break;
        }
    }
    if (self->state == 1) {
        return 1;
    }
    next = 0;
    while (HasMore_82792710(&self->reader)) {
        if (next != 0) {
            break;
        }
        switch (self->current) {
        case 0:
            next = 1;
            break;
        case '/':
            if (self->state == 9 || self->state == 6) {
                fn_82791560(&self->reader);
                if (self->current == '>') {
                    fn_82791560(&self->reader);
                    next = 0x8005;
                } else {
                    next = 1;
                }
            } else {
                next = 3;
            }
            break;
        case '<':
            fn_82791560(&self->reader);
            if (self->current == '!') {
                fn_82791850(self);
            } else if (self->current == '/') {
                fn_82791560(&self->reader);
                next = 4;
            } else {
                next = 2;
            }
            break;
        default:
            next = 3;
            break;
        }
    }
    if (next == 0) {
        self->state = 0x8000;
    } else {
        self->state = next;
    }
    return self->state;
}
