typedef struct Reader_8242A2B0 Reader_8242A2B0;

typedef struct IntegerProperty_8242A2B0 {
    const void *vt;
    int flags;
    unsigned int encoding[6];
} IntegerProperty_8242A2B0;

typedef struct FloatProperty_8242A2B0 {
    const void *vt;
    int flags;
} FloatProperty_8242A2B0;

typedef struct Values_8242A2B0 {
    char pad0[8];
    unsigned int first;
    int second;
    float third;
} Values_8242A2B0;

extern const char lbl_821B8C30[];
extern const char lbl_821B8BDC[];
extern unsigned int *fn_828ABF58(unsigned int *, unsigned char, int, int);
extern void fn_82429898(IntegerProperty_8242A2B0 *, Reader_8242A2B0 *, unsigned int *);
extern void fn_828ABBC0(unsigned int *, Reader_8242A2B0 *, int *);
extern unsigned int fn_8223C610(void *, unsigned int, unsigned char *, int);
extern void fn_82429BA8(void *, void *, float *);

void fn_8242A2B0(void *self, Reader_8242A2B0 *reader, Values_8242A2B0 *values)
{
    IntegerProperty_8242A2B0 first;
    unsigned int second[6];
    first.flags = 0;
    first.vt = lbl_821B8C30;
    fn_828ABF58(first.encoding, 0, 0, 7);
    fn_82429898(&first, reader, values ? &values->first : 0);
    fn_828ABF58(second, 0, 4, 24);
    fn_828ABBC0(second, reader, values ? &values->second : 0);
    if (fn_8223C610(reader, 1, 0, 0)) {
        FloatProperty_8242A2B0 third;
        third.flags = 0;
        third.vt = lbl_821B8BDC;
        fn_82429BA8(&third, reader, values ? &values->third : 0);
    } else if (values) {
        values->third = 0.0f;
    }
}
