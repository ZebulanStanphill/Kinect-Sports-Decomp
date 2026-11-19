typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_83076F10 {
    __vector4 v;
    char pad[0x10];
} Entry_83076F10;

extern void fn_83075D30(__vector4 *out, Entry_83076F10 *entries, int i);
extern void fn_83075D80(Entry_83076F10 *entries, int i, __vector4 v);
extern __vector4 fn_830760D0(__vector4 q, __vector4 v);
extern __vector4 fn_82F534D8(float x, float y, float z, float w);
extern __vector4 fn_8306ED70(__vector4 a, __vector4 b);
extern void fn_83076E58(Entry_83076F10 *entries, int a, int b);

/*
 * Rotates the 20 skeleton joint positions by q; when mirror is set, also negates x and swaps
 * the left and right arm and leg joints (4-7 with 8-11, 12-15 with 16-19).
 */
void fn_83076F10(Entry_83076F10 *entries, unsigned char mirror, __vector4 q)
{
    __vector4 v;
    unsigned int i;

    for (i = 0; i < 20; i++) {
        fn_83075D30(&v, entries, i);
        v = fn_830760D0(q, v);
        fn_83075D80(entries, i, v);
    }
    if (mirror) {
        for (i = 0; i < 20; i++) {
            fn_83075D30(&v, entries, i);
            v = fn_8306ED70(v, fn_82F534D8(-1.0f, 1.0f, 1.0f, 0.0f));
            fn_83075D80(entries, i, v);
        }
        fn_83076E58(entries, 8, 4);
        fn_83076E58(entries, 9, 5);
        fn_83076E58(entries, 10, 6);
        fn_83076E58(entries, 11, 7);
        fn_83076E58(entries, 16, 12);
        fn_83076E58(entries, 17, 13);
        fn_83076E58(entries, 18, 14);
        fn_83076E58(entries, 19, 15);
    }
}
