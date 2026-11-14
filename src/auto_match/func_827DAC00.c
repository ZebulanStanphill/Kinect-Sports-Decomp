typedef struct Child_827DAC00 Child_827DAC00;

typedef struct Vec_827DAC00 {
    Child_827DAC00 **first;
    Child_827DAC00 **last;
} Vec_827DAC00;

typedef struct Owner_827DAC00 {
    int f0;
    Vec_827DAC00 children;
} Owner_827DAC00;

extern void fn_827E3840(Child_827DAC00 *child, int parent);
extern void fn_827E3AF8(Child_827DAC00 *child);
extern void fn_827E36D0(Child_827DAC00 *child);
extern void *memmove(void *dst, const void *src, unsigned int n);

static __forceinline void Erase(Vec_827DAC00 *v, Child_827DAC00 **p)
{
    Child_827DAC00 **next = p + 1;

    memmove(p, next, (v->last - next) * sizeof(Child_827DAC00 *));
    v->last--;
}

void fn_827DAC00(Owner_827DAC00 *self, Child_827DAC00 *child)
{
    Child_827DAC00 **p;
    Child_827DAC00 **last;

    fn_827E3840(child, 0);
    p = self->children.first;
    last = self->children.last;
    for (; p != last; p++) {
        if (*p == child) {
            Erase(&self->children, p);
            if (child != 0) {
                fn_827E3AF8(child);
                fn_827E36D0(child);
            }
            return;
        }
    }
}
