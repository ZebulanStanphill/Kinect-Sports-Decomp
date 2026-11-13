typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Str_82302CE0 {
    int words[7];
} Str_82302CE0;

typedef struct Elem_82302CE0 {
    Str_82302CE0 name;      /* 0x00 */
    int id;                 /* 0x1c */
    __vector4 v;            /* 0x20 */
    float f30;              /* 0x30 */
    float f34;              /* 0x34 */
    int x38;                /* 0x38 */
} Elem_82302CE0;

typedef struct Vec_82302CE0 {
    Elem_82302CE0 *first;
    Elem_82302CE0 *last;
} Vec_82302CE0;

extern void fn_82230218(Str_82302CE0 *self, const Str_82302CE0 *src, unsigned int pos, unsigned int count);
extern void fn_82230300(Str_82302CE0 *self, int built, unsigned int newSize);

static __forceinline void Assign_82302CE0(Elem_82302CE0 *d, const Elem_82302CE0 *s)
{
    fn_82230218(&d->name, &s->name, 0, (unsigned int)-1);
    d->id = s->id;
    d->v = s->v;
    d->f30 = s->f30;
    d->f34 = s->f34;
    d->x38 = s->x38;
}

static __forceinline Elem_82302CE0 *Move_82302CE0(Elem_82302CE0 *src, Elem_82302CE0 *end, Elem_82302CE0 *dst)
{
    for (; src != end; src++, dst++) {
        Assign_82302CE0(dst, src);
    }
    return dst;
}

static __forceinline void Erase_82302CE0(Vec_82302CE0 *v, Elem_82302CE0 *first, Elem_82302CE0 *last)
{
    Elem_82302CE0 *end;
    Elem_82302CE0 *dst;
    Elem_82302CE0 *p;

    if (first != last) {
        end = v->last;
        dst = Move_82302CE0(last, end, first);
        end = v->last;
        for (p = dst; p != end; p++) {
            fn_82230300(&p->name, 1, 0);
        }
        v->last = dst;
    }
}

void fn_82302CE0(Vec_82302CE0 *v)
{
    Erase_82302CE0(v, v->first, v->last);
}
