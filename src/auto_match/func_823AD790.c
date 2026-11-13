typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Ring_823AD790 { __vector4 *beg; __vector4 *end; __vector4 *rd; __vector4 *wr; unsigned int cnt; } Ring_823AD790;

void fn_823AD790(Ring_823AD790 *r, __vector4 *item)
{
    if ((unsigned int)(r->end - r->beg) == r->cnt) {
        if (r->cnt != 0) {
            *r->wr = *item;
            { __vector4 **pw = &r->wr; *pw += 1; if (*pw == r->end) *pw = r->beg; }

            r->rd = r->wr;
        }
    } else {
        if (r->wr != 0)
            *r->wr = *item;
        { __vector4 **pw = &r->wr; *pw += 1; if (*pw == r->end) *pw = r->beg; }

        r->cnt++;
    }
}
