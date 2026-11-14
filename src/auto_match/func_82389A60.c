typedef struct {
    int pad0;
    char name[1];
} Anim_82389A60;
typedef struct {
    char pad0[0x20];
    Anim_82389A60 *anim;
} State_82389A60;
typedef struct {
    char pad0[0x114];
    State_82389A60 *state;
} Actor_82389A60;
typedef struct {
    char pad0[0x24];
    Actor_82389A60 *a;
    Actor_82389A60 *b;
    char pad2c[4];
    int count;
} Obj_82389A60;

extern unsigned char fn_822BD338(const void *s, const char *text);

int fn_82389A60(Obj_82389A60 *self)
{
    if (self->count > 1 && self->a != 0 && self->b != 0) {
        char *nameA = self->a->state->anim->name;
        char *nameB = self->b->state->anim->name;
        if ((fn_822BD338(nameA, "run") || fn_822BD338(nameA, "idle")) &&
            (fn_822BD338(nameB, "run") || fn_822BD338(nameB, "idle")))
            return 1;
    }
    return 0;
}
