typedef struct Object_8255F638 {
    char padding[0x110];
    void *current; // 0x110
    int field114;  // 0x114
    char padding118[0x44];
    int field15c; // 0x15c
    char padding160[0x20];
    int field180;   // 0x180
    float duration; // 0x184
    float elapsed;  // 0x188
    int field18c;   // 0x18c
    char padding190[0x18];
    unsigned int options; // 0x1a8
} Object_8255F638;

extern unsigned char fn_827F3DA8(void *);
extern void fn_8255F7E8(Object_8255F638 *);
extern unsigned char fn_827F22D0(Object_8255F638 *);
extern void fn_827F2DD0(Object_8255F638 *, void *, float, int, unsigned int);
extern void fn_827F2220(Object_8255F638 *);

void fn_8255F638(Object_8255F638 *self, void *context)
{
    int wasActive = 0;
    float duration;
    if (self->current && fn_827F3DA8(self->current)) {
        wasActive = 1;
    }
    fn_8255F7E8(self);
    duration = fn_827F22D0(self) ? 0.0f : self->duration;
    self->elapsed = 0.0f;
    self->current = 0;
    self->field114 = 0;
    self->field180 = 0;
    self->field18c = 0;
    fn_827F2DD0(self, context, duration, 0, self->options);
    self->field15c = 0;
    if (wasActive) {
        fn_827F2220(self);
    }
}
