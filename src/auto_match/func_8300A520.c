typedef struct Param_8300A520 Param_8300A520;

typedef struct ParamVtbl_8300A520 {
    void (*Set)(Param_8300A520 *self, int flags, float value, int now); /* 0x0 */
} ParamVtbl_8300A520;

struct Param_8300A520 {
    ParamVtbl_8300A520 *vt; /* 0x0 */
    int f4;
    void *fadeHandle; /* 0x8 */
    float value;      /* 0xc */
};

typedef struct Node_8300A520 {
    struct Node_8300A520 *next; /* 0x0 */
    unsigned int id;            /* 0x4 */
    Param_8300A520 param;       /* 0x8 */
} Node_8300A520;

typedef struct Owner_8300A520 {
    char pad0[0x7c];
    Node_8300A520 *params; /* 0x7c */
} Owner_8300A520;

typedef struct Fade_8300A520 {
    Param_8300A520 *param; /* 0x0 */
    int flags;             /* 0x4 */
    float from;            /* 0x8 */
    float to;              /* 0xc */
    int time;              /* 0x10 */
    int curve;             /* 0x14 */
    unsigned char active;  /* 0x18 */
} Fade_8300A520;

extern void *lbl_832642F4;
extern void fn_82FF5400(void *mgr, void *handle, int flags, float value, int time, int curve, int mode);
extern void *fn_82FF59A8(void *mgr, Fade_8300A520 *fade, int a, int b);

static __forceinline Param_8300A520 *FindParam(Owner_8300A520 *self, unsigned int id)
{
    Node_8300A520 *node;

    for (node = self->params; node != 0; node = node->next) {
        if (node->id == id)
            return &node->param;
    }
    return 0;
}

int fn_8300A520(Owner_8300A520 *self, unsigned int id, int time, int curve)
{
    Param_8300A520 *param;
    Fade_8300A520 fade;
    void *handle;

    param = FindParam(self, id);
    if (param == 0)
        return 1;
    handle = param->fadeHandle;
    if (handle != 0) {
        fade.to = 0.0f;
        fn_82FF5400(lbl_832642F4, handle, 0x10000, fade.to, time, curve, 0);
    }
    if (param->fadeHandle == 0) {
        fade.from = param->value;
        fade.to = 0.0f;
        if (fade.from != fade.to && time != 0) {
            fade.curve = curve;
            fade.time = time;
            fade.flags = 0x10000;
            fade.active = 1;
            fade.param = param;
            param->fadeHandle = fn_82FF59A8(lbl_832642F4, &fade, 1, 0);
        } else {
            param->vt->Set(param, 0x10000, 0.0f, 1);
        }
    }
    return 1;
}
