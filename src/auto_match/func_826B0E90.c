typedef struct Rc_826B0E90 { int pad[2]; int rc; } Rc_826B0E90;
typedef struct Key_826B0E90 { Rc_826B0E90 *p; } Key_826B0E90;
typedef struct Entry_826B0E90 { int key; int value; } Entry_826B0E90;
extern Entry_826B0E90 *fn_8273E508(void *hash, Key_826B0E90 *key);
extern void fn_826944C8(Rc_826B0E90 *p);

static __forceinline void Release(Key_826B0E90 *k)
{
    Rc_826B0E90 *p = k->p;
    if (--p->rc == 0) {
        fn_826944C8(p);
    }
}

static __forceinline int *Get(void *hash, Key_826B0E90 *key)
{
    Entry_826B0E90 *e = fn_8273E508(hash, key);
    return e ? &e->value : 0;
}

int *fn_826B0E90(char *self, Key_826B0E90 *key)
{
    int *v = Get(self + 0x280, key);
    if (v != 0) {
        Release(key);
        return v;
    }
    Release(key);
    return 0;
}
