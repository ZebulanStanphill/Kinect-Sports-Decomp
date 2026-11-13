typedef unsigned U;
typedef struct Handlers_83013618 { void *a; void *b; } Handlers_83013618;
typedef struct Entry_83013618 { U key; Handlers_83013618 h; } Entry_83013618;
typedef struct Table_83013618 { Entry_83013618 *begin, *end; } Table_83013618;
extern Table_83013618 lbl_832645D8;
extern void *fn_82FFE5B8(Table_83013618 *t, U key, Handlers_83013618 value);

static __forceinline Handlers_83013618 *Find(Table_83013618 *self, U key)
{
    Entry_83013618 *p = self->begin, *end = self->end;
    for (; p != end && p->key != key; p++) {}
    return (p != end) != 0 ? &p->h : 0;
}

int fn_83013618(U a, U b, U c, void *f, void *g)
{
    U key = ((c << 12) + b) * 16 + (a & 0xf);
    if (Find(&lbl_832645D8, key))
        return 2;
    if (f != 0 && g != 0) {
        Handlers_83013618 h;
        h.a = f;
        h.b = g;
        return (fn_82FFE5B8(&lbl_832645D8, key, h) == 0) + 1;
    }
    return 0x1f;
}
