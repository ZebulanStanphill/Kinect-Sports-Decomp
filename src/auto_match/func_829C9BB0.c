extern long KeWaitForSingleObject(void *object, int reason, char mode, unsigned char alertable, void *timeout);
extern void fn_829C9B88(void);

typedef struct ListEntry_829C9BB0 {
    struct ListEntry_829C9BB0 *flink;
    struct ListEntry_829C9BB0 *blink;
} ListEntry_829C9BB0;

typedef struct {
    unsigned char type;
    unsigned char absolute;
    unsigned char size;
    unsigned char inserted;
    long signalState;
    ListEntry_829C9BB0 waitList;
} Event_829C9BB0;

typedef struct {
    Event_829C9BB0 event;
    long status;
} Wait_829C9BB0;

typedef struct {
    char pad[0x10];
    Wait_829C9BB0 *wait;
    void (*complete)(void);
} Request_829C9BB0;

extern long (*lbl_8315C3E8)(Request_829C9BB0 *request);

long fn_829C9BB0(Request_829C9BB0 *request)
{
    Wait_829C9BB0 wait;
    long status;

    wait.event.type = 0;
    request->wait = &wait;
    request->complete = fn_829C9B88;
    wait.event.signalState = 0;
    wait.event.waitList.flink = &wait.event.waitList;
    wait.event.waitList.blink = &wait.event.waitList;
    status = lbl_8315C3E8(request);
    if (status == 0x103) {
        KeWaitForSingleObject(&wait, 3, 0, 0, 0);
        status = wait.status;
    }
    return status;
}
