typedef struct Handle_8239D390 {
    void *p;
} Handle_8239D390;

typedef struct Owner_8239D390 {
    char pad0[0x84c];
    void *ctx; /* 0x84c */
} Owner_8239D390;

typedef struct Game_8239D390 {
    char pad0[0x174];
    Owner_8239D390 *owner; /* 0x174 */
    char pad178[0x254 - 0x178];
    Handle_8239D390 sound; /* 0x254 */
    char pad258[0x4];
    unsigned int lastScore; /* 0x25c */
} Game_8239D390;

extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
extern int fn_82526C70(char *buf, unsigned int size, const char *format, ...);
extern void fn_82536070(const char *name, const char *value);
extern void *fn_82535298(Handle_8239D390 *h, void *ctx, void *a, void *b);
extern void fn_82536288(Handle_8239D390 *h);

void fn_8239D390(Game_8239D390 *self, unsigned int score)
{
    Handle_8239D390 sound;

    if (score > self->lastScore && score % 10 == 0 && score <= 300) {
        char name[16] = {0};

        if (score >= 300) {
            fn_82526C70(name, sizeof(name), "score300");
        } else if (score >= 100) {
            fn_82526C70(name, sizeof(name), "score%d", score);
        } else {
            fn_82526C70(name, sizeof(name), "score0%d", score);
        }
        fn_82536070("tabletennis_score_mini", name);
        sound = self->sound;
        sound.p = fn_82535298(&sound, self->owner->ctx, lbl_83296BC0, lbl_83296BD0);
        fn_82536288(&sound);
        self->lastScore = score;
    }
}
