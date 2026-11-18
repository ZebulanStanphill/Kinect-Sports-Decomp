typedef struct Filter_8306E0E0 {
    int reserved00; /* 0x0 */
} Filter_8306E0E0;

typedef struct Processor_8306E0E0 {
    char reserved00000[0x14d30]; /* 0x00000 */
    Filter_8306E0E0 filter;      /* 0x14d30 */
    char reserved14d34[0x19c];   /* 0x14d34 */
    float level;                 /* 0x14ed0 */
    int count;                   /* 0x14ed4 */
    float smoothing;             /* 0x14ed8 */
} Processor_8306E0E0;

extern void fn_830777C0(Filter_8306E0E0 *filter);

void fn_8306E0E0(Processor_8306E0E0 *self)
{
    self->level = 0.0f;
    self->count = 0;
    self->smoothing = 0.3f;
    fn_830777C0(&self->filter);
}
