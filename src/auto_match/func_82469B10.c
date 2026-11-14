typedef struct Obj_82469B10 {
    char pad0[0x10];
    int precision;
} Obj_82469B10;

extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);

void fn_82469B10(Obj_82469B10 *self, unsigned short *buf, float value)
{
    switch (self->precision) {
    case 1:
        fn_82528EE0(buf, 0x40, L"%.1f", value);
        break;
    case 2:
        fn_82528EE0(buf, 0x40, L"%.1f", value);
        break;
    default:
        fn_82528EE0(buf, 0x40, L"%.0f", value);
        break;
    }
}
