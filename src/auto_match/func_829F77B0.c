/* Collects the visible entries 2..199 of a body's point table (fn_829F7218): up to 19 copied into
   result slots 1.., and the entry with the smallest y (slot 0); also tracks the entry closest to the
   x = 0 plane. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void *memset(void *dst, int value, unsigned int size);
double fabs(double);

typedef struct Entry_829F77B0 {
    __vector4 a;             /* 0x00 */
    __vector4 b;             /* 0x10 */
    __vector4 c;             /* 0x20 */
    int id;                  /* 0x30 */
    char pad34[8];
    float weight;            /* 0x3c */
} Entry_829F77B0;

typedef struct Record_829F77B0 {
    __vector4 b;             /* 0x00 */
    __vector4 c;             /* 0x10 */
    __vector4 a;             /* 0x20 */
    __vector4 position;      /* 0x30 */
    int id;                  /* 0x40 */
    float weight;            /* 0x44 */
    int visible;             /* 0x48 */
    int pad4c;
} Record_829F77B0;

typedef struct Result_829F77B0 {
    Record_829F77B0 records[20];
} Result_829F77B0;

typedef struct Body_829F77B0 {
    char pad0[0x12c50];
    Entry_829F77B0 entries[200];   /* 0x12c50 */
} Body_829F77B0;

extern int fn_829F7218(Body_829F77B0 *self, unsigned int index, __vector4 *position, float *depth,
                       unsigned int *flags);

void fn_829F77B0(Body_829F77B0 *self, Result_829F77B0 *out)
{
    unsigned int count = 0;
    unsigned int lowest = 0;
    unsigned int nearest = 0;
    unsigned int i;
    __vector4 position;
    float depth;
    unsigned int flags;

    memset(out, 0, sizeof(*out));
    for (i = 2; i < 200; i++) {
        if (fn_829F7218(self, i, &position, &depth, &flags) != 0) {
            count++;
            if (count < 20) {
                Record_829F77B0 *r = &out->records[count];
                Entry_829F77B0 *e = &self->entries[i];
                r->b = e->b;
                r->c = e->c;
                r->a = e->a;
                r->id = e->id;
                r->weight = e->weight;
                r->visible = flags & 1;
                r->position = position;
            }
            if (lowest == 0 || self->entries[i].b.vector4_f32[2] < self->entries[lowest].b.vector4_f32[2])
                lowest = i;
            if (nearest == 0 || (float)fabs(self->entries[i].a.vector4_f32[0]) < (float)fabs(self->entries[nearest].a.vector4_f32[0]))
                nearest = i;
        }
    }
    if (lowest != 0) {
        out->records[0].b = self->entries[lowest].b;
        out->records[0].c = self->entries[lowest].c;
        out->records[0].a = self->entries[lowest].a;
        out->records[0].id = self->entries[lowest].id;
        out->records[0].weight = self->entries[lowest].weight;
        fn_829F7218(self, lowest, &out->records[0].position, &depth, &flags);
        out->records[0].visible = flags & 1;
    }
}
