typedef union Interpolator_82A9B2F0 {
    unsigned int word;
    unsigned short mask;
    unsigned char semantic;
} Interpolator_82A9B2F0;

typedef struct List_82A9B2F0 {
    Interpolator_82A9B2F0 *data;
    unsigned int count;
} List_82A9B2F0;

extern char lbl_82196582[];
extern void fn_82A99BC8(void *);
extern void fn_82A99B70(void *, const char *, ...);
extern void fn_82A9A860(void *);
extern void fn_82A9A810(void *);
extern void fn_82A99C28(void *, const char *);
extern void fn_82A99D88(void *, const char *, const char *);
extern int sprintf(char *, const char *, ...);

static __forceinline void Attribute_82A9B2F0(void *writer, const char *name, int value)
{
    fn_82A99B70(writer, " %s=\"%d\"", name, value);
}

void fn_82A9B2F0(void *self, void *writer, List_82A9B2F0 *interpolators)
{
    Interpolator_82A9B2F0 *interpolator;
    char text[0x10];
    fn_82A99BC8(writer);
    fn_82A99B70(writer, "<%s", "InterpolatorInfo");
    fn_82A9A860(writer);
    for (interpolator = interpolators->data; interpolator < interpolators->data + interpolators->count;
         interpolator++) {
        fn_82A99BC8(writer);
        fn_82A99B70(writer, "<%s", "Interpolator");
        Attribute_82A9B2F0(writer, "Register", (interpolator->word >> 20) & 15);
        sprintf(text, "0x%02x", interpolator->semantic);
        fn_82A99D88(writer, "Semantic", text);
        sprintf(text, "%s%s%s%s", (interpolator->mask & 1) ? "x" : lbl_82196582,
                (interpolator->mask & 2) ? "y" : lbl_82196582, (interpolator->mask & 4) ? "z" : lbl_82196582,
                (interpolator->mask & 8) ? "w" : lbl_82196582);
        fn_82A99D88(writer, "Mask", text);
        fn_82A9A810(writer);
    }
    fn_82A99C28(writer, "InterpolatorInfo");
}
