typedef struct Obj_8254F110 {
    int pad0;
    void *target;
    char pad8[0xe8];
    int active;
} Obj_8254F110;

extern const float lbl_82193AD8[];
extern void fn_8254E670(Obj_8254F110 *self, int a, int b, float time, float start, float y, float x);

void fn_8254F110(Obj_8254F110 *self, int frames, float x, float y)
{
    if (self->target != 0) {
        fn_8254E670(self, 5, 9, (float)frames * lbl_82193AD8[6], 0.0f, y, x);
        self->active = 1;
    }
}
