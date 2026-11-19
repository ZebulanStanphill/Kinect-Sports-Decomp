typedef struct Values_8255F448 {
    int items[0x10]; // 0x00
    int valid;       // 0x40
} Values_8255F448;

typedef struct Object_8255F448 {
    char padding[0x110];
    void *current;          // 0x110
    void *context;          // 0x114
    int field118;           // 0x118
    Values_8255F448 values; // 0x11c
    char padding160[4];
    int field164; // 0x164
    int field168; // 0x168
    char padding16c[0x14];
    int field180;   // 0x180
    float duration; // 0x184
    float elapsed;  // 0x188
    int field18c;   // 0x18c
    char padding190[0x18];
    int options; // 0x1a8
} Object_8255F448;

extern unsigned char fn_827F3DA8(void *);
extern void fn_8255F7E8(Object_8255F448 *);
extern unsigned char fn_827F22D0(Object_8255F448 *);
extern int fn_827F6450(void *);
extern void fn_827F2D60(Object_8255F448 *, void *, float, int, int);
extern int fn_827F6458(void *);
extern char *fn_827F6480(void *, int);
extern int fn_82F65B18(const char *);
extern void fn_827F2220(Object_8255F448 *);

void fn_8255F448(Object_8255F448 *self, void *context, int field164, int field18c)
{
    int wasActive = 0;
    float duration;
    int count;
    int i;
    Values_8255F448 *values;
    if (self->current && fn_827F3DA8(self->current)) {
        wasActive = 1;
    }
    if (fn_827F3DA8(context)) {
        wasActive = 1;
    }
    fn_8255F7E8(self);
    duration = fn_827F22D0(self) ? 0.0f : self->duration;
    self->elapsed = 0.0f;
    self->current = context;
    self->context = context;
    self->field180 = 0;
    self->field18c = field18c;
    fn_827F2D60(self, context, duration, 0, self->options || fn_827F6450(context));
    self->field164 = field164;
    self->field168 = 1;
    values = &self->values;
    count = fn_827F6458(context);
    if (count != 0) {
        for (i = 0; i < count; i++) {
            values->items[i] = fn_82F65B18(fn_827F6480(context, i) + 10);
        }
    }
    values->valid = 1;
    if (wasActive) {
        fn_827F2220(self);
    }
}
