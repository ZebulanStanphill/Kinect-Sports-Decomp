typedef struct Obj_8247C3C8 {
    char pad0[0xc];
    float time;
} Obj_8247C3C8;

typedef struct Self_8247C3C8 {
    char pad0[0x10];
    char sub[0x94];
    Obj_8247C3C8 *obj;
    float time;
} Self_8247C3C8;

extern void fn_8247BC60(void *p);
extern void fn_8251FA58(Obj_8247C3C8 *p);
extern float lbl_831D3CCC[];

void fn_8247C3C8(Self_8247C3C8 *self, float dt)
{
    float t;

    fn_8247BC60(self->sub);
    t = self->time + dt;
    self->time = t;
    if (self->obj != 0 && t > self->obj->time + lbl_831D3CCC[8]) {
        fn_8251FA58(self->obj);
        self->obj = 0;
    }
}
