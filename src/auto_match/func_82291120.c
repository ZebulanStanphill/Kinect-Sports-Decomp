extern char lbl_821A9D60[];
extern void fn_822848B8(void *p);
extern void fn_8229E090(void *p, int a, int b);
extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CC60(const char *name, float value);
extern void fn_82E1CB88(const char *name, int value);
extern void fn_82E1CCA8(void);
extern void fn_82359C18(void *);
extern void fn_82279AF0(void *);
extern void fn_8265CA20(void *);

typedef struct {
    void *vtable;
    char pad004[0x144];
    char member148[0x1c];
    void *f164;
    void *f168;
    float duration;
    int numOptions;
} Screen_82291120;

Screen_82291120 *fn_82291120(Screen_82291120 *self, unsigned int flags)
{
    float duration;
    int numOptions;
    self->vtable = lbl_821A9D60;
    if (self->f168 != 0) {
        fn_822848B8(self->f168);
        self->f168 = 0;
    }
    if (self->f164 != 0) {
        fn_8229E090(self->f164, 0, 1);
        self->f164 = 0;
    }
    numOptions = self->numOptions;
    duration = self->duration;
    if (*fn_8225F670() != 0 && fn_8225FDE0(0x68, 1) == 0 && fn_82E1CAD0(0x68) != 0) {
        fn_82E1CC60("Duration", duration);
        fn_82E1CB88("NumberOfOptionsSelected", numOptions);
        fn_82E1CCA8();
    }
    fn_82359C18(self->member148);
    fn_82279AF0(self);
    if (flags & 1) fn_8265CA20(self);
    return self;
}
