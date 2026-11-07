typedef struct Vec3_827F3930 {
    float x;
    float y;
    float z;
} Vec3_827F3930;

extern void fn_82809D40(float x, float z);
extern void fn_8280DF98(void *obj, const char *name, Vec3_827F3930 *out);

extern char lbl_8219609C[];

void fn_827F3930(void *param_1)
{
    Vec3_827F3930 v;

    fn_8280DF98(param_1, lbl_8219609C, &v);
    fn_82809D40(v.x, v.z);
}
