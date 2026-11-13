typedef struct Vec_8313F650 { void *first; void *last; void *end; } Vec_8313F650;
typedef struct Global_8313F650 {
    char pad[0x10];
    char sub[0x34];      /* 0x10 */
    Vec_8313F650 a;      /* 0x44 */
    int pad50;
    Vec_8313F650 b;      /* 0x54 */
} Global_8313F650;
extern Global_8313F650 lbl_83297A48;
extern void fn_8265CA20(void *p);
extern void fn_825BF428(void *p);

static void Tidy_8313F650(Vec_8313F650 *v)
{
    if (v->first != 0)
        fn_8265CA20(v->first);
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

void fn_8313F650(void)
{
    Tidy_8313F650(&lbl_83297A48.b);
    Tidy_8313F650(&lbl_83297A48.a);
    fn_825BF428(lbl_83297A48.sub);
}
