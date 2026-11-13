typedef struct Obj_82800B18 {
    char pad0[0xc];
    float angle;
} Obj_82800B18;

extern float fn_82809CB0(float v);

void fn_82800B18(Obj_82800B18 *self, unsigned int mode)
{
    switch (mode) {
    case 0:
        self->angle = fn_82809CB0(self->angle);
        break;
    case 1:
        self->angle = -fn_82809CB0(self->angle);
        break;
    }
}
