typedef struct String_82E1C540 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
} String_82E1C540;

typedef struct Obj_82E1C540 {
    int pad0;
    String_82E1C540 name;    /* 0x04 */
} Obj_82E1C540;

extern unsigned int strlen(const char *s);
extern String_82E1C540 *fn_82230360(String_82E1C540 *self, const char *s, unsigned int len);

static __forceinline char *Ptr(String_82E1C540 *s)
{
    return s->res < 0x10 ? s->u.buf : s->u.ptr;
}

static __forceinline void Eos(String_82E1C540 *s, unsigned int n)
{
    Ptr(s)[s->size = n] = 0;
}

void fn_82E1C540(Obj_82E1C540 *self, const char *s)
{
    if (s == 0) {
        Eos(&self->name, 0);
        return;
    }
    fn_82230360(&self->name, s, strlen(s));
}
