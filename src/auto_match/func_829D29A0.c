typedef struct Obj_829D29A0 { int f0; int f4; int f8; } Obj_829D29A0;
typedef struct Req_829D29A0 {
    Obj_829D29A0 *self;
    int a;
    int b;
    int pad;
    unsigned __int64 time;
    int f8;
    int *result;
} Req_829D29A0;
extern unsigned __int64 __mftb();
extern int XamXStudioRequest(int code, void *req);

void fn_829D29A0(Obj_829D29A0 *self)
{
    int result[4];
    Req_829D29A0 r;
    r.self = self;
    r.a = 0xab0;
    r.b = 0x2dff;
    r.time = __mftb();
    r.f8 = self->f8;
    result[0] = 0;
    r.result = result;
    XamXStudioRequest(0x1401, &r);
}
