typedef struct Track_83035AC8 {
    void *keys;         /* 0x0 */
    unsigned int count; /* 0x4 */
    int target;         /* 0x8 */
} Track_83035AC8;

typedef struct Entry_83035AC8 {
    unsigned int id; /* 0x00 */
    int pad04[2];
    Track_83035AC8 track; /* 0x0c */
} Entry_83035AC8;

typedef struct Curve_83035AC8 {
    char pad00[0x10];
    Entry_83035AC8 *entriesBegin; /* 0x10 */
    Entry_83035AC8 *entriesEnd;   /* 0x14 */
    int pad18;
    unsigned int channels; /* 0x1c */
    int pad20;
    unsigned int id;    /* 0x24 */
    float defaultValue; /* 0x28 */
} Curve_83035AC8;

typedef struct Target_83035AC8 {
    char pad00[0xc];
    unsigned int id; /* 0x0c */
} Target_83035AC8;

static __forceinline unsigned char HasChannel(const Curve_83035AC8 *curve, int channel)
{
    return (curve->channels >> channel) & 1;
}

typedef struct Key_83035AC8 {
    Curve_83035AC8 *curve;      /* 0x0 */
    unsigned int isDefault : 1; /* 0x4 */
    unsigned int pending : 1;
    unsigned int unused : 30;
} Key_83035AC8;

extern void *lbl_832642FC;
extern const float lbl_82005CCC;

extern float fn_830177C8(void *table, Curve_83035AC8 *curve, int channel, unsigned int variant);
extern unsigned char fn_83017108(void *table, unsigned int id, unsigned int variant, float *out,
                                 unsigned char *exact);
extern float fn_83015B10(Track_83035AC8 *track, float time);
extern float *fn_82FF2510(void *map, Key_83035AC8 key, float value);

int fn_83035AC8(Curve_83035AC8 *self, Target_83035AC8 *target, float *values, unsigned int mask, void *map,
                unsigned int variant)
{
    Entry_83035AC8 *entry;
    unsigned int id = target->id;
    unsigned char exact;
    float value;
    float result;
    Key_83035AC8 key;

    for (entry = self->entriesBegin; entry != self->entriesEnd && entry->id != id; entry++) {
    }
    if ((mask & 1) != 0 && HasChannel(self, 0)) {
        values[0] += fn_830177C8(lbl_832642FC, self, 0, variant);
    }
    if ((mask & 2) != 0 && HasChannel(self, 2)) {
        values[2] += fn_830177C8(lbl_832642FC, self, 2, variant);
    }
    if ((mask & 4) != 0 && HasChannel(self, 3)) {
        values[3] += fn_830177C8(lbl_832642FC, self, 3, variant);
    }
    if ((mask & 8) != 0 && HasChannel(self, 1)) {
        values[1] += fn_830177C8(lbl_832642FC, self, 1, variant);
    }
    if (self->id != 0 && entry->track.keys != 0) {
        exact = 1;
        if (fn_83017108(lbl_832642FC, self->id, variant, &value, &exact) == 0) {
            value = self->defaultValue;
            exact = 0;
        }
        result = fn_83015B10(&entry->track, value);
        if (result != lbl_82005CCC || exact != 0) {
            key.curve = self;
            key.pending = 0;
            key.isDefault = exact == 0;
            fn_82FF2510(map, key, result);
        }
    }
    return 1;
}
