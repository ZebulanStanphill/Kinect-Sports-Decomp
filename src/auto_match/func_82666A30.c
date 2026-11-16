struct String_82666A30 {
    char padding[0x10];
    unsigned int length; /* 0x10 */
};

extern char *fn_8265DDA0(struct String_82666A30 *self);
extern unsigned char fn_8223D428(const char *left, const char *right);
extern int fn_822462B0(const char *left, const char *right, unsigned int count);

unsigned int fn_82666A30(struct String_82666A30 *self, const char *text, unsigned int offset,
                         unsigned int count)
{
    char *cursor;
    if (count == 0) {
        return offset < self->length ? offset : self->length;
    }
    if (count <= self->length) {
        for (cursor = fn_8265DDA0(self) + (offset < self->length - count ? offset : self->length - count);;
             --cursor) {
            if (fn_8223D428(cursor, text) && fn_822462B0(cursor, text, count) == 0) {
                return cursor - fn_8265DDA0(self);
            } else if (cursor == fn_8265DDA0(self)) {
                break;
            }
        }
    }
    return -1;
}
