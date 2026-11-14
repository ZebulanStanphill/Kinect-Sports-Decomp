
typedef struct Owner_82519DD0 Owner_82519DD0;

typedef struct Vt_82519DD0 {
    void *pad[6];
    void (*a)(Owner_82519DD0 *, float);
    void (*b)(Owner_82519DD0 *, float);
    void (*c)(Owner_82519DD0 *, float);
    void (*d)(Owner_82519DD0 *, float);
} Vt_82519DD0;

struct Owner_82519DD0 {
    Vt_82519DD0 *vt;
    int *context;
    int pad8;
    int value;
    char pad10[0x40];
    unsigned state, pad54, previous;
    unsigned char active;
};

extern void fn_8251A808(Owner_82519DD0 *);
extern void fn_8251A8D0(Owner_82519DD0 *);
extern void fn_828C40D8(int);

void fn_82519DD0(Owner_82519DD0 *self, float delta)
{
    void (*call)(Owner_82519DD0 *, float);
    switch (self->state) {
    case 0:
        fn_8251A808(self);
        break;
    case 1:
        return;
    case 2:
        if (self->previous == 2 && self->active)
            self->value = 0;
        break;
    case 3:
        if (self->previous != 3)
            self->vt->a(self, delta);
        else if (self->active) {
            call = self->vt->c;
            goto invoke;
        }
        call = self->vt->b;
        goto invoke;
        break;
    case 4:
        if (self->previous != 4) {
            call = self->vt->d;
            goto invoke;
        } else if (self->active)
            fn_828C40D8(self->context[2]);
        break;
    case 5:
        fn_8251A8D0(self);
        break;
    }
    return;
invoke:
    call(self, delta);
}
