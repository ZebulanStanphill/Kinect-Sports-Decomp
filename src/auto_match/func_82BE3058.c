typedef struct Zone_82BE3058 {
    char pad0[0x10];
    int state; /* 0x10 */
} Zone_82BE3058;

typedef struct Client_82BE3058 {
    char pad0[0x10];
    int state; /* 0x10 */
    char pad14[0x16c - 0x14];
    void *zones; /* 0x16c */
    char pad170[0x180 - 0x170];
    Zone_82BE3058 *currentZone; /* 0x180 */
} Client_82BE3058;

extern char lbl_8322B13C[];
extern Client_82BE3058 *lbl_8322B130;
extern unsigned __int64 lbl_8322B1C8;
extern char lbl_82196582[];
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern int fn_82BEA858(Zone_82BE3058 *zone);
extern int fn_82BE5240(Client_82BE3058 *client, int code, const char *format, ...);
extern unsigned int fn_82BE2008(Client_82BE3058 *client, const char *zoneName);
extern Zone_82BE3058 *fn_82BE1C80(Client_82BE3058 *client, const char *zoneName);
extern void fn_82BE1D18(Client_82BE3058 *client, const char *zoneName, int known);

static __forceinline int IsEmpty(const char *s)
{
    return s == 0 || *s == 0;
}

int fn_82BE3058(const char *zoneName)
{
    Zone_82BE3058 *zone;

    if (fn_82BEA200(lbl_8322B13C, "XMassiveAdClient::EnterZone") == 0) {
        return 0x69;
    }
    if (lbl_8322B130 == 0) {
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::EnterZone");
        return 200;
    }
    if (IsEmpty(zoneName)) {
        lbl_8322B130->state = 0;
        fn_82BE5240(lbl_8322B130, 300, lbl_82196582);
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::EnterZone");
        return 300;
    }
    if (lbl_8322B130->zones != 0 && fn_82BE2008(lbl_8322B130, zoneName) == 0) {
        fn_82BE5240(lbl_8322B130, 300, "Cannot Find Zone: %s", zoneName);
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::EnterZone");
        return 300;
    }
    zone = fn_82BE1C80(lbl_8322B130, zoneName);
    if (zone != 0 && zone->state != 0xe) {
        if (zone->state == 0xf) {
            zone->state = 2;
        }
        lbl_8322B130->currentZone = zone;
        fn_82BEA858(zone);
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::EnterZone");
        return 0;
    } else {
        fn_82BE1D18(lbl_8322B130, zoneName, lbl_8322B130->zones != 0);
        if (lbl_8322B130->state == 5) {
            lbl_8322B130->state = 8;
        }
        if (lbl_8322B1C8 == 0 && lbl_8322B130->state == 0xb) {
            lbl_8322B130->state = 10;
        }
        fn_82BEA230(lbl_8322B13C, "XMassiveAdClient::EnterZone");
        return 0;
    }
}
