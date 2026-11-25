typedef struct Reader_82791A60 {
    const unsigned short *pos;
    const unsigned short *next;
    const unsigned short *end;
    unsigned int ch;
    unsigned char expandEntities;
} Reader_82791A60;

typedef struct Parser_82791A60 {
    int pad[2];
    Reader_82791A60 reader;
    unsigned short *buffer;
    int capacity;
    int length;
} Parser_82791A60;

extern const char lbl_820094C8[];
extern int fn_826BCD88(const char *table, unsigned short ch);
extern void fn_82790148(Parser_82791A60 *self, const unsigned short *text, int length);
extern void fn_827901D8(Parser_82791A60 *self, unsigned int ch);
extern void fn_82791560(Reader_82791A60 *reader);

void fn_82791A60(Parser_82791A60 *self, const unsigned short **text, int *length)
{
    Reader_82791A60 *reader = &self->reader;
    unsigned char expanded = 0;
    const unsigned short *pos;

    *text = self->reader.pos;
    *length = 0;
    pos = reader->pos;
    if (pos < reader->end)
        do {
            unsigned int ch = self->reader.ch;
            unsigned char entity;
            if (ch == '=' || ch == '>' || ch == '<' || ch == '/') {
                break;
            }
            if (fn_826BCD88(lbl_820094C8, (unsigned short)ch) != 0) {
                break;
            }
            entity = reader->expandEntities && *pos == '&';
            if (entity) {
                if (!expanded) {
                    self->length = 0;
                    fn_82790148(self, *text, *length);
                    expanded = 1;
                }
                fn_827901D8(self, self->reader.ch);
            } else {
                if (expanded) {
                    int delta = (const char *)reader->next - (const char *)pos;
                    fn_82790148(self, self->reader.pos, delta >> 1);
                } else {
                    int delta = (const char *)reader->next - (const char *)pos;
                    *length = (delta >> 1) + *length;
                }
            }
            fn_82791560(reader);
            pos = reader->pos;
        } while (pos < reader->end);
    if (expanded) {
        *text = self->buffer;
        *length = self->length;
    }
}
