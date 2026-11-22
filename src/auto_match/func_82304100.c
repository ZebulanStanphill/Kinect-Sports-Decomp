typedef struct Motion_82304100 {
    char pad00[0x48];
    float x; /* 0x48 */
    float y; /* 0x4c */
} Motion_82304100;

typedef struct Body_82304100 {
    char pad00[0xc0];
    Motion_82304100 motion; /* 0xc0 */
} Body_82304100;

typedef struct Obj_82304100 {
    char pad00[0x50];
    int active;          /* 0x50 */
    Body_82304100 *body; /* 0x54 */
    char pad58[0x14];
    char controller[0x54];   /* 0x6c */
    unsigned char suspended; /* 0xc0 */
} Obj_82304100;

extern void fn_8250EC68(void *controller);

void fn_82304100(Obj_82304100 *self)
{
    Motion_82304100 *motion;
    self->active = 0;
    if (self->suspended == 0) {
        fn_8250EC68(self->controller);
    }
    motion = &self->body->motion;
    motion->x *= 0.6666667f;
    motion->y *= 0.6666667f;
}
