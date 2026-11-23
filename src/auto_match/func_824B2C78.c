typedef struct Ring_824B2C78 {
    char *first;        /* 0x00 */
    char *last;         /* 0x04 */
    char *cur;          /* 0x08 */
    char *end;          /* 0x0c */
    unsigned int count; /* 0x10 */
} Ring_824B2C78;

typedef struct Source_824B2C78 {
    unsigned char pad0[0x48];
    float rangeMin; /* 0x48 */
    float rangeMax; /* 0x4c */
} Source_824B2C78;

typedef struct Tracker_824B2C78 {
    void *vt;              /* 0x00 */
    Ring_824B2C78 samples; /* 0x04 */
    unsigned char pad18[0x4];
    float elapsed;        /* 0x1c */
    int field20;          /* 0x20 */
    int field24;          /* 0x24 */
    int field28;          /* 0x28 */
    int field2c;          /* 0x2c */
    unsigned char active; /* 0x30 */
    unsigned char pad31[0x3];
    float timeout; /* 0x34 */
    int field38;   /* 0x38 */
    int field3c;   /* 0x3c */
    unsigned char pad40[0x20];
    int field60;    /* 0x60 */
    float scale;    /* 0x64 */
    float value68;  /* 0x68 */
    float value6c;  /* 0x6c */
    float value70;  /* 0x70 */
    int field74;    /* 0x74 */
    int field78;    /* 0x78 */
    float value7c;  /* 0x7c */
    int field80;    /* 0x80 */
    float value84;  /* 0x84 */
    float value88;  /* 0x88 */
    float rangeMin; /* 0x8c */
    float rangeMax; /* 0x90 */
} Tracker_824B2C78;

extern void fn_824B3F18(Ring_824B2C78 *ring);
extern char lbl_821C01DC[];

Tracker_824B2C78 *fn_824B2C78(Tracker_824B2C78 *self, Source_824B2C78 *source)
{
    self->vt = lbl_821C01DC;
    {
        char **pFirst = &self->samples.first;
        *pFirst = 0;
    }
    self->samples.last = 0;
    self->samples.cur = 0;
    self->samples.end = 0;
    self->samples.count = 0;
    fn_824B3F18(&self->samples);
    self->field20 = 0;
    self->field24 = 0;
    self->field28 = 0;
    self->field2c = 0;
    self->field60 = 0;
    self->field74 = 0;
    self->field78 = 0;
    self->elapsed = 0.0f;
    self->field80 = 0;
    self->value68 = 0.0f;
    self->value6c = 0.0f;
    self->value70 = 0.0f;
    self->value7c = 0.0f;
    self->value84 = 0.0f;
    self->value88 = 0.0f;
    self->scale = 1.25f;
    self->rangeMin = source->rangeMin;
    self->rangeMax = source->rangeMax;
    self->active = 0;
    self->field38 = 0;
    self->timeout = 10.0f;
    self->field3c = 0;
    return self;
}
