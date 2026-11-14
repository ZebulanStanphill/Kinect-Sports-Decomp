typedef struct Axis_8226B170 { float rate; char pad[0x14]; } Axis_8226B170;
typedef struct Obj_8226B170 {
    char pad0[0x1c];
    float angle[3];          /* 0x1c */
    char pad28[0x20];
    Axis_8226B170 axis[3];   /* 0x48 */
} Obj_8226B170;

extern float fn_8280A580(float angle);

void fn_8226B170(Obj_8226B170 *self, float dt)
{
    self->angle[0] += self->axis[0].rate * dt;
    self->angle[0] = fn_8280A580(self->angle[0]);
    self->angle[1] += self->axis[1].rate * dt;
    self->angle[1] = fn_8280A580(self->angle[1]);
    self->angle[2] += self->axis[2].rate * dt;
    self->angle[2] = fn_8280A580(self->angle[2]);
}
