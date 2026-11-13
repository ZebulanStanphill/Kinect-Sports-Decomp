typedef struct String_824CAAE8 {
    char b[0x1c];
} String_824CAAE8;

typedef struct Elem_824CAAE8 {
    String_824CAAE8 name;
    float v[5];
} Elem_824CAAE8;

typedef struct Vec_824CAAE8 {
    Elem_824CAAE8 *first;
    Elem_824CAAE8 *last;
} Vec_824CAAE8;

extern String_824CAAE8 *fn_82230218(String_824CAAE8 *s, const String_824CAAE8 *src, unsigned int pos, unsigned int n);
extern void fn_82230300(String_824CAAE8 *s, int built, unsigned int new_size);

static __forceinline void Assign_824CAAE8(Elem_824CAAE8 *d, const Elem_824CAAE8 *s)
{
    fn_82230218(&d->name, &s->name, 0, (unsigned int)-1);
    d->v[0] = s->v[0];
    d->v[1] = s->v[1];
    d->v[2] = s->v[2];
    d->v[3] = s->v[3];
    d->v[4] = s->v[4];
}

static __forceinline Elem_824CAAE8 *Move_824CAAE8(Elem_824CAAE8 *src, Elem_824CAAE8 *end, Elem_824CAAE8 *dst)
{
    for (; src != end; src++, dst++) {
        Assign_824CAAE8(dst, src);
    }
    return dst;
}

static __forceinline void Erase_824CAAE8(Vec_824CAAE8 *v, Elem_824CAAE8 *first, Elem_824CAAE8 *last)
{
    Elem_824CAAE8 *end;
    Elem_824CAAE8 *dst;
    Elem_824CAAE8 *p;

    if (first != last) {
        end = v->last;
        dst = Move_824CAAE8(last, end, first);
        end = v->last;
        for (p = dst; p != end; p++) {
            fn_82230300(&p->name, 1, 0);
        }
        v->last = dst;
    }
}

void fn_824CAAE8(Vec_824CAAE8 *v)
{
    Erase_824CAAE8(v, v->first, v->last);
}
