typedef struct { int a; void *rc; } SP_8229F2C0;
typedef struct { int a; int b; } L8_8229F2C0;

typedef struct Scoreboard_8229F2C0 {
    void *movie;            /* +0x0 */
    void *f4;               /* +0x4 */
    int f8;                 /* +0x8 */
    int fc;                 /* +0xc */
    int f10;                /* +0x10 */
    char text0[0x20];       /* +0x14 */
    char text1[0x20];       /* +0x34 */
    char text2[0x20];       /* +0x54 */
    int values[8];          /* +0x74 */
    int f94;                /* +0x94 */
    int f98;                /* +0x98 */
    short f9c;              /* +0x9c */
    char pad9e[0x130 - 0x9e];
    int f130;               /* +0x130 */
} Scoreboard_8229F2C0;

extern void fn_822315A0(void *);
extern void fn_82266D28(void *, int);
extern void fn_823F2E20(void *, void *);
extern void fn_82520158(const char *, L8_8229F2C0 *, int);
extern void *fn_8266EC60(void);
extern void *fn_8266EE08(SP_8229F2C0 *, void *, L8_8229F2C0 *, int, int, int);
extern void fn_8266F6A8(void *, int);
extern void fn_82673A28(void *, void (*)(void), void *);
extern void fn_82A1EFC0(void *dst, int value, unsigned int size);
extern void fn_822A0360(void);
extern void fn_8229F4F8(Scoreboard_8229F2C0 *self, int arg);

Scoreboard_8229F2C0 *fn_8229F2C0(Scoreboard_8229F2C0 *p)
{
    L8_8229F2C0 name;
    SP_8229F2C0 ref;
    int i;

    p->movie = 0;
    p->f4 = 0;
    fn_82266D28(p, 0);
    p->fc = 0;
    p->f10 = 0;
    { int *q = &p->f98; *q = -1; }
    p->f94 = 0;
    p->f130 = 0;
    for (i = 0; i < 8; i++)
        p->values[i] = 0;
    fn_82A1EFC0(p->text0, 0, 0x20);
    fn_82A1EFC0(p->text2, 0, 0x20);
    fn_82A1EFC0(p->text1, 0, 0x20);
    fn_82520158("ui_scoreboard", &name, 0);
    fn_823F2E20(p, fn_8266EE08(&ref, fn_8266EC60(), &name, 0, 1, 0));
    if (ref.rc != 0)
        fn_822315A0(ref.rc);
    fn_8266F6A8(p->movie, 3);
    fn_82673A28(p->movie, fn_822A0360, p);
    fn_8229F4F8(p, 0);
    p->f9c = 0;
    return p;
}
