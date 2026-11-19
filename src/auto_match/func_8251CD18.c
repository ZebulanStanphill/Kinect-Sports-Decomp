typedef struct Session_8251CD18 {
    void *owner;  /* 0x00 */
    void *device; /* 0x04 */
    int busy;     /* 0x08 */
    char pad0c[0x24];
} Session_8251CD18;

typedef struct System_8251CD18 {
    char pad0[0x14];
    int generation; /* 0x14 */
    int pad18;
    int pending1c; /* 0x1c */
    int pending20; /* 0x20 */
    char pad24[0x4];
    Session_8251CD18 sessions[4]; /* 0x28 */
    Session_8251CD18 *current;    /* 0xe8 */
    Session_8251CD18 *active;     /* 0xec */
    int padf0;
    Session_8251CD18 *focused; /* 0xf4 */
} System_8251CD18;

extern System_8251CD18 lbl_832960A0;
extern void fn_825269D0(int id, void *value);

static __forceinline Session_8251CD18 *KeepUnlessRemoved(Session_8251CD18 *current,
                                                         Session_8251CD18 *removed)
{
    return removed != current ? current : 0;
}

int fn_8251CD18(void *device)
{
    int found;
    int i;
    Session_8251CD18 *session;
    Session_8251CD18 *saved;

    found = 0;
    for (i = 3; i >= 0; i--) {
        session = &lbl_832960A0.sessions[i];
        if (session->device != 0) {
            fn_825269D0(0xf, device);
        }
        if ((device == session->device || device == session->owner) && session->busy == 0) {
            session->busy = 1;
            saved = lbl_832960A0.active;
            lbl_832960A0.active = session;
            found = 1;
            fn_825269D0(0x11, session->device);
            lbl_832960A0.active = saved;
            lbl_832960A0.focused = KeepUnlessRemoved(lbl_832960A0.focused, session);
        }
    }
    if (found != 0) {
        lbl_832960A0.generation++;
        lbl_832960A0.pending1c = 0;
        lbl_832960A0.pending20 = 0;
    }
    return found;
}
