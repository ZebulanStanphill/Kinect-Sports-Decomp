typedef struct Value_8228F800 {
    int type;
    unsigned int pad : 25;
    unsigned int managed : 1;
    unsigned int low : 6;
    void *data;
} Value_8228F800;

typedef struct Obj_8228F800 {
    int f0;
    int state;
    char pad8[0x84 - 0x8];
    int videoFinished;
} Obj_8228F800;

extern void fn_8228F268(Obj_8228F800 *self, const char *name);

void fn_8228F800(Obj_8228F800 *self, const unsigned char *p, Value_8228F800 *args)
{
    const unsigned char *q;
    unsigned char c;
    unsigned char b;
    int state;
    q = p;
    c = *p;
    b = 0x6f;
    if (c == 0x6f) {
        int d = (int)"onFullIntro" - (int)p;
        do {
            q++;
            if (c == 0) goto match1;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match1:
        state = 3;
        goto set;
    }
    q = p;
    c = *p;
    b = 0x6f;
    if (c == 0x6f) {
        int d = (int)"onFinishedIntro" - (int)p;
        do {
            q++;
            if (c == 0) goto match2;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match2:
        state = 5;
        goto set;
    }
    q = p;
    c = *p;
    b = 0x6f;
    if (c == 0x6f) {
        int d = (int)"onFinishedVideo" - (int)p;
        do {
            q++;
            if (c == 0) goto match3;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match3:
        self->videoFinished = 1;
        return;
    }
    q = p;
    c = *p;
    b = 0x6f;
    if (c == 0x6f) {
        int d = (int)"onFullOuttro" - (int)p;
        do {
            q++;
            if (c == 0) goto match4;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match4:
        state = 7;
        goto set;
    }
    q = p;
    c = *p;
    b = 0x6f;
    if (c == 0x6f) {
        int d = (int)"onFinishedOuttro" - (int)p;
        do {
            q++;
            if (c == 0) goto match5;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match5:
        state = 9;
        goto set;
    }
    goto trigger;
set:
    self->state = state;
    return;
trigger:
    q = p;
    c = *p;
    b = 0x74;
    if (c == 0x74) {
        int d = (int)"triggerAudioCue" - (int)p;
        do {
            q++;
            if (c == 0) goto match6;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b != 0) {
        return;
    }
match6:
    fn_8228F268(self, (unsigned char)args->managed ? *(const char **)args->data : (const char *)args->data);
}
