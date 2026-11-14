typedef struct Entry_824912B8 {
    unsigned int key;
    int value;
} Entry_824912B8;

struct Self_824912B8;
struct Clock_824912B8;
typedef struct ClockVtbl_824912B8 {
    char pad0[0x18];
    float (*GetTime)(struct Clock_824912B8 *self, struct Self_824912B8 *owner);
} ClockVtbl_824912B8;
typedef struct Clock_824912B8 {
    ClockVtbl_824912B8 *vt;
} Clock_824912B8;

typedef struct Self_824912B8 {
    char pad0[4];
    Entry_824912B8 *begin;
    Entry_824912B8 *end;
    char padc[8];
    unsigned int key;
    char pad18[4];
    Clock_824912B8 *clock;
    char pad20[0x34];
    float duration;
    char pad58[0xc];
    int busy;
} Self_824912B8;

typedef struct Globals_824912B8 {
    char pad0[0xc];
    float rate;
} Globals_824912B8;

extern const float lbl_821CA45C[2];
extern Globals_824912B8 lbl_831D1298;

int fn_824912B8(Self_824912B8 *self)
{
    Entry_824912B8 *it;
    if (self->busy != 0)
        return 0;
    {
        Entry_824912B8 *end = self->end;
        unsigned int key = self->key;
        for (it = self->begin; it != end; it++) {
            if (it->key == key)
                break;
        }
    }
    if (it != self->end && self->clock != 0 &&
        self->clock->vt->GetTime(self->clock, self) / self->duration >= lbl_821CA45C[1] / lbl_831D1298.rate)
        return 0;
    return 1;
}
