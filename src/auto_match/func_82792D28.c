typedef struct Reader_82792D28 {
    const unsigned short *pos;
    const unsigned short *next;
    const unsigned short *end;
    unsigned int ch;
    unsigned char expandEntities;
} Reader_82792D28;

typedef struct Parser_82792D28 {
    int reserved;
    int state;
    Reader_82792D28 reader;
    unsigned short *buffer;
    int capacity;
    int length;
    unsigned char normalizeSpace;
} Parser_82792D28;

extern const char lbl_820094C8[];
extern int fn_826BCD88(const char *table, unsigned short ch);
extern void fn_82790148(Parser_82792D28 *self, const unsigned short *text, int length);
extern void fn_827901D8(Parser_82792D28 *self, unsigned int ch);
extern void fn_82791560(Reader_82792D28 *reader);

extern unsigned int fn_82790A58(Reader_82792D28 *reader);
extern void fn_827917E8(Parser_82792D28 *self);

static __forceinline unsigned char IsEntity(unsigned short ch)
{
    if (ch == '&') {
        return 1;
    }
    return 0;
}

static __forceinline unsigned char ShouldExpand(const Reader_82792D28 *reader, const unsigned short *pos)
{
    return reader->expandEntities && *pos == '&';
}

int fn_82792D28(Parser_82792D28 *self, const unsigned short **text, int *length)
{
    if (self->state == 3) {
        Reader_82792D28 *reader = &self->reader;
        unsigned char expanded = 0;
        unsigned char alreadyExpanding;
        const unsigned short *pos;

        *text = reader->pos;
        *length = 0;
        alreadyExpanding = reader->expandEntities;
        reader->expandEntities = 1;
        if (!alreadyExpanding && IsEntity(*reader->pos)) {
            fn_82790A58(reader);
        }

        pos = reader->pos;
        if (pos < reader->end) {
            do {
                unsigned int ch = self->reader.ch;
                unsigned char entity;
                if (ch == '<' && !ShouldExpand(reader, pos)) {
                    break;
                }
                if (fn_826BCD88(lbl_820094C8, (unsigned short)ch) && self->normalizeSpace) {
                    if (!expanded) {
                        self->length = 0;
                        fn_82790148(self, *text, *length);
                        expanded = 1;
                    }
                    fn_827901D8(self, ' ');
                    fn_827917E8(self);
                } else {
                    entity = ShouldExpand(reader, pos);
                    if (entity) {
                        if (!expanded) {
                            self->length = 0;
                            fn_82790148(self, *text, *length);
                            expanded = 1;
                        }
                        fn_827901D8(self, self->reader.ch);
                    } else {
                        if (expanded) {
                            fn_82790148(self, reader->pos, reader->next - pos);
                        } else {
                            *length += reader->next - pos;
                        }
                    }
                    fn_82791560(reader);
                }
                pos = reader->pos;
            } while (pos < reader->end);
        }
        if (expanded) {
            *text = self->buffer;
            *length = self->length;
        }
        if (reader->pos < reader->end && (self->reader.ch != '<' || ShouldExpand(reader, reader->pos))) {
            self->state = 1;
        } else {
            self->state |= 0x8000;
        }
        self->reader.expandEntities = 0;
    }
    return self->state != 1;
}
