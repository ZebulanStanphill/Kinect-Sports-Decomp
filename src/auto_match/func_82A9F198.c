int strcmp(const char *a, const char *b);
int stricmp(const char *a, const char *b);

#define LOWORD(l) ((unsigned short)((unsigned long)(l) & 0xffff))

typedef struct Entry_82A9F198 {
    char name[0x100];  /* 0x000 */
    unsigned int size; /* 0x100 */
} Entry_82A9F198;

typedef union Version_82A9F198 {
    unsigned int whole;

    struct {
        unsigned short major; /* 0x0 */
        unsigned short minor; /* 0x2 */
    } parts;
} Version_82A9F198;

typedef struct Writer_82A9F198 {
    char pad0[0x80];
    Entry_82A9F198 *current; /* 0x80 */
    const char *format;      /* 0x84 */
    char pad88[0x90 - 0x88];
    int status;               /* 0x90 */
    int state;                /* 0x94 */
    unsigned int pending;     /* 0x98 */
    unsigned short count;     /* 0x9c */
    unsigned short count9e;   /* 0x9e */
    Version_82A9F198 version; /* 0xa0 */
} Writer_82A9F198;

extern void fn_82A9C190(Writer_82A9F198 *self, const char *name, unsigned int size);
extern void fn_82A9EE50(Writer_82A9F198 *self, const char *name, unsigned int size);

void fn_82A9F198(Writer_82A9F198 *self, const char *name, unsigned int size)
{
    unsigned short minor;
    unsigned short next;

    if (self->state == 2) {
        if (strcmp(name, self->current->name) == 0 && self->current->size == size) {
            return;
        }
    }
    if (self->version.whole == 0) {
        if (stricmp(self->format, "FXL") != 0) {
            fn_82A9C190(self, name, size);
        } else {
            fn_82A9C190(self, 0, 0);
        }
    }
    if (self->state != 1) {
        minor = LOWORD(self->version.whole);
        if (minor >= 0xfffe) {
            self->status = 0x80004005;
        }
        if (self->count != 0) {
            next = self->count + minor;
        } else {
            next = minor + 1;
        }
        self->version.parts.minor = 0;
        self->version.whole |= LOWORD(next);
    }
    self->count = 0;
    self->count9e = 0;
    self->pending = 0;
    fn_82A9EE50(self, name, size);
    self->state = 2;
}
