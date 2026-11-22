/* Shows the "get ready" caption with the names of one or two players, the optional objective
   title and line, then starts the caption timer (20 s or 3 s unless overridden). */
typedef struct WString_8229B268 {
    union {
        unsigned short buf[8];
        unsigned short *ptr;
    } bx; /* 0x00 */

    unsigned int size; /* 0x10 */
    unsigned int res;  /* 0x14 */
    char alval;        /* 0x18 */
} WString_8229B268;

typedef struct Player_8229B268 {
    char pad0[0x30];
    unsigned short name[1]; /* 0x30 */
} Player_8229B268;

typedef struct Caption_8229B268 {
    char pad0[0xc];
    int busy; /* 0x0c */
    char pad10[0x4c - 0x10];
    int strings; /* 0x4c */
    char pad50[0x70 - 0x50];
    WString_8229B268 line1; /* 0x70 */
    WString_8229B268 line2; /* 0x8c */
} Caption_8229B268;

typedef struct Settings_8229B268 {
    char pad0[4];
    unsigned char longCaption; /* 0x04 */
} Settings_8229B268;

extern Settings_8229B268 *lbl_832975B0;
extern char lbl_820E975C[];

extern Settings_8229B268 *fn_82250A18(void);
extern void fn_82297DB0(WString_8229B268 *s, int a, int b);
extern void fn_82297868(WString_8229B268 *s, const unsigned short *text, unsigned int length);
extern unsigned int fn_82F64CE0(const unsigned short *text);
extern int fn_82A1E1A0(const unsigned short *text);
extern void fn_82358FD8(int strings, unsigned short *buf, int size, const char *key);
extern void fn_8229C9C0(Caption_8229B268 *self, int type, const unsigned short *a, const unsigned short *b,
                        const unsigned short *c, const unsigned short *d);
extern void fn_8229C8C8(Caption_8229B268 *self, int type, const unsigned short *a, const unsigned short *b,
                        const char *c);
extern void fn_8229CBD0(Caption_8229B268 *self, const unsigned short *title, const unsigned short *line);
extern void fn_8229B6C8(Caption_8229B268 *self, float duration, float delay, int arg);

static __forceinline const unsigned short *CStr(const WString_8229B268 *s)
{
    return 8 <= s->res ? s->bx.ptr : s->bx.buf;
}

static __forceinline void AssignText(WString_8229B268 *s, const unsigned short *text)
{
    fn_82297868(s, text, fn_82F64CE0(text));
}

void fn_8229B268(Caption_8229B268 *self, Player_8229B268 *first, Player_8229B268 *second, int strings,
                 float delay, const unsigned short *objective, int arg)
{
    float duration;
    float overrideDuration = 0.0f;
    WString_8229B268 firstName;
    WString_8229B268 secondName;
    unsigned short caption[0x100];
    unsigned short title[0x20];
    Settings_8229B268 *settings;

    if (self->busy != 0) {
        return;
    }
    if (first == 0 && second == 0) {
        return;
    }
    self->strings = strings;
    fn_82297DB0(&firstName, 0, 0);
    fn_82297DB0(&secondName, 0, 0);
    if (first != 0) {
        AssignText(&firstName, first->name);
    }
    if (second != 0) {
        AssignText(&secondName, second->name);
    }
    fn_82358FD8(self->strings, caption, 0x100, "caption_getready");
    AssignText(&self->line1, caption);
    if (firstName.size != 0 && secondName.size != 0) {
        AssignText(&self->line2, caption);
        fn_8229C9C0(self, 1, CStr(&firstName), caption, CStr(&secondName), caption);
    } else {
        fn_8229C8C8(self, 0, CStr(firstName.size != 0 ? &firstName : &secondName), caption, lbl_820E975C);
    }
    if (objective != 0 && fn_82A1E1A0(objective) > 0) {
        fn_82358FD8(self->strings, title, 0x20, "resultslabel_objectiveTitle");
        fn_8229CBD0(self, title, objective);
    }
    settings = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    duration = settings->longCaption ? 20.0f : 3.0f;
    if (*(unsigned int *)&overrideDuration != 0) {
        duration = overrideDuration;
    }
    fn_8229B6C8(self, duration, delay, arg);
    fn_82297DB0(&secondName, 1, 0);
    fn_82297DB0(&firstName, 1, 0);
}
