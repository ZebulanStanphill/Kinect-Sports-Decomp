typedef struct G_82289258 { int pad0; int pad4; int h8; } G_82289258;
typedef struct Obj_82289258 {
    char pad0[0x690];
    void *strings;          /* 0x690 */
    char pad694[0x11f8 - 0x694];
    void *dialog;           /* 0x11f8 */
} Obj_82289258;
typedef struct New_82289258 { char pad[0x41c]; void *vt; char pad2[0x14]; } New_82289258;

extern unsigned short lbl_820E975C;
extern G_82289258 lbl_83276728;
extern char lbl_821A8C90[];
extern void fn_82528BF8(int table, const char *key, unsigned short *out, int size, int a, int b);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_82F64988(unsigned short *dst, unsigned int size, const unsigned short *src);
extern void *fn_8265C9E0(int size);
extern void fn_8229DCA8(void *self, unsigned short *title, unsigned short *text, unsigned short *yes,
                        unsigned short *no, void (*callback)(void), void *owner, int one, int zero);

void fn_82289258(Obj_82289258 *self, const char *titleKey, const char *textKey, const char *yesKey,
                 const char *noKey, void (*callback)(void), void *arg)
{
    unsigned short title[0x100] = { lbl_820E975C };
    unsigned short format[0x400] = { lbl_820E975C };
    unsigned short text[0x400] = { lbl_820E975C };
    unsigned short yes[0x20] = { lbl_820E975C };
    unsigned short no[0x20] = { lbl_820E975C };
    New_82289258 *n;

    if (self->strings != 0) {
        fn_82528BF8(lbl_83276728.h8, titleKey, title, 0x100, 0, 1);
        fn_82528BF8(lbl_83276728.h8, textKey, format, 0x400, 0, 1);
        if (arg != 0) {
            fn_82528EE0(text, 0x400, format, arg);
        } else {
            fn_82F64988(text, 0x400, format);
        }
        fn_82528BF8(lbl_83276728.h8, yesKey, yes, 0x20, 0, 1);
        if (noKey != 0) {
            fn_82528BF8(lbl_83276728.h8, noKey, no, 0x20, 0, 1);
        }
    }
    n = (New_82289258 *)fn_8265C9E0(0x434);
    if (n != 0) {
        n->vt = lbl_821A8C90;
        fn_8229DCA8(n, title, text, yes, noKey ? no : 0, callback, self, 1, 0);
    } else {
        n = 0;
    }
    self->dialog = n;
}
