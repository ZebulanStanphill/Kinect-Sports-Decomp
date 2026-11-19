typedef struct Text_82293E20 {
    char pad0[0x2c];
    unsigned short text[0x400];   /* 0x2c */
    unsigned short second[0x400]; /* 0x82c */
    unsigned short third[0x400];  /* 0x102c */
    float delay;                  /* 0x182c */
    float duration;               /* 0x1830 */
    int hasSecond;                /* 0x1834 */
    int hasThird;                 /* 0x1838 */
    char pad183C[0xc];
    void *single;   /* 0x1848 */
    void *multiple; /* 0x184c */
} Text_82293E20;

extern void fn_82F64988(unsigned short *destination, int size, const unsigned short *source);
extern void fn_82299AC8(void *box, unsigned short *text);
extern void fn_82299D40(void *box, unsigned short *text, unsigned short *second);
extern void fn_82299E90(void *box, unsigned short *third, unsigned short *text, unsigned short *second);

void fn_82293E20(Text_82293E20 *self, float delay, const unsigned short *text, const unsigned short *second,
                 const unsigned short *third, float duration)
{
    self->duration = duration;
    self->delay = delay;
    fn_82F64988(self->text, 0x400, text);
    self->hasSecond = second != 0;
    if (second != 0) {
        fn_82F64988(self->second, 0x400, second);
    }
    self->hasThird = third != 0;
    if (third != 0) {
        fn_82F64988(self->third, 0x400, third);
    }
    if (self->delay == 0.0f) {
        if (self->hasSecond != 0) {
            if (self->hasThird != 0) {
                fn_82299E90(self->multiple, self->third, self->text, self->second);
            } else {
                fn_82299D40(self->multiple, self->text, self->second);
            }
        } else {
            fn_82299AC8(self->single, self->text);
        }
    }
}
