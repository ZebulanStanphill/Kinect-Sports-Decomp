typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    Vec2 *data;
    unsigned int size;
} Array;

extern void fn_8272DED0(Array *a, Array *b, unsigned int n);

void fn_8272F968(Array *a, const Vec2 *v)
{
    Vec2 *p;

    fn_8272DED0(a, a, a->size + 1);
    p = &a->data[a->size - 1];
    if (p != 0) {
        float y = v->y;
        float x = v->x;
        p->x = x;
        p->y = y;
    }
}
