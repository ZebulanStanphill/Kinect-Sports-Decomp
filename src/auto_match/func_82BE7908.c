typedef struct Server_82BE7908 {
    unsigned int address;   /* 0x00 */
    unsigned short port;    /* 0x04 */
    const char *hostName;   /* 0x08 */
} Server_82BE7908;

extern int lbl_8317523C;
extern char lbl_8322B1EC[];
extern Server_82BE7908 lbl_83175248[];
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);

int fn_82BE7908(unsigned int index, unsigned int *address)
{
    if (lbl_8317523C != 0) {
        return 0;
    }
    if (fn_82BEA200(lbl_8322B1EC, "NetworkManager::GetServerAddressU32") == 0) {
        return 0;
    }
    *address = lbl_83175248[index].address;
    fn_82BEA230(lbl_8322B1EC, "NetworkManager::GetServerAddressU32");
    return 1;
}
