typedef struct Str_82865E68 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int capacity;
} Str_82865E68;

typedef struct Tag_82865E68 {
    unsigned char unused;
} Tag_82865E68;

extern void fn_82865D68(Str_82865E68 *self, char *first, char *last, int a, int b, Tag_82865E68 tag);

static __forceinline char *Ptr(Str_82865E68 *s) { return s->capacity >= 16 ? s->u.ptr : s->u.buf; }
void fn_82865E68(Str_82865E68 *self, int a, int b)
{
    Tag_82865E68 tag;
    char *last = Ptr(self) + self->size;
    fn_82865D68(self, Ptr(self), last, a, b, tag);
}
