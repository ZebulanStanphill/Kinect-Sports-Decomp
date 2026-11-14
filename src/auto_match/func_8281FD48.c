int strcmp(const char *a, const char *b);

typedef struct Entry_8281FD48 {
    unsigned char data[0x21];   /* name offset at 0x0, base at 0xd, offset at 0x11 */
} Entry_8281FD48;

typedef struct Header_8281FD48 {
    char pad[0x51];
    unsigned char count;        /* 0x51 */
} Header_8281FD48;

typedef struct Archive_8281FD48 {
    char pad0[0x1c];
    Header_8281FD48 *header;    /* 0x1c */
    char pad20[0x10];
    Entry_8281FD48 *entries;    /* 0x30 */
    char *names;                /* 0x34 */
} Archive_8281FD48;

#define FIELD(e, off) (*(int *)&(e)->data[off])

void fn_8281FD48(Archive_8281FD48 *self, const char *name, int *out)
{
    unsigned char i;
    const char *s;

    *out = 0;
    for (i = 0; i < self->header->count; i++) {
        s = self->names + FIELD(&self->entries[i], 0);
        if (*s != 0 && strcmp(s, name) == 0) {
            *out = FIELD(&self->entries[i], 0x11) + FIELD(&self->entries[i], 0xd);
            return;
        }
    }
}
