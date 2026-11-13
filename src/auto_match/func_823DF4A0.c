typedef struct { char pad[0xd4]; int done; } State_823DF4A0;
typedef struct { char pad[0x4b0]; State_823DF4A0 *state; } Obj_823DF4A0;
typedef struct { int f0, f4; Obj_823DF4A0 *obj; } Self_823DF4A0;
extern float lbl_821CA45C[];
extern void fn_8236B4F0(Obj_823DF4A0 *obj, float v);

void fn_823DF4A0(Self_823DF4A0 *self)
{
    Obj_823DF4A0 *obj = self->obj;
    if (obj->state->done != 0)
        return;
    fn_8236B4F0(obj, lbl_821CA45C[1]);
}
