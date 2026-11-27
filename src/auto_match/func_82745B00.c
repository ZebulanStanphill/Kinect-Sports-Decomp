typedef struct Value_82745B00 {
    unsigned char type;      /* 0x0 */
    char pad1[3];            /* 0x1 */
    unsigned char boolValue; /* 0x4 */
    char pad5[11];           /* 0x5 */
} Value_82745B00;

typedef struct Rect_82745B00 {
    double left;   /* 0x00 */
    double top;    /* 0x08 */
    double right;  /* 0x10 */
    double bottom; /* 0x18 */
} Rect_82745B00;

typedef struct FnCall_82745B00 {
    int unk0;               /* 0x00 */
    Value_82745B00 *result; /* 0x04 */
    char *thisPtr;          /* 0x08 */
    char padC[0xc];         /* 0x0c */
    void *env;              /* 0x18 */
    int argCount;           /* 0x1c */
} FnCall_82745B00;

extern unsigned char fn_82695468(FnCall_82745B00 *call, int objectType);
extern void fn_826954C0(FnCall_82745B00 *call, const char *className, int a, int b);
extern Value_82745B00 *fn_826957D0(FnCall_82745B00 *call, int index);
extern void fn_826959C8(Value_82745B00 *value);
extern void fn_82695DA0(Value_82745B00 *value, Value_82745B00 *other);
extern void fn_82696330(Value_82745B00 *value);
extern double fn_826972E0(Value_82745B00 *value, void *env);
extern void fn_827459D8(void *rectObject, void *env, Rect_82745B00 *out);

void fn_82745B00(FnCall_82745B00 *call)
{
    Value_82745B00 xValue;
    Value_82745B00 yValue;
    Rect_82745B00 rect;
    Value_82745B00 *result;
    void *rectObject;
    double x;
    double y;
    unsigned char inside;

    if (call->argCount > 1) {
        fn_82695DA0(&xValue, fn_826957D0(call, 0));
        fn_82695DA0(&yValue, fn_826957D0(call, 1));
        if (!fn_82695468(call, 0x11)) {
            fn_826954C0(call, "Rectangle", 0, 0);
        } else {
            rectObject = call->thisPtr != 0 ? call->thisPtr - 0x10 : 0;
            rect.left = 0.0;
            rect.top = 0.0;
            rect.right = 0.0;
            rect.bottom = 0.0;
            fn_827459D8(rectObject, call->env, &rect);
            x = fn_826972E0(&xValue, call->env);
            y = fn_826972E0(&yValue, call->env);
            if (x == rect.right) {
                x += 1.0;
            }
            if (y == rect.bottom) {
                y += 1.0;
            }
            inside = x <= rect.right && x >= rect.left && y <= rect.bottom && y >= rect.top;
            result = call->result;
            fn_826959C8(result);
            result->type = 2;
            result->boolValue = inside;
        }
        fn_82696330(&yValue);
        fn_82696330(&xValue);
    } else {
        result = call->result;
        fn_826959C8(result);
        result->type = 2;
        result->boolValue = 0;
    }
}
