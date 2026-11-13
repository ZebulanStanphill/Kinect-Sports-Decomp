typedef struct Fade_82FEC400 {
    float value;    /* 0x00 */
    char pad4[0xc];
    float time;     /* 0x10 */
} Fade_82FEC400;

typedef struct ItemA_82FEC400 {
    char pad0[0x14];
    Fade_82FEC400 fade;   /* 0x14 */
} ItemA_82FEC400;

typedef struct ItemB_82FEC400 {
    char pad0[4];
    Fade_82FEC400 fade;   /* 0x04 */
} ItemB_82FEC400;

typedef struct Node_82FEC400 {
    struct Node_82FEC400 *next;
    int pad4;
    ItemB_82FEC400 *item;
} Node_82FEC400;

extern float fn_8301E4B8(float t);
extern unsigned int fn_83025190(void *p);
extern ItemA_82FEC400 **lbl_832643F4[];
extern Node_82FEC400 *lbl_831BC774;

static __forceinline void Advance_82FEC400(Fade_82FEC400 *f, float dt)
{
    f->time += dt;
    f->value = fn_8301E4B8(f->time);
}

void fn_82FEC400(unsigned int id, float dt)
{
    ItemA_82FEC400 **it;
    Node_82FEC400 *n;

    for (it = lbl_832643F4[0]; it != lbl_832643F4[1]; it++) {
        ItemA_82FEC400 *a = *it;
        if (fn_83025190((char *)a + 0x80) == id)
            Advance_82FEC400(&a->fade, dt);
    }
    for (n = lbl_831BC774; n != 0; n = n->next) {
        ItemB_82FEC400 *b = n->item;
        if (fn_83025190((char *)b + 0x70) == id)
            Advance_82FEC400(&b->fade, dt);
    }
}
