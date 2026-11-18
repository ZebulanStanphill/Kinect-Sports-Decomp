/* Counts up while the object is in state 2; once the timer passes its limit, plays (one time) the
   effect chosen by the outcome and by the variant flag. */
typedef struct Handle_82456168 {
    void *object;
} Handle_82456168;

typedef struct Game_82456168 {
    char padding000[0x84c];
    void *context; /* 0x84c */
} Game_82456168;

typedef struct Owner_82456168 {
    char padding00[0x4c];
    Game_82456168 *game; /* 0x4c */
} Owner_82456168;

typedef struct Obj_82456168 {
    Owner_82456168 *owner; /* 0x00 */
    char padding04[0x38];
    int state;                  /* 0x3c */
    int hasOutcome;             /* 0x40 */
    int variant;                /* 0x44 */
    int outcome;                /* 0x48 */
    int direct;                 /* 0x4c */
    float limit;                /* 0x50 */
    int played;                 /* 0x54 */
    float timer;                /* 0x58 */
    Handle_82456168 effects[4]; /* 0x5c */
} Obj_82456168;

extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
extern void *fn_82535298(Handle_82456168 *handle, void *context, void *a, void *b);
extern void fn_82536288(Handle_82456168 *handle);

static __forceinline void Play(Obj_82456168 *self, Handle_82456168 *effect)
{
    Handle_82456168 instance;

    instance = *effect;
    instance.object = fn_82535298(&instance, self->owner->game->context, lbl_83296BC0, lbl_83296BD0);
    fn_82536288(&instance);
}

void fn_82456168(Obj_82456168 *self, float delta)
{
    int success;

    if (self->state != 2) {
        return;
    }
    self->timer = delta + self->timer;
    if (self->timer <= self->limit) {
        return;
    }
    if (self->played != 0) {
        return;
    }
    self->played = 1;
    success = self->hasOutcome == 0 || (self->direct != 0 ? self->outcome : self->outcome == 0);
    if (success) {
        Play(self, self->variant != 0 ? &self->effects[2] : &self->effects[0]);
    } else {
        Play(self, self->variant != 0 ? &self->effects[3] : &self->effects[1]);
    }
}
