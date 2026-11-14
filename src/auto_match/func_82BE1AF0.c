typedef struct {
    char pad0[0x10];
    int state;
    char pad14[0x180 - 0x14];
    void *session;
} Client_82BE1AF0;

extern char lbl_8322B13C[];
extern Client_82BE1AF0 *lbl_8322B130;
extern void *lbl_8322B1D8;
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern int fn_82BEA858(void *session);
extern void *fn_82BE71C8(void *manager);

int fn_82BE1AF0(void)
{
    if (fn_82BEA200(lbl_8322B13C, "XMassiveAdClient::ResumeAll") == 0)
        return 0x69;
    if (lbl_8322B130 == 0) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::ResumeAll");
        return 0xc8;
    }
    if (lbl_8322B130->state != 3) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::ResumeAll");
        return 0xce;
    }
    if (lbl_8322B130->session != 0 && fn_82BEA858(lbl_8322B130->session) == 0) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::ResumeAll");
        return 100;
    }
    if (fn_82BE71C8(lbl_8322B1D8) != 0) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::ResumeAll");
        return 100;
    }
    lbl_8322B130->state = 2;
    fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::ResumeAll");
    return 0;
}
