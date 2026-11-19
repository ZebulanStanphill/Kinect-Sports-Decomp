typedef struct Range_82FE0AD8 {
    float min;
    float max;
    float unused;
} Range_82FE0AD8;

typedef struct Row_82FE0AD8 {
    int a;
    int b;
    int c;
    float w;
} Row_82FE0AD8;

static __forceinline void InitRange(Range_82FE0AD8 *r)
{
    r->min = 0.0f;
    r->max = 0.0f;
}

typedef struct State_82FE0AD8 {
    Row_82FE0AD8 rows[4];     /* 0x00 */
    Range_82FE0AD8 ranges[6]; /* 0x40 */
    int words[12];            /* 0x88 */
} State_82FE0AD8;

void fn_82FE0AD8(State_82FE0AD8 *self)
{
    self->rows[0].a = 0;
    self->rows[0].b = 0;
    self->rows[0].c = 0;
    self->rows[0].w = 0.0f;
    self->rows[1].a = 0;
    self->rows[1].b = 0;
    self->rows[1].c = 0;
    self->rows[1].w = 0.0f;
    self->rows[2].a = 0;
    self->rows[2].b = 0;
    self->rows[2].c = 0;
    self->rows[2].w = 0.0f;
    self->rows[3].a = 0;
    self->rows[3].b = 0;
    self->rows[3].c = 0;
    self->rows[3].w = 0.0f;
    InitRange(&self->ranges[0]);
    InitRange(&self->ranges[1]);
    InitRange(&self->ranges[2]);
    InitRange(&self->ranges[3]);
    InitRange(&self->ranges[4]);
    InitRange(&self->ranges[5]);
    self->words[0] = 0;
    self->words[1] = 0;
    self->words[2] = 0;
    self->words[3] = 0;
    self->words[4] = 0;
    self->words[5] = 0;
    self->words[6] = 0;
    self->words[7] = 0;
    self->words[8] = 0;
    self->words[9] = 0;
    self->words[10] = 0;
    self->words[11] = 0;
}
