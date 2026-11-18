typedef struct Key_8248BFB8 {
    int pad0[2];
    float duration; /* 0x08 */
} Key_8248BFB8;

typedef struct Track_8248BFB8 {
    char pad0[0x8];
    Key_8248BFB8 *keysBegin; /* 0x08 */
    Key_8248BFB8 *keysEnd;   /* 0x0c */
    char pad10[0x14];
    int playing;     /* 0x24 */
    int keyCount;    /* 0x28 */
    unsigned int id; /* 0x2c */
    char pad30[0x14];
    int keyIndex; /* 0x44 */
    char pad48[0x20];
} Track_8248BFB8;

typedef struct Player_8248BFB8 {
    int pad0;
    int loaded;  /* 0x04 */
    int playing; /* 0x08 */
    char padC[0xc];
    Track_8248BFB8 *tracksBegin; /* 0x18 */
    Track_8248BFB8 *tracksEnd;   /* 0x1c */
} Player_8248BFB8;

int fn_8248BFB8(Player_8248BFB8 *self, unsigned int id, float time)
{
    Track_8248BFB8 *track;
    Track_8248BFB8 *end;

    if (self->loaded != 0 && self->playing == 0) {
        for (track = self->tracksBegin, end = self->tracksEnd; track != end; track++) {
            if (track->id == id) {
                Key_8248BFB8 *key = track->keysBegin;
                Key_8248BFB8 *keysEnd = track->keysEnd;
                float total = 0.0f;

                track->keyCount = 0;
                for (track->keyIndex = 0; key != keysEnd && total < time; track->keyIndex++) {
                    total += key->duration;
                    key++;
                    track->keyCount++;
                }
                track->playing = 1;
                return 1;
            }
        }
    }
    return 0;
}
