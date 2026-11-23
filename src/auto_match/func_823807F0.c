typedef struct Crowd_823807F0 {
    unsigned int sound00;    /* 0x000 */
    unsigned int sounds[17]; /* 0x004 */
    char pad48[0x50];
    float rateOffset; /* 0x098 */
    char pad9c[8];
    float baseLevel; /* 0x0a4 */
    char pada8[4];
    float settings[20][4]; /* 0x0ac */
    char pad1ec[0x18];
    float level;  /* 0x204 */
    float rate;   /* 0x208 */
    int progress; /* 0x20c */
} Crowd_823807F0;

extern void fn_82536070(const char *name, const char *value);
extern void fn_82380D50(Crowd_823807F0 *self, unsigned int *sound);
extern void fn_82380B18(Crowd_823807F0 *self, float *settings);
extern float fn_82380CE0(Crowd_823807F0 *self);
extern void fn_82380C18(Crowd_823807F0 *self, float rate, float time);

static __forceinline void Cheer(const char *type)
{
    fn_82536070("volleyball_crowd_cheer_type", type);
    fn_82536070("volleyball_crowd_cheer_amount", "large");
}

static __forceinline void Advance(Crowd_823807F0 *self)
{
    self->level = self->baseLevel;
    self->progress++;
    fn_82380C18(self, fn_82380CE0(self), 0.5f);
}

static __forceinline void Slow(Crowd_823807F0 *self)
{
    float rate = self->rate - self->rateOffset;

    rate = rate >= 0.0f ? rate : 0.0f;
    rate = rate - 100.0f >= 0.0f ? 100.0f : rate;
    self->rate = rate;
    fn_82380C18(self, rate, 1.5f);
}

void fn_823807F0(Crowd_823807F0 *self, int event)
{
    switch (event) {
    default:
        /* the original has no range check before its byte jump table */
        __assume(0);
    case 0:
        fn_82380B18(self, self->settings[0]);
        break;
    case 1:
        fn_82380B18(self, self->settings[1]);
        break;
    case 2:
        self->level = 0.0f;
        fn_82380B18(self, self->settings[2]);
        break;
    case 3:
        self->level = 0.0f;
        fn_82380B18(self, self->settings[3]);
        break;
    case 4:
        self->level = 0.0f;
        fn_82380B18(self, self->settings[4]);
        break;
    case 5:
        fn_82380B18(self, self->settings[5]);
        break;
    case 6:
        Cheer("winner");
        fn_82380D50(self, &self->sounds[0]);
        self->level = 0.0f;
        fn_82380B18(self, self->settings[6]);
        break;
    case 7:
        Cheer("winner");
        fn_82380D50(self, &self->sounds[0]);
        self->level = 0.0f;
        fn_82380B18(self, self->settings[7]);
        break;
    case 8:
        Cheer("miss");
        fn_82380D50(self, &self->sounds[0]);
        self->level = 0.0f;
        fn_82380B18(self, self->settings[8]);
        break;
    case 9:
        fn_82380D50(self, &self->sounds[9]);
        fn_82380B18(self, self->settings[9]);
        break;
    case 10:
        fn_82380D50(self, &self->sounds[10]);
        fn_82380B18(self, self->settings[10]);
        break;
    case 11:
        fn_82380B18(self, self->settings[11]);
        break;
    case 12:
        Cheer("winner");
        fn_82380D50(self, &self->sounds[0]);
        fn_82380B18(self, self->settings[12]);
        break;
    case 13:
        fn_82380D50(self, &self->sound00);
        Advance(self);
        break;
    case 14:
        Advance(self);
        break;
    case 15:
        Cheer("winner");
        fn_82380D50(self, &self->sounds[0]);
        break;
    case 16:
        fn_82380D50(self, &self->sounds[1]);
        Advance(self);
        break;
    case 17:
        Advance(self);
        break;
    case 18:
        fn_82380D50(self, &self->sounds[2]);
        break;
    case 19:
        fn_82380D50(self, &self->sounds[3]);
        Advance(self);
        break;
    case 20:
        Advance(self);
        break;
    case 21:
        fn_82380D50(self, &self->sounds[4]);
        Advance(self);
        break;
    case 22:
        fn_82380D50(self, &self->sounds[7]);
        Advance(self);
        break;
    case 23:
        Advance(self);
        break;
    case 24:
        fn_82380D50(self, &self->sounds[6]);
        Slow(self);
        break;
    case 25:
        fn_82380D50(self, &self->sounds[12]);
        Advance(self);
        break;
    case 26:
        fn_82380D50(self, &self->sounds[13]);
        Slow(self);
        break;
    case 27:
        fn_82380D50(self, &self->sounds[14]);
        fn_82380B18(self, self->settings[17]);
        break;
    case 28:
        fn_82380D50(self, &self->sounds[15]);
        fn_82380B18(self, self->settings[18]);
        break;
    case 29:
        fn_82380D50(self, &self->sounds[16]);
        fn_82380B18(self, self->settings[19]);
        break;
    }
}
