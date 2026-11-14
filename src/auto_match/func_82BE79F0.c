typedef struct Server_82BE79F0 {
    unsigned int address;   /* 0x00 */
    unsigned short port;    /* 0x04 */
    const char *hostName;   /* 0x08 */
} Server_82BE79F0;

extern char lbl_8322B1EC[];
extern Server_82BE79F0 lbl_83175248[];
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern int fn_82BE5B38(void *server);

int fn_82BE79F0(void *server)
{
    int port;

    if (server == 0) {
        return -1;
    }
    if (fn_82BEA200(lbl_8322B1EC, "NetworkManager::GetServerPortU16") == 0) {
        return -1;
    }
    port = lbl_83175248[fn_82BE5B38(server)].port;
    fn_82BEA230(lbl_8322B1EC, "NetworkManager::GetServerPortU16");
    return port;
}
