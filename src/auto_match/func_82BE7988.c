typedef struct Server_82BE7988 {
    int pad0;
    unsigned short port;    /* 0x04 */
    const char *hostName;   /* 0x08 */
} Server_82BE7988;

extern char lbl_8322B1EC[];
extern Server_82BE7988 lbl_83175248[];
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);

void fn_82BE7988(unsigned int index, unsigned short port)
{
    if (index <= 0xf && fn_82BEA200(lbl_8322B1EC, "CNetworkManager::SetServerPort") != 0) {
        lbl_83175248[index].port = port;
        fn_82BEA230(lbl_8322B1EC, "CNetworkManager::SetServerPort");
    }
}
