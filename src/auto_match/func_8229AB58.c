// Formats the "spectatorsTurnFormat" caption with a name and sets it on the caption box.
// The std::wstring is spelled out (its _Tidy and assign stay calls) so the function also
// links under LTCG next to the C++ definers of fn_82297DB0/fn_82297868.
typedef struct WString_8229AB58 {
    union {
        unsigned short buf[8];
        unsigned short *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} WString_8229AB58;

typedef struct Caption_8229AB58 {
    char pad0[0x121c];
    float time;      /* 0x121c */
    int busy;        /* 0x1220 */
} Caption_8229AB58;

typedef struct Ctx_8229AB58 {
    char pad0[0x1c];
    int strings;     /* 0x1c */
    char pad20[4];
    Caption_8229AB58 *caption; /* 0x24 */
} Ctx_8229AB58;

extern void *memset(void *, int, unsigned int);
extern unsigned int fn_82F64CE0(const unsigned short *str);
extern void fn_82297DB0(WString_8229AB58 *self, unsigned char built, unsigned int newsize);
extern WString_8229AB58 *fn_82297868(WString_8229AB58 *self, const unsigned short *s, unsigned int n);
extern int fn_82358FD8(int h, unsigned short *buf, int n, const char *key);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_82299AC8(void *dst, const unsigned short *s);
extern float lbl_821916FC;
extern unsigned short lbl_820E975C;

void fn_8229AB58(Ctx_8229AB58 *self, const unsigned short *name)
{
    if (name != 0) {
        unsigned short text[256];
        WString_8229AB58 s;
        unsigned short format[256];
        const unsigned short *str;
        Caption_8229AB58 *caption;

        text[0] = lbl_820E975C;
        memset(text + 1, 0, 0x1fe);
        fn_82297DB0(&s, 0, 0);
        fn_82358FD8(self->strings, format, 0x100, "spectatorsTurnFormat");
        fn_82528EE0(text, 0x100, format, name);
        fn_82297868(&s, text, fn_82F64CE0(text));
        str = s.res >= 8 ? s.bx.ptr : s.bx.buf;
        caption = self->caption;
        if (caption->busy == 0) {
            fn_82299AC8(caption, str);
            caption->time = lbl_821916FC;
        }
        fn_82297DB0(&s, 1, 0);
    }
}
