typedef struct Entry_82877BA8 {
    unsigned char enabled; /* 0x00 */
    unsigned char data[0x2b];
} Entry_82877BA8;

typedef struct State_82877BA8 {
    unsigned int unused;
    unsigned char loadValues; /* 0x04 */
    unsigned char padding0[7];
    unsigned char dirty; /* 0x0c */
    unsigned char padding1[3];
    Entry_82877BA8 *begin; /* 0x10 */
    Entry_82877BA8 *end;   /* 0x14 */
} State_82877BA8;

typedef struct Value_82877BA8 {
    unsigned int id;
    float weight;
} Value_82877BA8;

typedef struct Name_82877BA8 {
    unsigned char data[0x18];
} Name_82877BA8;

typedef struct Variant_82877BA8 {
    unsigned char data[0x24];
} Variant_82877BA8;

extern void *memset(void *, int, unsigned int);
extern Variant_82877BA8 *fn_82864848(Variant_82877BA8 *);
extern int fn_828779B0(Entry_82877BA8 *, Variant_82877BA8 *, float *);
extern unsigned int fn_828647D8(const Variant_82877BA8 *);
extern void fn_82864898(Variant_82877BA8 *);
extern unsigned int fn_82878C60(const void *);
extern int fn_82FE6BC0(unsigned int, Value_82877BA8 *, unsigned int);
extern Name_82877BA8 *fn_82230110(Name_82877BA8 *, const char *);
extern Name_82877BA8 *fn_8223B688(Name_82877BA8 *, const Name_82877BA8 *);
extern void *fn_82868378(void);
extern int fn_8286DA10(void *, Name_82877BA8 *, int);
extern void fn_82230300(Name_82877BA8 *, unsigned char, unsigned int);

int fn_82877BA8(State_82877BA8 *state, const void *object)
{
    float weight;
    Name_82877BA8 name;
    int result;

    if (state->dirty != 0) {
        if (state->loadValues != 0) {
            Value_82877BA8 values[4];
            Variant_82877BA8 variant;
            Value_82877BA8 *entry;
            Entry_82877BA8 *item;
            int count;

            values[0].id = 0;
            memset(&values[0].weight, 0, sizeof(values) - sizeof(values[0].id));
            count = 0;
            for (item = state->begin; item != state->end; ++item) {
                if (item->enabled != 0) {
                    fn_82864848(&variant);
                    fn_828779B0(item, &variant, &weight);
                    values[count].id = fn_828647D8(&variant);
                    values[count].weight = weight;
                    ++count;
                    fn_82864898(&variant);
                }
            }
            if (count == 0) {
                entry = 0;
            } else {
                entry = values;
            }
            result = fn_82FE6BC0(fn_82878C60(object), entry, count);
        } else {
            result = fn_82FE6BC0(fn_82878C60(object), 0, 0);
        }
        state->dirty = 0;
        if (result != 1) {
            Name_82877BA8 copy;
            Name_82877BA8 *description;

            fn_82230110(&name, "AK::SoundEngine::SetGameObjectEnvironmentsValues( )");
            description = fn_8223B688(&copy, &name);
            fn_8286DA10(fn_82868378(), description, result);
            fn_82230300(&name, 1, 0);
            return (int)0xa0340000;
        }
    }
    return 0x20340000;
}
