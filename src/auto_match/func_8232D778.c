typedef struct Owner_8232D778 Owner_8232D778;

typedef struct Self_8232D778 {
    char pad0[0xc];
    Owner_8232D778 *owner;
    char pad10[0x38];
    float timer;
} Self_8232D778;

extern void fn_8232C528(Owner_8232D778 *owner, int arg);

void fn_8232D778(Self_8232D778 *self, float dt)
{
    self->timer -= dt;
    if (self->timer <= 0.0f) {
        fn_8232C528(self->owner, 0);
    }
}
