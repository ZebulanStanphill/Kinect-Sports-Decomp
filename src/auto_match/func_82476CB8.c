typedef struct Function_82476CB8 {
    void *vt;
    int val;
    int pad[2];
    void *self;
    int pad14;
} Function_82476CB8;

typedef struct Profile_82476CB8 {
    char pad0[0x20];
    char *info; /* 0x20 */
} Profile_82476CB8;

typedef struct Session_82476CB8 {
    char pad0[0x44];
    int mode;                /* 0x44 */
    Profile_82476CB8 *host;  /* 0x48 */
    Profile_82476CB8 *local; /* 0x4c */
    char pad50[0x54 - 0x50];
    Profile_82476CB8 *remote; /* 0x54 */
    char pad58[0x64 - 0x58];
    Profile_82476CB8 *owner; /* 0x64 */
    char pad68[0x6c - 0x68];
    int hasOwner; /* 0x6c */
} Session_82476CB8;

typedef struct Screen_82476CB8 {
    char pad0[0x14];
    Session_82476CB8 *session; /* 0x14 */
    char pad18[0x1c - 0x18];
    void *label; /* 0x1c */
    char pad20[0x28 - 0x20];
    Function_82476CB8 onDone; /* 0x28 */
    int strings;              /* 0x40 */
    char pad44[0xa0 - 0x44];
    char request[0x154 - 0xa0]; /* 0xa0 */
    int waiting;                /* 0x154 */
} Screen_82476CB8;

extern unsigned short lbl_820E975C;
extern void *fn_822C5B18(void *, void *);
extern void fn_822806F0(Session_82476CB8 *session, void *request, Screen_82476CB8 *owner, void *callback,
                        int flags);
extern void fn_82528BF8(int, const char *, void *, int, int, int);
extern void fn_822A5480(void *obj, unsigned short *text);

void fn_82476CB8(Screen_82476CB8 *self)
{
    Function_82476CB8 callback;

    fn_822806F0(self->session, self->request, self, fn_822C5B18(&callback, &self->onDone), 0);
    self->waiting = 1;
    {
        unsigned short text[0x800] = {lbl_820E975C};
        Session_82476CB8 *session = self->session;
        Profile_82476CB8 *profile;
        char *info;

        if (session->hasOwner != 0) {
            profile = session->owner;
        } else {
            profile = *(session->mode == 1 || session->mode == 0 ? &session->local : &session->remote);
        }
        info = profile->info;
        fn_82528BF8(self->strings, info != 0 ? info + 0x28 : 0, text, 0x800, 0, 1);
        fn_822A5480(self->label, text);
    }
}
