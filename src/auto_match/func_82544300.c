typedef struct Globals_82544300 {
    char pad0[0x270];
    unsigned int h0;            /* 0x270 */
    unsigned int h1;            /* 0x274 */
    char pad278[0x37c - 0x278];
    unsigned int a[5];          /* 0x37c */
    unsigned int b[5];          /* 0x390 */
    char pad3a4[0x3bc - 0x3a4];
    unsigned int x3bc;          /* 0x3bc */
    void *x3c0;                 /* 0x3c0 */
    unsigned int x3c4;          /* 0x3c4 */
    void *x3c8;                 /* 0x3c8 */
    char pad3cc[0x3e0 - 0x3cc];
    void *x3e0;                 /* 0x3e0 */
    char pad3e4[0x3f4 - 0x3e4];
    int initialised;            /* 0x3f4 */
} Globals_82544300;

extern void fn_8262FEC8(unsigned int h);
extern void fn_82A1F238(void *p);
extern Globals_82544300 lbl_8326AF58;

void fn_82544300(void)
{
    int i;

    if (lbl_8326AF58.initialised != 0) {
        if (lbl_8326AF58.x3c0 != 0) {
            fn_82A1F238(lbl_8326AF58.x3c0);
            lbl_8326AF58.x3bc = 0;
            lbl_8326AF58.x3c0 = 0;
        }
        if (lbl_8326AF58.x3c8 != 0) {
            fn_82A1F238(lbl_8326AF58.x3c8);
            lbl_8326AF58.x3c4 = 0;
            lbl_8326AF58.x3c8 = 0;
        }
        if (lbl_8326AF58.x3e0 != 0) {
            fn_82A1F238(lbl_8326AF58.x3e0);
            lbl_8326AF58.x3e0 = 0;
        }
        fn_8262FEC8(lbl_8326AF58.h0);
        lbl_8326AF58.h0 = 0;
        fn_8262FEC8(lbl_8326AF58.h1);
        lbl_8326AF58.h1 = 0;
        for (i = 0; i < 5; i++) {
            fn_8262FEC8(lbl_8326AF58.a[i]);
            lbl_8326AF58.a[i] = 0;
            fn_8262FEC8(lbl_8326AF58.b[i]);
            lbl_8326AF58.b[i] = 0;
        }
        lbl_8326AF58.initialised = 0;
    }
}
