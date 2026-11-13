/* Timer update: while the value read from the sub-object at 0xa40 is below 0.4 the timer is reset
   to lbl_82186D4C, otherwise a running timer counts down by dt. */
typedef struct Obj_8306D768 {
    char pad0000[0xa40];
    char sub[0x1a80 - 0xa40];
    float timer;
} Obj_8306D768;

extern float fn_83075D60(void *p);
extern float lbl_82186D4C;

void fn_8306D768(Obj_8306D768 *o, float dt)
{
    if (fn_83075D60(o->sub) < 0.4f) {
        o->timer = lbl_82186D4C;
    } else if (o->timer > 0.0f) {
        o->timer = o->timer - dt;
    }
}
