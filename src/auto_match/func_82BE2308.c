typedef struct {
    char pad0[0x10];
    int state;
} Session_82BE2308;

typedef struct {
    char pad0[0x10];
    int state;
    char pad14[0x11c - 0x14];
    unsigned short flags;
    char pad11e[0x180 - 0x11e];
    Session_82BE2308 *session;
} Client_82BE2308;

extern char lbl_8322B13C[];
extern Client_82BE2308 *lbl_8322B130;
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern unsigned int fn_82BEA668(Session_82BE2308 *session);

unsigned int fn_82BE2308(void)
{
    unsigned int result;

    if (fn_82BEA200(lbl_8322B13C, "XMassiveAdClient::FlushImpressions") == 0)
        return 0x69;
    if (lbl_8322B130 == 0) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::FlushImpressions");
        return 0xc8;
    }
    if (lbl_8322B130->flags & 4) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::FlushImpressions");
        return 0x68;
    }
    if (lbl_8322B130->state != 2 && lbl_8322B130->state != 4) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::FlushImpressions");
        return 0xce;
    }
    if (lbl_8322B130->session == 0) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::FlushImpressions");
        return 0xd1;
    }
    if (lbl_8322B130->session->state != 2 && lbl_8322B130->session->state != 0xf) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::FlushImpressions");
        return 0xce;
    }
    result = fn_82BEA668(lbl_8322B130->session);
    if (result != 0) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::FlushImpressions");
        return result;
    }
    fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::FlushImpressions");
    return 0;
}
