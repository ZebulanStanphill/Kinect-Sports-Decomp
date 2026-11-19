typedef struct Object_826CAC18 {
    char pad0[0x1b8];
    void *display; /* 0x1b8 */
} Object_826CAC18;

typedef struct Call_826CAC18 {
    char pad0[0x18];
    void *context; /* 0x18 */
    int argCount;  /* 0x1c */
} Call_826CAC18;

extern float lbl_8200BED8;
extern float lbl_82005CCC;

extern Object_826CAC18 *fn_826C59F8(Call_826CAC18 *call);
extern void *fn_826957D0(Call_826CAC18 *call, int index);
extern unsigned int fn_82697700(void *arg, void *context);
extern double fn_826972E0(void *arg, void *context);
extern void fn_826CAB68(Object_826CAC18 *object, unsigned int color);
extern void fn_826C8590(Object_826CAC18 *object, int flag);
extern void fn_827583F8(void *display);

void fn_826CAC18(Call_826CAC18 *call)
{
    Object_826CAC18 *object;
    unsigned int color;
    float alpha;

    object = fn_826C59F8(call);
    if (object != 0) {
        if (call->argCount > 0) {
            color = fn_82697700(fn_826957D0(call, 0), call->context) | 0xff000000;
            if (call->argCount > 1) {
                alpha = (float)fn_826972E0(fn_826957D0(call, 1), call->context) * lbl_8200BED8;
                color &= 0xffffff;
                alpha = alpha < lbl_82005CCC ? alpha : lbl_82005CCC;
                alpha = alpha >= 0.0f ? alpha : 0.0f;
                color |= (unsigned int)alpha << 24;
            }
            fn_826CAB68(object, color);
        } else {
            fn_826C8590(object, 1);
            fn_827583F8(object->display);
        }
    }
}
