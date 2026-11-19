typedef struct Heap_826CAA28 {
    char pad0[0x14];
    void *allocator; /* 0x14 */
} Heap_826CAA28;

typedef struct Fader_826CAA28 Fader_826CAA28;

typedef struct Owner_826CAA28 {
    char pad0[0xa0];
    Heap_826CAA28 *heap; /* 0xa0 */
    char pada4[0x114];
    Fader_826CAA28 *fader; /* 0x1b8 */
} Owner_826CAA28;

extern void *fn_8267B890(void *allocator, unsigned int size, int flags);
extern Fader_826CAA28 *fn_82758A28(void *memory);
extern void fn_8267C498(Fader_826CAA28 *fader);
extern unsigned char fn_827585F0(Fader_826CAA28 *fader, float duration, unsigned int color, int a, int b,
                                 int c, int d, float extra);
extern void fn_82758AC8(Fader_826CAA28 *fader, float duration, unsigned int color, int a, int b, int c, int d,
                        float extra);
extern unsigned char fn_827586A8(Fader_826CAA28 *fader);
extern void fn_827583E8(Fader_826CAA28 *fader);
extern void fn_826C8590(Owner_826CAA28 *self, int flags);

void fn_826CAA28(Owner_826CAA28 *self, float duration, unsigned int color, int a, int b, int c, int d,
                 float extra)
{
    void *memory;
    Fader_826CAA28 *fader;

    if ((int)self->fader == 0) {
        memory = fn_8267B890(self->heap->allocator, 0x88, 0);
        if (memory != 0) {
            fader = fn_82758A28(memory);
        } else {
            fader = 0;
        }
        if (self->fader != 0) {
            fn_8267C498(self->fader);
        }
        self->fader = fader;
    }
    if ((color & 0xff000000) != 0) {
        if (duration <= 0.0f) {
            duration = 0.05f;
        }
        duration *= 20.0f;
        if (!fn_827585F0(self->fader, duration, color, a, b, c, d, extra)) {
            fn_826C8590(self, 0);
            fn_82758AC8(self->fader, duration, color, a, b, c, d, extra);
        }
    } else {
        if (!fn_827586A8(self->fader)) {
            fn_826C8590(self, 0);
            fn_827583E8(self->fader);
        }
    }
}
