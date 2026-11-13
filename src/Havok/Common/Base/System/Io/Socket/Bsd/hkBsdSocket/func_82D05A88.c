typedef struct XNetStartupParams_82D05A88 {
    unsigned char cfgSizeOfStruct;
    unsigned char cfgFlags;
    unsigned char cfgSockMaxDgramSockets;
    unsigned char cfgSockMaxStreamSockets;
    unsigned char cfgSockDefaultRecvBufsizeInK;
    unsigned char cfgSockDefaultSendBufsizeInK;
    unsigned char cfgKeyRegMax;
    unsigned char cfgSecRegMax;
    unsigned char cfgQosDataLimitDiv4;
    unsigned char cfgQosProbeTimeoutInSeconds;
    unsigned char cfgQosProbeRetries;
    unsigned char cfgQosSrvMaxSimultaneousResponses;
    unsigned char cfgQosPairWaitTimeInSeconds;
} XNetStartupParams_82D05A88;

typedef struct WSAData_82D05A88 {
    unsigned char data[400];
} WSAData_82D05A88;

typedef struct OStream_82D05A88 {
    int v[4];
} OStream_82D05A88;

typedef struct ErrorVt_82D05A88 ErrorVt_82D05A88;
typedef struct Error_82D05A88 {
    ErrorVt_82D05A88 *vt;
} Error_82D05A88;

struct ErrorVt_82D05A88 {
    void *slot0;
    void *slot1;
    void *slot2;
    int (*message)(Error_82D05A88 *self, int type, unsigned int id,
                   const char *msg, const char *file, int line);
};

void *memset(void *dst, int c, unsigned int n);

extern int fn_82CE0658(XNetStartupParams_82D05A88 *params);
extern int fn_82CE08A0(int version, WSAData_82D05A88 *data);
extern void fn_82CEE578(OStream_82D05A88 *os, char *buf, int size);
extern void fn_82CEDB38(OStream_82D05A88 *os, const char *s);
extern void fn_82CED958(OStream_82D05A88 *os);

extern Error_82D05A88 *lbl_8323B464;
extern unsigned char lbl_8323B524;

void fn_82D05A88(void)
{
    XNetStartupParams_82D05A88 xnsp;
    OStream_82D05A88 os;
    char buf[512];
    WSAData_82D05A88 wsaData;

    if (lbl_8323B524 == 0) {
        memset(&xnsp, 0, sizeof(xnsp));
        xnsp.cfgSizeOfStruct = sizeof(xnsp);
        xnsp.cfgFlags = 1;
        fn_82CE0658(&xnsp);
        if (fn_82CE08A0(0x202, &wsaData) == -1) {
            fn_82CEE578(&os, buf, 0x200);
            fn_82CEDB38(&os, "(Windows)WSAStartup failed with error!");
            if (lbl_8323B464->vt->message(lbl_8323B464, 3, 0x321825f8, buf,
                    ".\\System\\Io\\Socket\\Bsd\\hkBsdSocket.cpp", 0x48) != 0) {
                __debugbreak();
            }
            fn_82CED958(&os);
        }
        lbl_8323B524 = 1;
    }
}
