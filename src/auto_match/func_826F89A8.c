extern long _InterlockedExchangeAdd(volatile long *value, long amount);
extern void __emit(unsigned int instruction);
#define __lwsync() __emit(0x7c2004ac)

typedef struct Request_826F89A8 {
    int kind;
    int first;
    int second;
} Request_826F89A8;

typedef struct TextData_826F89A8 {
    unsigned int size;
    long refs;
    char text[1];
} TextData_826F89A8;

typedef struct Object_826F89A8 {
    char padding[0x10];
    void *source;
    int second;
    int first;
    int result1;
    int result2;
    int done;
    unsigned char success;
} Object_826F89A8;

extern void fn_8268C750(int *destination, int *source);
extern void fn_8268B330(unsigned int *text);
extern void fn_826F35B0(void *source, unsigned int *text, Request_826F89A8 *request);
extern void *fn_826F34B0(void *source, const char *text, int flags);
extern unsigned char fn_826F8298(void *result, int *first, int *second);
extern void fn_8267C4F0(void *result);
extern void fn_8267BE38(void *data);
extern void fn_826D7220(Request_826F89A8 *request);

void fn_826F89A8(Object_826F89A8 *self)
{
    Request_826F89A8 request;
    unsigned int text;
    void *result;
    TextData_826F89A8 *data;

    request.kind = 4;
    fn_8268C750(&request.first, &self->first);
    fn_8268C750(&request.second, &self->second);
    fn_8268B330(&text);
    fn_826F35B0(self->source, &text, &request);
    result = fn_826F34B0(self->source, ((TextData_826F89A8 *)(text & ~3u))->text, 0);
    if (result != 0) {
        self->success = fn_826F8298(result, &self->result1, &self->result2);
    } else {
        self->success = 1;
    }
    __lwsync();
    self->done = 1;
    if (result != 0) {
        fn_8267C4F0(result);
    }
    data = (TextData_826F89A8 *)(text & ~3u);
    if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
    fn_826D7220(&request);
}
