void *memset(void *, int, unsigned int);
typedef struct Args_829E19A8 { int a; int b; int c; int d; } Args_829E19A8;
typedef struct Obj_829E19A8 { int pad[2]; __int64 handle; } Obj_829E19A8;
extern int fn_829E0B08(__int64 handle);
extern int fn_829E11B8(Args_829E19A8 *args);
extern int fn_829E14A8(Obj_829E19A8 *self, Args_829E19A8 *args);

int fn_829E19A8(Obj_829E19A8 *self, int a, int b)
{
    Args_829E19A8 args;
    int hr;
    memset(&args, 0, sizeof(args));
    args.a = a;
    args.b = b;
    hr = fn_829E0B08(self->handle);
    if (hr >= 0) {
        if (hr == 1) {
            hr = 0x80004005;
        } else {
            hr = fn_829E11B8(&args);
            if (hr >= 0) {
                hr = fn_829E14A8(self, &args);
            }
        }
    }
    return hr;
}
