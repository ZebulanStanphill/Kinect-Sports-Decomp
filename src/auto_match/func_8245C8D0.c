#include <string.h>

typedef struct Str_8245C8D0 {
    union {
        char buf[16];
        char *ptr;
    } u;

    unsigned int size; /* 0x10 */
    unsigned int res;  /* 0x14 */
    int alloc;         /* 0x18 */
} Str_8245C8D0;

typedef struct Self_8245C8D0 Self_8245C8D0;

typedef void (*Callback_8245C8D0)(void *data, unsigned int length, int unused, Self_8245C8D0 *owner);

struct Self_8245C8D0 {
    char pad0[0x48];
    double connectionTimeout; /* 0x048 */
    char pad50[0x58 - 0x50];
    double sendTimeout; /* 0x058 */
    char pad60[0x120 - 0x60];
    double lingerTime; /* 0x120 */
    char pad128[0x558 - 0x128];
    Callback_8245C8D0 callback;   /* 0x558 */
    Self_8245C8D0 *callbackOwner; /* 0x55C */
    char pad560[0x5DC - 0x560];
    Str_8245C8D0 server; /* 0x5DC */
    Str_8245C8D0 page;   /* 0x5F8 */
    int port;            /* 0x614 */
    char pad618[0x638 - 0x618];
    int state;             /* 0x638 */
    int serviceId;         /* 0x63C */
    Str_8245C8D0 userData; /* 0x640 */
    char pad65C[0x670 - 0x65C];
    double resolveWait;  /* 0x670 */
    double resolveStart; /* 0x678 */
    double failedWait;   /* 0x680 */
    double failedTime;   /* 0x688 */
    char pad690[0x69C - 0x690];
    int maxUploadRate; /* 0x69C */
    char pad6A0[0x6AC - 0x6A0];
    int errorRetries; /* 0x6AC */
    char pad6B0[0x6C8 - 0x6B0];
    char config[4]; /* 0x6C8 */
};

extern int fn_82579EF0(void *config, const char *key, int fallback);
extern const char *fn_82579DB0(void *config, const char *key);
extern float fn_8257A028(void *config, const char *key, float fallback);
extern double fn_8257A0B0(void *config, const char *key, double fallback);
extern float fn_82522FF0(void);
extern void fn_8245C548(void *data, unsigned int length, int unused, Self_8245C8D0 *owner);
extern Str_8245C8D0 *fn_82230360(Str_8245C8D0 *s, const char *text, unsigned int length);
extern void fn_82230110(Str_8245C8D0 *s, const char *text);
extern void fn_82230218(Str_8245C8D0 *dst, Str_8245C8D0 *src, unsigned int pos, unsigned int count);
extern void fn_82230300(Str_8245C8D0 *s, int built, unsigned int newSize);

void fn_8245C8D0(Self_8245C8D0 *self)
{
    void *config = self->config;
    const char *userData;
    Str_8245C8D0 server;
    Str_8245C8D0 page;
    int port;
    double linger;
    double value;

    self->serviceId = fn_82579EF0(config, "ServiceID", 0);
    userData = fn_82579DB0(config, "XLSPUserData");
    fn_82230360(&self->userData, userData, strlen(userData));
    fn_82230110(&server, fn_82579DB0(config, "FrontDoorServerWebServer"));
    fn_82230110(&page, fn_82579DB0(config, "FrontDoorPage"));
    port = fn_82579EF0(config, "Port", 80);
    fn_82230218(&self->server, &server, 0, 0xFFFFFFFF);
    fn_82230218(&self->page, &page, 0, 0xFFFFFFFF);
    self->port = port;
    self->state = 0;
    linger = fn_8257A028(config, "ConnectionLingerTimeInSeconds", 10.0f);
    if (linger < 0.0) {
        linger = 0.0;
    }
    self->failedWait = fn_8257A028(config, "FailedConnectionWaitTimeInSeconds", 5.0f);
    if (self->failedWait < 0.0) {
        self->failedWait = 0.0;
    }
    self->failedTime = fn_82522FF0() - self->failedWait;
    self->maxUploadRate = (int)fn_8257A028(config, "MaxUploadRateInBytesPerSecond", 10.0f);
    if (self->maxUploadRate < 0) {
        self->maxUploadRate = 0;
    }
    self->lingerTime = (unsigned int)linger;
    self->callbackOwner = self;
    self->callback = fn_8245C548;
    self->resolveWait = fn_8257A0B0(config, "ResolveTitleServerWaitTimeInSeconds", 30.0);
    if (self->resolveWait < 0.0) {
        self->resolveWait = 30.0;
    }
    self->resolveStart = -self->resolveWait;
    value = fn_8257A0B0(config, "SendDataTimeoutInSeconds", 30.0);
    if (value < 0.0) {
        value = 30.0;
    }
    self->sendTimeout = value;
    value = fn_8257A0B0(config, "ConnectionTimeoutInSeconds", 5.0);
    if (value < 0.0) {
        value = 5.0;
    }
    self->connectionTimeout = value;
    self->errorRetries = fn_82579EF0(config, "ErrorRetriesBeforeEnumerating", 3);
    if (self->errorRetries < 0) {
        self->errorRetries = 0;
    }
    fn_82230300(&page, 1, 0);
    fn_82230300(&server, 1, 0);
}
