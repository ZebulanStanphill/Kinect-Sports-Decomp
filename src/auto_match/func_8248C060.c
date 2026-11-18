typedef struct Key_8248C060 {
    int pad0[2];
    float duration; /* 0x08 */
} Key_8248C060;

typedef struct Track_8248C060 {
    char pad0[0x4];
    int value;               /* 0x04 */
    Key_8248C060 *keysBegin; /* 0x08 */
    Key_8248C060 *keysEnd;   /* 0x0c */
    char pad10[0xc];
    int reachedTime; /* 0x1c */
    char pad20[0x4];
    int playing;     /* 0x24 */
    int keyCount;    /* 0x28 */
    unsigned int id; /* 0x2c */
    char pad30[0xc];
    float elapsed; /* 0x3c */
    char pad40[0x4];
    int keyIndex; /* 0x44 */
    int seeked;   /* 0x48 */
    char pad4c[0x1c];
} Track_8248C060;

typedef struct Player_8248C060 {
    int pad0;
    int loaded;  /* 0x04 */
    int playing; /* 0x08 */
    char padC[0xc];
    Track_8248C060 *tracksBegin; /* 0x18 */
    Track_8248C060 *tracksEnd;   /* 0x1c */
} Player_8248C060;

int fn_8248C060(Player_8248C060 *self, int value, unsigned int id, float time)
{
    Track_8248C060 *track;
    Track_8248C060 *end;

    if (self->loaded != 0 && self->playing == 0) {
        for (track = self->tracksBegin, end = self->tracksEnd; track != end; track++) {
            if (track->id == id) {
                Key_8248C060 *key = track->keysBegin;
                Key_8248C060 *keysEnd = track->keysEnd;
                float total;

                track->value = value;
                track->keyCount = 0;
                track->keyIndex = 0;
                total = track->elapsed = 0.0f;
                if (key != keysEnd) {
                    while (key != keysEnd && total < time) {
                        total += key->duration;
                        key++;
                        track->keyCount++;
                        track->keyIndex++;
                    }
                    if (key != keysEnd) {
                        track->reachedTime = 1;
                    }
                }
                track->seeked = 1;
                track->playing = 0;
                return 1;
            }
        }
    }
    return 0;
}
