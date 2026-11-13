typedef struct Res_823BB2C0 { unsigned char ok; int failed; } Res_823BB2C0;
typedef struct Obj_823BB2C0 { char pad[0x80]; int handle; } Obj_823BB2C0;

void fn_823BB2C0(Res_823BB2C0 *out, Obj_823BB2C0 *obj)
{
    if (obj->handle != 0) {
        out->ok = 1;
        out->failed = 0;
    } else {
        out->ok = 0;
        out->failed = 1;
    }
}
