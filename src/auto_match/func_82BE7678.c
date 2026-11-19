long _InterlockedDecrement(long volatile *addend);

typedef struct Server_82BE7678 {
    unsigned int address; /* 0x00 */
    unsigned short port;  /* 0x04 */
    char *hostName;       /* 0x08 */
} Server_82BE7678;

typedef struct Object_82BE7678 Object_82BE7678;

typedef struct ObjectVtbl_82BE7678 {
    void (*Delete)(Object_82BE7678 *self, unsigned int flags); /* 0x00 */
} ObjectVtbl_82BE7678;

struct Object_82BE7678 {
    ObjectVtbl_82BE7678 *vt;
};

extern Object_82BE7678 *lbl_8322B1DC;
extern Object_82BE7678 *lbl_8322B1E0;
extern long lbl_8322B1E8;
extern char lbl_8322B1EC[];
extern Server_82BE7678 lbl_83175248[];
extern void (*lbl_831751CC)(void *p);
extern void fn_82BA02A8(void);
extern void fn_82BEA1F8(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);

void fn_82BE7678(void)
{
    int i;
    Server_82BE7678 *server;

    if (lbl_8322B1DC != 0) {
        lbl_8322B1DC->vt->Delete(lbl_8322B1DC, 1);
        lbl_8322B1DC = 0;
        fn_82BA02A8();
        if (lbl_8322B1E0 != 0) {
            lbl_8322B1E0->vt->Delete(lbl_8322B1E0, 1);
            lbl_8322B1E0 = 0;
        }
        _InterlockedDecrement(&lbl_8322B1E8);
        if (lbl_8322B1E8 == 0) {
            fn_82BEA1F8(lbl_8322B1EC, "MassiveAdClient3::CNetworkManager::Shutdown");
            server = lbl_83175248;
            for (i = 16; i != 0; i--) {
                server->address = 0;
                server->port = 1000;
                if (server->hostName != 0) {
                    lbl_831751CC(server->hostName);
                    server->hostName = 0;
                }
                server++;
            }
            fn_82BEA230(lbl_8322B1EC, "MassiveAdClient3::CNetworkManager::Shutdown");
        }
    }
}
