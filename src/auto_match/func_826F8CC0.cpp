// Runs a queued request: asks fn_826F35B0 for the request's text, hands a
// copy of it to the listener, marks the request done and releases the text.
#include "game/String_8268C510.h"

extern "C" void __emit(unsigned int);
#define __lwsync() __emit(0x7C2004AC)

struct Request_826F8CC0 {
    int kind;
    int first;
    int second;
};

struct Listener_826F8CC0 {
    virtual void vf00();
    virtual void Call(const String_8268C510 *text, int context);
};

struct Inner_826F8CC0 {
    char pad[8];
    int context;
};

struct Source_826F8CC0 {
    char pad[8];
    Inner_826F8CC0 *inner;
};

struct Obj_826F8CC0 {
    char pad[0x10];
    Source_826F8CC0 *source;
    int second;
    int first;
    Listener_826F8CC0 *listener;
    int done;
};

extern "C" {
void fn_8268B330(unsigned int *text);
void fn_8268C750(int *dst, int *src);
void fn_826D7220(Request_826F8CC0 *request);
void fn_826F35B0(Source_826F8CC0 *source, unsigned int *text, Request_826F8CC0 *request);
}

extern "C" void fn_826F8CC0(Obj_826F8CC0 *self)
{
    unsigned int result;
    Request_826F8CC0 request;
    StringData_8268C510 *data;

    request.kind = 6;
    fn_8268C750(&request.first, &self->first);
    fn_8268C750(&request.second, &self->second);
    fn_8268B330(&result);
    fn_826F35B0(self->source, &result, &request);
    {
        String_8268C510 text(((StringData_8268C510 *)(result & ~3u))->text);
        self->listener->Call(&text, self->source->inner->context);
    }
    __lwsync();
    self->done = 1;
    data = (StringData_8268C510 *)(result & ~3u);
    if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
    fn_826D7220(&request);
}
