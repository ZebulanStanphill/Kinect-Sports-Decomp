extern float lbl_8208DD74;
extern float lbl_8208DD78;
extern float lbl_8208DD7C;

typedef struct Format_82E33170 {
    char pad0[0x30];
    float ratio; /* 0x30 */
    char pad34[0x50 - 0x34];
    int codec; /* 0x50 */
    char pad54[0xd4 - 0x54];
    int enabled;    /* 0xd4 */
    int interlaced; /* 0xd8 */
} Format_82E33170;

typedef struct Encoder_82E33170 {
    Format_82E33170 *format; /* 0x0000 */
    char pad4[0x7670 - 0x4];
    int levelA; /* 0x7670 */
    int levelB; /* 0x7674 */
    int levelC; /* 0x7678 */
} Encoder_82E33170;

void fn_82E33170(Encoder_82E33170 *self)
{
    Format_82E33170 *format = self->format;
    int *levelB = &self->levelB;

    self->levelA = 5;
    *levelB = 3;
    self->levelC = 2;
    if (format->enabled == 0) {
        self->levelA = 1;
        *levelB = 1;
        self->levelC = 1;
        return;
    }
    if (format->interlaced != 0) {
        if (format->ratio <= lbl_8208DD7C) {
            self->levelA = 5;
            *levelB = 4;
            self->levelC = 4;
        } else if (format->ratio <= lbl_8208DD78) {
            self->levelA = 5;
            *levelB = 3;
            self->levelC = 3;
        } else if (format->ratio < 2.0f && format->ratio < lbl_8208DD74) {
            if (format->codec == 0x5622) {
                self->levelA = 5;
                *levelB = 3;
                self->levelC = 2;
            } else {
                self->levelA = 5;
                *levelB = 3;
                self->levelC = 2;
            }
        } else {
            self->levelA = 5;
            *levelB = 3;
            self->levelC = 2;
        }
    } else if (format->ratio > lbl_8208DD7C) {
        if (format->ratio <= lbl_8208DD78) {
            *levelB = 6;
            self->levelA = 7;
            self->levelC = 6;
        } else {
            *levelB = 5;
            self->levelA = 6;
            self->levelC = 5;
        }
    } else {
        self->levelA = 5;
        *levelB = 3;
        self->levelC = 2;
    }
}
