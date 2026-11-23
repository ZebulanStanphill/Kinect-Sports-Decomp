typedef struct Client_82BE3778 {
    int unk0;           /* 0x000 */
    unsigned int error; /* 0x004 */
    char pad8[8];
    int state; /* 0x010 */
    char pad14[0x14];
    char listener[8];    /* 0x028 */
    char reporter[0xf0]; /* 0x030 */
    char session[0x78];  /* 0x120 */
} Client_82BE3778;

extern char lbl_8322B13C[];
extern Client_82BE3778 *lbl_8322B130;
extern char lbl_82196582[];

extern void fn_82BE5240(Client_82BE3778 *client, int code, const char *message);
extern void fn_82BE5758(void);
extern void fn_82BE57C0(void);
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern void fn_82BE8E48(void);
extern void fn_82BE8FB8(void);
extern int fn_82D7EA10(void);
extern void *fn_82BE56B0(unsigned int size);
extern Client_82BE3778 *fn_82BE29F8(void *mem, void *config, int flag);
extern void *fn_82BE7068(void);
extern void *fn_82BE8458(void *session);
extern void fn_82BE8B30(void *listener, void *reporter);
extern void fn_82BE9078(void);
extern void fn_82BE2E60(int a, int b);

unsigned int fn_82BE3778(void *config)
{
    unsigned int result;
    void *mem;

    result = 0;
    if (lbl_8322B130 != 0) {
        fn_82BE5240(lbl_8322B130, 0xc9, lbl_82196582);
        return 0xc9;
    }
    fn_82BE5758();
    if (fn_82BEA200(lbl_8322B13C, "XMassiveAdClient::Initialize") == 0) {
        return 0x69;
    }
    fn_82BE8E48();
    if (fn_82D7EA10() == 0) {
        result = 0x68;
        fn_82BE8FB8();
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::Initialize");
        fn_82BE57C0();
        return result;
    }
    mem = fn_82BE56B0(0x198);
    if (mem != 0) {
        lbl_8322B130 = fn_82BE29F8(mem, config, 1);
    } else {
        lbl_8322B130 = 0;
    }
    if (lbl_8322B130 == 0) {
        result = 0x65;
        fn_82BE8FB8();
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::Initialize");
        fn_82BE57C0();
        return result;
    }
    if (lbl_8322B130->state == 0) {
        if (lbl_8322B130->error != 0) {
            result = lbl_8322B130->error;
        } else {
            result = 100;
        }
    } else {
        if (fn_82BE7068() == 0) {
            result = 0x65;
            lbl_8322B130->state = 0;
            goto shutdown;
        }
        if (fn_82BE8458(lbl_8322B130->session) == 0) {
            result = 0x65;
            lbl_8322B130->state = 0;
            goto shutdown;
        }
        fn_82BE8B30(lbl_8322B130 != 0 ? lbl_8322B130->listener : 0,
                    lbl_8322B130 != 0 ? lbl_8322B130->reporter : 0);
        fn_82BE9078();
    }
    if (result != 0) {
    shutdown:
        fn_82BE2E60(1, 0);
    }
    fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::Initialize");
    return result;
}
