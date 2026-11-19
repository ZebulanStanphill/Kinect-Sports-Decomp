typedef struct Entry_830176A0 {
    int pad0;        /* 0x00 */
    unsigned int id; /* 0x04 */
    char curve[0xC]; /* 0x08 */
} Entry_830176A0;

typedef struct Track_830176A0 {
    char pad0[0x10];
    Entry_830176A0 *begin; /* 0x10 */
    Entry_830176A0 *end;   /* 0x14 */
} Track_830176A0;

typedef struct Mixer_830176A0 {
    char pad0[0x61C];
    char values[4]; /* 0x61C */
} Mixer_830176A0;

extern unsigned char fn_83017108(Mixer_830176A0 *mixer, unsigned int id, int time, float *value,
                                 unsigned char *flags);
extern float *fn_82FFE0F0(void *values, unsigned int id);
extern float fn_83015B10(void *curve, float value);

static __forceinline float GetStored_830176A0(Mixer_830176A0 *mixer, unsigned int id)
{
    float *stored = fn_82FFE0F0(mixer->values, id);

    if (stored != 0) {
        return *stored;
    }
    return 0.0f;
}

float fn_830176A0(Mixer_830176A0 *mixer, Track_830176A0 *track, int time, unsigned int id)
{
    unsigned char flags;
    float value;
    unsigned char found;
    float total;
    Entry_830176A0 *entry;

    if (id != 0 && fn_83017108(mixer, id, time, &value, &flags) != 0) {
        found = 1;
    } else {
        found = 0;
    }
    total = 0.0f;
    for (entry = track->begin; entry != track->end; entry++) {
        if (id == 0 || entry->id == id) {
            if (!found) {
                if (id == 0) {
                    if (fn_83017108(mixer, entry->id, time, &value, &flags) != 0) {
                        goto evaluate;
                    }
                    value = GetStored_830176A0(mixer, entry->id);
                } else {
                    value = GetStored_830176A0(mixer, entry->id);
                }
            }
        evaluate:
            total += fn_83015B10(entry->curve, value);
        }
    }
    return total;
}
