typedef struct Server_82BE7A68 {
    int pad0;
    int pad4;
    const char *hostName;   /* 0x08 */
} Server_82BE7A68;

extern char lbl_8322B1EC[];
extern Server_82BE7A68 lbl_83175248[];
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);

const char *fn_82BE7A68(int index)
{
    if (fn_82BEA200(lbl_8322B1EC, "NetworkManager::GetServerHostName") != 0) {
        if (lbl_83175248[index].hostName != 0) {
            fn_82BEA230(lbl_8322B1EC, "NetworkManager::GetServerHostName");
            return lbl_83175248[index].hostName;
        }
        fn_82BEA230(lbl_8322B1EC, "NetworkManager::GetServerHostName");
    }
    return 0;
}
