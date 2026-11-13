typedef struct Obj_829D2450 { int f0; int f4; int f8; } Obj_829D2450;
typedef struct Req_829D2450 {
    Obj_829D2450 *self;
    int a;
    int b;
    int pad;
    unsigned __int64 time;
    int f8;
    int *result;
} Req_829D2450;
extern unsigned __int64 __mftb();
extern int XamXStudioRequest(int code, void *req);

void fn_829D2450(Obj_829D2450 *self, int *result)
{
    Req_829D2450 r;
    r.self = self;
    r.a = 0xab0;
    r.b = 0x2dff;
    r.time = __mftb();
    if (*result == 0) {
        r.f8 = self->f8;
    } else {
        r.f8 = -1;
    }
    r.result = result;
    XamXStudioRequest(0x1402, &r);
}
