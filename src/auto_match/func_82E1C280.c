typedef struct String_82E1C280 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
} String_82E1C280;

typedef struct Obj_82E1C280 {
    char pad0[0x3c];
    String_82E1C280 name;    /* 0x3c */
} Obj_82E1C280;

extern unsigned int strlen(const char *s);
extern String_82E1C280 *fn_82230360(String_82E1C280 *self, const char *s, unsigned int len);

static __forceinline char *Ptr(String_82E1C280 *s)
{
    return s->res < 0x10 ? s->u.buf : s->u.ptr;
}

static __forceinline void Eos(String_82E1C280 *s, unsigned int n)
{
    Ptr(s)[s->size = n] = 0;
}

void fn_82E1C280(Obj_82E1C280 *self, const char *s)
{
    if (s == 0) {
        Eos(&self->name, 0);
        return;
    }
    fn_82230360(&self->name, s, strlen(s));
}
