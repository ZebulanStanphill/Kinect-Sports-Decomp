typedef struct Array_83081D68 {
    int *data;
} Array_83081D68;

typedef struct Sets_83081D68 {
    Array_83081D68 *parents;
    int count;
} Sets_83081D68;

static __forceinline int Parent(Sets_83081D68 *s, int i)
{
    return s->parents->data[i];
}

void fn_83081D68(Sets_83081D68 *s)
{
    int *e = s->parents->data;
    int *end = e + s->count;
    for (; e != end; e++) {
        if (*e >= 0) {
            while (Parent(s, *e) >= 0)
                *e = Parent(s, *e);
        }
    }
}
