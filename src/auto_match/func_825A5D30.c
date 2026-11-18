typedef struct Query_825A5D30 {
    int type;  /* 0x0 */
    int size;  /* 0x4 */
    int value; /* 0x8 */
} Query_825A5D30;

typedef struct Source_825A5D30 Source_825A5D30;

typedef struct SourceVtbl_825A5D30 {
    void *slots[3];
    void (*Query)(Source_825A5D30 *self, Query_825A5D30 *query); /* 0xc */
} SourceVtbl_825A5D30;

struct Source_825A5D30 {
    SourceVtbl_825A5D30 *vt; /* 0x0 */
};

typedef struct Actuator_825A5D30 {
    char pad000[0x40];
    float level; /* 0x040 */
    char pad044[4];
    float target; /* 0x048 */
    char pad04c[0x10];
    int pending; /* 0x05c */
} Actuator_825A5D30;

typedef struct Output_825A5D30 {
    char pad000[0x194];
    float target; /* 0x194 */
} Output_825A5D30;

typedef struct Slot_825A5D30 {
    char pad000[0x14];
    char name[0xf0]; /* 0x014 */
    int active;      /* 0x104 */
    char pad108[0x18];
    int binding; /* 0x120 */
} Slot_825A5D30;

extern void XMemSet(void *dst, int value, unsigned int size);
extern void fn_82CED628(char *name, const char *text);

void fn_825A5D30(Actuator_825A5D30 *self, Source_825A5D30 *source, Output_825A5D30 *output,
                 Slot_825A5D30 *slot)
{
    Query_825A5D30 query;

    self->pending = 0;
    self->level = 0.0f;
    output->target = self->target;
    XMemSet(&query.value, 0, sizeof(query.value));
    query.type = 0x19;
    query.size = 0xc;
    source->vt->Query(source, &query);
    if (query.value == 0 && slot != 0) {
        slot->active = 0;
        slot->binding = 0;
        fn_82CED628(slot->name, "Actuator (disabled)");
    }
}
