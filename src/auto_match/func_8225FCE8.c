typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern void fn_82E1CC60(const char *name, float value);

void fn_8225FCE8(const char *name, __vector4 v)
{
    char buf[0x800];
    fn_82526C70(buf, 0x800, "%s_x", name);
    fn_82E1CC60(buf, v.vector4_f32[0]);
    fn_82526C70(buf, 0x800, "%s_y", name);
    fn_82E1CC60(buf, v.vector4_f32[1]);
    fn_82526C70(buf, 0x800, "%s_z", name);
    fn_82E1CC60(buf, v.vector4_f32[2]);
}
