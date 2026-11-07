typedef union __declspec(intrin_type) __declspec(align(16)) __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

extern unsigned char *fn_8225F670(void);
extern void fn_8225FCE8(const char *name, __vector4 v);
extern unsigned char fn_82E1CAD0(int id);
extern void fn_82E1CB88(const char *name, int value);
extern void fn_82E1CC60(const char *name, float value);
extern void fn_82E1CCA8(void);

void fn_82265140(int skipped, __vector4 position, float height)
{
    unsigned char *p;

    p = fn_8225F670();
    if (*p != 0 && fn_82E1CAD0(0x6c) != 0) {
        fn_82E1CB88("CalibrationSkipped", skipped);
        fn_8225FCE8("CalibrationPosition", position);
        fn_82E1CC60("CameraHeight", height);
        fn_82E1CCA8();
    }
}
