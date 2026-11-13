typedef struct Obj_8280E770 {
    int unk00[3];
    float f0c;
} Obj_8280E770;

extern int fn_8280E6C0(Obj_8280E770 *o);
extern float fn_82809CB0(float x);

int fn_8280E770(Obj_8280E770 *o)
{
    if (fn_8280E6C0(o) != 0 && fn_82809CB0(o->f0c - 1.0f) <= 1e-5f) {
        return 1;
    }
    return 0;
}
