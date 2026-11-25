typedef struct Target_82508160 {
    char pad0[0x84];
    float chance; /* 0x84 */
    int forced;   /* 0x88 */
    float delay;  /* 0x8c */
    int pad90;    /* 0x90 */
    float weight; /* 0x94 */
} Target_82508160;

typedef struct Entry_82508160 {
    Target_82508160 *target; /* 0x00 */
    float weight;            /* 0x04 */
} Entry_82508160;

typedef struct EntryVector_82508160 {
    Entry_82508160 *first; /* 0x00 */
    Entry_82508160 *last;  /* 0x04 */
    Entry_82508160 *end;   /* 0x08 */
} EntryVector_82508160;

typedef struct Results_82508160 {
    void *first;
    void *last;
    void *end;
} Results_82508160;

typedef struct Picker_82508160 {
    int pad0;     /* 0x00 */
    void *player; /* 0x04 */
    char pad8[0x10 - 0x8];
    float cooldown;           /* 0x10 */
    void *context;            /* 0x14 */
    Target_82508160 *pending; /* 0x18 */
    int pendingForce;         /* 0x1c */
    float pendingDelay;       /* 0x20 */
    int queueEnabled;         /* 0x24 */
    char pad28[0x3c - 0x28];
    EntryVector_82508160 used; /* 0x3c */
    char pad48[0x50 - 0x48];
    int variant;     /* 0x50 */
    char options[4]; /* 0x54 */
} Picker_82508160;

extern unsigned int lbl_83265A28;

extern int fn_82520780(unsigned int *seed, float chance);
extern int fn_825529B0(void **holder);
extern int fn_82552788(void *context, void **player, Target_82508160 *target, int variant, int hasVariant,
                       int a, int b, Results_82508160 *results, void *options);
extern void fn_822CD140(Results_82508160 *results);
extern void fn_824BF8A8(EntryVector_82508160 *self, const Entry_82508160 *value);

int fn_82508160(Picker_82508160 *self, Target_82508160 *target, int force, int allowQueue)
{
    int lucky;
    int found;
    int unused;
    int cooled;
    int idle;
    Entry_82508160 *it;

    lucky = fn_82520780(&lbl_83265A28, target->chance) != 0;
    found = 0;
    for (it = self->used.first; it != self->used.last; it++) {
        if (it->target == target) {
            found = 1;
            break;
        }
    }
    unused = found == 0;
    cooled = self->cooldown <= 0.0f || target->forced != 0;
    if (fn_825529B0(&self->player) == 0) {
        idle = 1;
    } else {
        idle = target->forced != 0;
    }
    if (force != 0 || (lucky && unused)) {
        if (idle && cooled) {
            {
                Results_82508160 results;

                results.first = 0;
                results.last = 0;
                results.end = 0;
                fn_82552788(self->context, &self->player, target, self->variant, self->variant != 0, 0, 0,
                            &results, self->options);
                fn_822CD140(&results);
            }
            self->cooldown = 0.5f;
            {
                Entry_82508160 entry;

                entry.target = target;
                entry.weight = target->weight;
                fn_824BF8A8(&self->used, &entry);
            }
            return 1;
        }
        if (self->queueEnabled != 0 && allowQueue != 0) {
            self->pending = target;
            self->pendingForce = force;
            self->pendingDelay = target->delay;
        }
    }
    return 0;
}
