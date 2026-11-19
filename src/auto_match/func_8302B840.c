extern int *fn_83038078(int type, int arg);
extern int *fn_8303E1C8(int type, int arg);
extern int *fn_8303DF60(int type, int arg);
extern int *fn_8303D8D0(int type, int arg);
extern int *fn_8303DD28(int type, int arg);
extern int *fn_8303D770(int type, int arg);
extern int *fn_8303CDE0(int type, int arg);
extern int *fn_8303D2A8(int type, int arg);
extern int *fn_8303C950(int type, int arg);
extern int *fn_8303C240(int type, int arg);
extern int *fn_8303C470(int type, int arg);
extern int *fn_8303C0D0(int type, int arg);
extern int *fn_8303B8A8(int type, int arg);
extern int *fn_8303BA38(int type, int arg);
extern int *fn_8303B550(int type, int arg);
extern int *fn_8303B768(int type, int arg);

int *fn_8302B840(int type, int arg)
{
    switch (type & 0xff000) {
    case 0x1000:
        return fn_83038078(type, arg);
    case 0x2000:
        return fn_8303E1C8(type, arg);
    case 0x3000:
        return fn_8303DF60(type, arg);
    case 0x4000:
        return fn_8303D8D0(type, arg);
    case 0x6000:
    case 0x7000:
        return fn_8303DD28(type, arg);
    case 0x8000:
    case 0x9000:
        return fn_8303D770(type, arg);
    case 0xa000:
    case 0xb000:
        return fn_8303CDE0(type, arg);
    case 0xc000:
    case 0xd000:
        return fn_8303D2A8(type, arg);
    case 0xe000:
    case 0xf000:
        return fn_8303C950(type, arg);
    case 0x10000:
    case 0x11000:
        return fn_8303C240(type, arg);
    case 0x12000:
        return fn_8303C470(type, arg);
    case 0x60000:
        return fn_8303C0D0(type, arg);
    case 0x61000:
        return fn_8303B8A8(type, arg);
    case 0x70000:
    case 0x80000:
        return fn_8303BA38(type, arg);
    case 0x90000:
        return fn_8303B550(type, arg);
    case 0xa0000:
        return fn_8303B768(type, arg);
    }
    return 0;
}
