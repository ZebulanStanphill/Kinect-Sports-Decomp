typedef struct Event_82720B70 {
    int type;
    unsigned char handled;
    int unused;
    int value;
} Event_82720B70;

typedef struct Handler_82720B70 Handler_82720B70;
typedef struct HandlerVtbl_82720B70 {
    void *dtor;
    void (*HandleEvent)(Handler_82720B70 *self, void *movie, Event_82720B70 *event);
} HandlerVtbl_82720B70;
struct Handler_82720B70 {
    HandlerVtbl_82720B70 *vt;
};

typedef struct Movie_82720B70 {
    char pad0[0x10c];
    Handler_82720B70 *handler;   /* 0x10c */
} Movie_82720B70;

typedef struct FnCall_82720B70 {
    int pad0;
    char *result;          /* 0x04 */
    char pad8[0x10];
    void *env;             /* 0x18 */
    int argCount;          /* 0x1c */
} FnCall_82720B70;

extern void fn_826959C8(char *value);
extern Movie_82720B70 *fn_826A7398(void *env);
extern void *fn_826957D0(FnCall_82720B70 *call, int index);
extern int fn_82697700(void *value, void *env);
extern void fn_826ADF90(void *env, const char *format, ...);

void fn_82720B70(FnCall_82720B70 *call)
{
    char *result = call->result;
    Movie_82720B70 *movie;
    Handler_82720B70 *handler;
    Event_82720B70 event;
    int value;

    fn_826959C8(result);
    *result = 0;
    movie = fn_826A7398(call->env);
    if ((int)movie->handler != 0) {
        value = 0;
        if (call->argCount >= 1)
            value = fn_82697700(fn_826957D0(call, 0), call->env);
        handler = movie->handler;
        event.handled = 0;
        event.type = 10;
        event.unused = 0;
        event.value = value;
        handler->vt->HandleEvent(handler, movie, &event);
    } else {
        fn_826ADF90(call->env, "Warning: no user event handler interface is installed; Mouse.show failed.\n");
    }
}
