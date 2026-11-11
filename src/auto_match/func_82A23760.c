extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int fn_82A1F2F8(void);
extern char *fn_82A236C8(int, unsigned *);
extern int fn_82F66368(char *, int, const char *, int);

typedef struct Owner_82A23760 {
    char pad0[0x1c];
    int value; /* 0x1c */
} Owner_82A23760;

typedef struct Request_82A23760 {
    char pad0[0xc];
    int *handle;          /* 0x0c */
    char pad10[0x10];
    Owner_82A23760 *owner; /* 0x20 */
    char pad24[4];
    char info[4];         /* 0x28 */
} Request_82A23760;

typedef struct State_82A23760 {
    char pad0[0x10];
    char lock[0x1c];      /* 0x10 */
    char pad2c[0x50];
    int failed;           /* 0x7c */
    unsigned int retryTime; /* 0x80 */
    unsigned int nextTime;  /* 0x84 */
    char pad88[0x50];
    void *context;        /* 0xd8 */
    unsigned int (*callback)(void *, char *, void *, int); /* 0xdc */
} State_82A23760;

extern State_82A23760 lbl_83219B90;

int fn_82A23760(Request_82A23760 *req)
{
    State_82A23760 *s = &lbl_83219B90;
    int result = 1;

    if (s->retryTime == 0 && s->nextTime == 0) {
        if (s->callback == 0) {
            s->nextTime = fn_82A1F2F8() + 1000;
        } else {
            int arg;
            int handle;
            unsigned int rc;
            unsigned int delay;
            unsigned int now;
            unsigned int len;
            char path[0x104];

            RtlLeaveCriticalSection(s->lock);
            if (req->owner != 0) {
                arg = req->owner->value;
            } else {
                arg = 0;
            }
            handle = *req->handle;
            rc = 0;
            if (s->callback != 0) {
                char *name = fn_82A236C8(handle, &len);
                fn_82F66368(path, 0x104, name, len);
                rc = s->callback(s->context, path, req->info, arg);
            }
            RtlEnterCriticalSection(s->lock);
            delay = rc & 0x7fffffff;
            if (delay > 60000) {
                delay = 60000;
            }
            if (rc == 0) {
                rc = 1000;
            }
            now = fn_82A1F2F8() + delay;
            if (rc & 0x80000000) {
                s->retryTime = now;
                result = 0;
                s->failed = 1;
            } else {
                s->nextTime = now;
            }
        }
    }
    return result;
}
