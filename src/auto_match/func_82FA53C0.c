typedef struct Ent_82FA53C0 { void *p; char pad[0x4c]; } Ent_82FA53C0;
extern void fn_82FA57F0(int i);
extern void fn_8306C0C0(void *p);
extern int lbl_83264208;
extern int lbl_8326420C;
extern Ent_82FA53C0 *lbl_83264210;
extern unsigned char lbl_83264214;

void fn_82FA53C0(void)
{
    int i;
    if (lbl_83264214 != 0) {
        for (i = 0; i < lbl_83264208; i++) {
            if (lbl_83264210[i].p != 0)
                fn_82FA57F0(i);
        }
        fn_8306C0C0(lbl_83264210);
        lbl_83264208 = 0;
        lbl_8326420C = 0;
        lbl_83264210 = 0;
        lbl_83264214 = 0;
    }
}
