typedef struct Object_82BEE850 Object_82BEE850;

typedef struct ObjectVtbl_82BEE850 {
    void *(*Destroy)(Object_82BEE850 *self, int flags); /* 0x00 */
} ObjectVtbl_82BEE850;

struct Object_82BEE850 {
    ObjectVtbl_82BEE850 *vtbl; /* 0x00 */
};

typedef struct Server_82BEE850 {
    Object_82BEE850 base; /* 0x00 */
    char pad04[0x10];
    unsigned char type; /* 0x14 */
    char pad15[3];
    const char *hostName; /* 0x18 */
} Server_82BEE850;

typedef struct List_82BEE850 {
    int unknown0[2];
    int current; /* 0x08 */
} List_82BEE850;

typedef struct DnsResult_82BEE850 {
    int status;              /* 0x00 */
    unsigned int count;      /* 0x04 */
    unsigned int address[8]; /* 0x08 */
} DnsResult_82BEE850;

typedef struct TitleServer_82BEE850 {
    unsigned int address; /* 0x00 */
    char pad04[0xcc];
} TitleServer_82BEE850;

extern int lbl_8322B1E4;

extern void Sleep(unsigned int milliseconds);
extern int XNetDnsLookup(const char *hostName, void *event, DnsResult_82BEE850 **result);
extern int XNetDnsRelease(DnsResult_82BEE850 *result);
extern int XNetRandom(unsigned char *buffer, unsigned int size);
extern int XNetServerToInAddr(unsigned int server, unsigned int serviceId, unsigned int *address);
extern void *memset(void *dst, int value, unsigned int size);
extern void fn_82BE7B78(void);
extern void fn_82BE7B88(void);
extern int fn_82BE8F88(void);
extern void fn_82BE5340(List_82BEE850 *list);
extern void *fn_82BE5378(List_82BEE850 *list);
extern void fn_82BE5350(List_82BEE850 *list);
extern void fn_82BE5478(List_82BEE850 *list);
extern void fn_82BE54C0(List_82BEE850 *list);
extern void fn_82BE56C0(List_82BEE850 *list);
extern void fn_82BE7850(unsigned int type, unsigned int address, const char *hostName);
extern int fn_82CE2220(const char *serverInfo, unsigned int count, unsigned int *bufferSize,
                       void **enumerator);
extern int fn_82A1E988(void *enumerator, void *buffer, unsigned int bufferSize, unsigned int *returned,
                       void *overlapped);
extern void fn_82A1E658(void *handle);

/* Resolves the configured servers by DNS, frees the list, then adds one random title server of the
   "MASSIVE-LSP" group for every server type. */
int fn_82BEE850(List_82BEE850 *list)
{
    DnsResult_82BEE850 *dns;
    void *enumerator;
    unsigned int returned;
    unsigned int bufferSize;
    unsigned int address;
    unsigned int random;
    TitleServer_82BEE850 servers[10];
    int type;

    fn_82BE7B78();
    if (list != 0) {
        dns = 0;
        if (fn_82BE8F88() != 0) {
            fn_82BE5340(list);
            while (list->current != 0 && lbl_8322B1E4 == 0) {
                Server_82BEE850 *server = (Server_82BEE850 *)fn_82BE5378(list);

                if (server != 0 && (server->type == 4 || fn_82BE8F88() == 0)) {
                    int resolved = 0;

                    if (XNetDnsLookup(server->hostName, 0, &dns) == 0) {
                        while (dns->status == 0x2734) {
                            Sleep(1);
                        }
                        if (dns->status == 0) {
                            fn_82BE7850(server->type, dns->address[0], server->hostName);
                            resolved = 1;
                        }
                    }
                    if (!resolved) {
                        fn_82BE7850(server->type, 0, 0);
                    }
                    if (dns != 0) {
                        XNetDnsRelease(dns);
                        dns = 0;
                    }
                }
                fn_82BE5350(list);
            }
        }
        fn_82BE5340(list);
        while (list->current != 0) {
            Object_82BEE850 *object = (Object_82BEE850 *)fn_82BE5378(list);

            if (object != 0) {
                object->vtbl->Destroy(object, 1);
            }
            fn_82BE5350(list);
        }
        fn_82BE5478(list);
        fn_82BE54C0(list);
        fn_82BE56C0(list);
    }
    returned = 0;
    bufferSize = 0;
    enumerator = (void *)-1;
    memset(servers, 0, sizeof(servers));
    if (fn_82CE2220("MASSIVE-LSP", 10, &bufferSize, &enumerator) >= 0) {
        if (fn_82A1E988(enumerator, servers, sizeof(servers), &returned, 0) < 0) {
            fn_82A1E658(enumerator);
        } else {
            fn_82A1E658(enumerator);
            if (returned != 0) {
                XNetRandom((unsigned char *)&random, 4);
                if (XNetServerToInAddr(servers[random % returned].address, 0x16, &address) == 0) {
                    for (type = 0; (unsigned int)type < 16; type++) {
                        if (type != 4 || fn_82BE8F88() == 0) {
                            fn_82BE7850(type, address, 0);
                        }
                    }
                }
            }
        }
    }
    fn_82BE7B88();
    return 0;
}
