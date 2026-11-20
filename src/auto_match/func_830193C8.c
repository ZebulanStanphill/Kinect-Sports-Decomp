typedef struct Key_830193C8 {
    float time;         /* 0x0 */
    unsigned int value; /* 0x4 */
    int interp;         /* 0x8 */
} Key_830193C8;

typedef struct Track_830193C8 {
    Key_830193C8 *keys; /* 0x0 */
    unsigned int count; /* 0x4 */
    int target;         /* 0x8 */
} Track_830193C8;

typedef struct Tables_830193C8 {
    void *tables[10]; /* 0x0 */
} Tables_830193C8;

extern Tables_830193C8 lbl_83264368;
extern float fn_83016920(Tables_830193C8 *tables, float t, float from, float to, int interp);
extern float fn_8302A5B8(void *table, float value);
extern float fn_8302A8F0(void *table, float value);

static __forceinline unsigned int Evaluate(Track_830193C8 *track, float time)
{
    unsigned int result;
    Key_830193C8 *keys = track->keys;
    unsigned int count;
    unsigned int i = 0;

    if (keys != 0 && (count = track->count) != 0) {
        if (count == 1) {
            return keys[0].value;
        }
        for (; i < count; i++) {
            if (time <= track->keys[i].time) {
                return track->keys[i].value;
            }
            if (i < count - 1 && time < track->keys[i + 1].time) {
                Key_830193C8 *key = &keys[i];
                float to;
                float from;

                if (keys[i].interp == 4) {
                    return (unsigned int)((time - key[0].time) / (key[1].time - key[0].time) *
                                              ((float)key[1].value - (float)key[0].value) +
                                          (float)key[0].value);
                }
                if (keys[i].interp == 9) {
                    return key->value;
                }
                to = (float)key[1].value;
                from = (float)key[0].value;
                return (unsigned int)fn_83016920(
                    &lbl_83264368, (time - key[0].time) / (key[1].time - key[0].time), from, to, key->interp);
            }
            if (i == count - 1) {
                return keys[i].value;
            }
        }
    }
    return result;
}

unsigned int fn_830193C8(Track_830193C8 *track, float time)
{
    unsigned int value = Evaluate(track, time);

    switch (track->target) {
    case 1:
        value = (unsigned int)fn_8302A5B8(lbl_83264368.tables[5], (float)value);
        break;
    case 2:
        value = (unsigned int)fn_8302A8F0(lbl_83264368.tables[6], (float)value);
        break;
    }
    return value;
}
