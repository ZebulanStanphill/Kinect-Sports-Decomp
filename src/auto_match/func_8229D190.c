typedef struct Value_8229D190 {
    int type;
    int flags;

    union {
        double number;
        int integer;
    } data;
} Value_8229D190;

typedef struct Owner_8229D190 {
    float progress[2];
    void *movie;
} Owner_8229D190;

extern void fn_82273CD8(Value_8229D190 *, int);
extern void fn_82273C88(Value_8229D190 *);
extern void fn_82672C20(void *, const char *, Value_8229D190 *, int);

void fn_8229D190(Owner_8229D190 *self, int icon, unsigned int hand)
{
    float progress;
    float zero;
    Value_8229D190 values[2];
    Value_8229D190 *value;
    int i;
    switch (hand) {
    case 2:
        progress = self->progress[1];
        break;
    case 0:
    case 1:
        progress = self->progress[0];
        break;
    default:
        return;
    }
    zero = 0.0f;
    if (progress <= zero) {
        return;
    }
    for (i = 0; i < 2; i++) {
        values[i].type = 0;
        values[i].flags = 0;
    }
    fn_82273CD8(&values[0], 3);
    values[0].data.number = (double)icon;
    fn_82273CD8(&values[1], 3);
    values[1].data.number = (double)(int)hand;
    switch (hand) {
    case 0:
        self->progress[0] = zero;
        self->progress[1] = zero;
        break;
    case 1:
        self->progress[0] = zero;
        break;
    case 2:
        self->progress[1] = zero;
        break;
    default:
        break;
    }
    fn_82672C20(self->movie, "_root.handIconMngr.resetProgress", values, 2);
    value = values + 2;
    i = 1;
    do {
        --value;
        fn_82273C88(value);
    } while (--i >= 0);
}
