typedef struct Key_83015B10 {
    float time;  /* 0x0 */
    float value; /* 0x4 */
    int interp;  /* 0x8 */
} Key_83015B10;

typedef struct Track_83015B10 {
    Key_83015B10 *keys; /* 0x0 */
    unsigned int count; /* 0x4 */
    int target;         /* 0x8 */
} Track_83015B10;

typedef struct Tables_83015B10 {
    void *tables[10]; /* 0x0 */
} Tables_83015B10;

extern Tables_83015B10 lbl_83264368;
extern float fn_83016920(Tables_83015B10 *tables, float t, float from, float to, int interp);
extern float fn_8302A5B8(void *table, float value);
extern float fn_8302A8F0(void *table, float value);

static __forceinline float Evaluate(Track_83015B10 *track, float time)
{
    float result;
    Key_83015B10 *keys = track->keys;
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
                Key_83015B10 *key = &keys[i];

                if (keys[i].interp == 4) {
                    return (time - key[0].time) / (key[1].time - key[0].time) *
                               (key[1].value - key[0].value) +
                           key[0].value;
                }
                if (keys[i].interp == 9) {
                    return key->value;
                }
                return fn_83016920(&lbl_83264368, (time - key[0].time) / (key[1].time - key[0].time),
                                   key[0].value, key[1].value, key->interp);
            }
            if (i == count - 1) {
                return keys[i].value;
            }
        }
    }
    return result;
}

void fn_83015B10(Track_83015B10 *track, float time)
{
    float value = Evaluate(track, time);

    switch (track->target) {
    case 1:
        fn_8302A5B8(lbl_83264368.tables[5], value);
        break;
    case 2:
        fn_8302A8F0(lbl_83264368.tables[6], value);
        break;
    }
}
