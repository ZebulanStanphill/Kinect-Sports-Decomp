typedef struct Cursor_827AF288 {
    int unk0;
    unsigned int position; /* 0x4 */
    unsigned int end;      /* 0x8 */
} Cursor_827AF288;

extern void fn_827AF130(Cursor_827AF288 *self);

void fn_827AF288(Cursor_827AF288 *self, unsigned int count)
{
    if (self->position >= self->end) {
        return;
    }
    if (count == 0) {
        return;
    }
    self->position += count;
    fn_827AF130(self);
}
