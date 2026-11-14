extern void fn_8277E998(void *self, unsigned int *value);

void fn_827810A8(char *self, unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int kind = (a >> 30) & 1, other = (b >> 30) & 1;
    a &= 0xbfffffff;
    b &= 0xbfffffff;
    c &= 0xbfffffff;
    if (kind == other) {
        fn_8277E998(self + 0x194, &b);
        fn_8277E998(self + 0x1a4, &b);
        if (kind) {
            fn_8277E998(self + 0x194, &a);
            fn_8277E998(self + 0x1a4, &c);
        } else {
            fn_8277E998(self + 0x1a4, &a);
            fn_8277E998(self + 0x194, &c);
        }
    } else {
        fn_8277E998(self + 0x194, &c);
        fn_8277E998(self + 0x1a4, &c);
        if (kind) {
            fn_8277E998(self + 0x194, &a);
            fn_8277E998(self + 0x1a4, &b);
        } else {
            fn_8277E998(self + 0x1a4, &a);
            fn_8277E998(self + 0x194, &b);
        }
    }
}
