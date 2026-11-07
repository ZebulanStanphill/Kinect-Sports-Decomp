struct Unk_828F02F8;
typedef struct UnkVt_828F02F8 { void *s0, *s1; void (*Release)(struct Unk_828F02F8 *); void *(*GetData)(struct Unk_828F02F8 *); } UnkVt_828F02F8;
typedef struct Unk_828F02F8 { UnkVt_828F02F8 *vt; } Unk_828F02F8;
typedef struct Opts_828F02F8 { unsigned int flags; int x4; int x8; Unk_828F02F8 *xc; int x10; void *handle; } Opts_828F02F8;
typedef struct Macro_828F02F8 { const char *name; const char *def; } Macro_828F02F8;
typedef struct Ctx_828F02F8 { char pad[0x18]; char sub[0x298]; Opts_828F02F8 *opts; int pad2b4[3]; } Ctx_828F02F8;
typedef struct Compiler_828F02F8 { char data[0xc0]; } Compiler_828F02F8;
struct Src_828F02F8;
typedef struct SrcVt_828F02F8 {
    void *s0;
    int (*Load)(struct Src_828F02F8 *, Ctx_828F02F8 *);
    Macro_828F02F8 *(*GetDefines)(struct Src_828F02F8 *);
} SrcVt_828F02F8;
typedef struct Src_828F02F8 { SrcVt_828F02F8 *vt; } Src_828F02F8;

extern void fn_828F5BD0(Ctx_828F02F8 *);
extern void fn_828F5C88(Ctx_828F02F8 *);
extern void *fn_82A9ED60(void);
extern void fn_82A9C180(void *, const char *, int);
extern void fn_82A9F7F0(void *, const char *, const char *);
extern void fn_82A9EDA8(void *, unsigned int, Opts_828F02F8 *);
extern const char *fn_828F0088(const char *, unsigned int);
extern int fn_828EFFE0(const char *);
extern void fn_828F6D60(Ctx_828F02F8 *, const char *);
extern void fn_82901E60(Compiler_828F02F8 *, int);
extern int fn_82917790(Compiler_828F02F8 *, Ctx_828F02F8 *, int, int, int, const char *, unsigned int, Unk_828F02F8 **, Unk_828F02F8 **, Opts_828F02F8 *);
extern void fn_82903DB8(Compiler_828F02F8 *);
extern unsigned int fn_82897B18(void *);
extern void *fn_82A9F970(void *);
extern int fn_828F9B30(void *, Unk_828F02F8 **);
extern int fn_82A9F978(void *, void *, void *, int *);
extern void fn_82EE8150(void *);
extern void fn_828F9CB0(void *, void *);

int fn_828F02F8(Src_828F02F8 *self, int p2, const char **pTarget, unsigned int flags, Unk_828F02F8 **ppShader, void *p6, Unk_828F02F8 **ppErrors, Opts_828F02F8 *opts)
{
    Unk_828F02F8 *shader = 0;
    Unk_828F02F8 *errors = 0;
    int x68;
    Compiler_828F02F8 comp;
    Ctx_828F02F8 ctx;
    int hr;
    void *h;

    fn_828F5BD0(&ctx);
    if (ppShader != 0)
        *ppShader = 0;
    if (ppErrors != 0)
        *ppErrors = 0;
    if (opts != 0 && opts->handle != 0) {
        hr = 0x8876086c;
        goto done;
    }
    if ((flags & 0xfca1e1c0) != 0) {
        hr = 0x8876086c;
        goto cleanup;
    }
    if (*pTarget == 0) {
        hr = 0x8876086c;
        goto cleanup;
    }
    h = 0;
    if (opts != 0 && (opts->flags & 2) != 0) {
        h = fn_82A9ED60();
        opts->handle = h;
        if (h == 0) {
            hr = 0x8007000e;
            goto cleanup;
        }
        fn_82A9C180(h, "Compiler", 0);
        if (self->vt->GetDefines(self) != 0) {
            Macro_828F02F8 *m = self->vt->GetDefines(self);
            for (; m->name != 0; m++)
                fn_82A9F7F0(h, m->name, m->def);
        }
        fn_82A9EDA8(h, flags, opts);
    }
    *pTarget = fn_828F0088(*pTarget, flags);
    ctx.opts = opts;
    hr = self->vt->Load(self, &ctx);
    if (hr < 0)
        goto cleanup;
    if (fn_828EFFE0(*pTarget))
        fn_828F6D60(&ctx, "_XBOX_CPU");
    else
        fn_828F6D60(&ctx, "_XBOX_GPU_FINAL");
    fn_82901E60(&comp, 0);
    hr = fn_82917790(&comp, &ctx, 0, p2, 0, *pTarget, flags | 0x100, &shader, &errors, opts);
    if (hr < 0) {
        fn_82903DB8(&comp);
        goto cleanup;
    }
    fn_82903DB8(&comp);
    if (fn_82897B18(ctx.sub) != 0) {
        hr = 0x88760b59;
        goto cleanup;
    }
    if (h != 0) {
        void *x = fn_82A9F970(h);
        hr = fn_828F9B30(x, &opts->xc);
        if (hr >= 0) {
            void *d = opts->xc->vt->GetData(opts->xc);
            hr = fn_82A9F978(h, d, x, &x68);
        }
    }
    if (ppShader != 0) {
        Unk_828F02F8 *t = shader;
        shader = 0;
        *ppShader = t;
    }
    if (ppErrors != 0) {
        Unk_828F02F8 *t = errors;
        errors = 0;
        *ppErrors = t;
    }
cleanup:
    if (opts != 0 && opts->handle != 0) {
        fn_82EE8150(opts->handle);
        opts->handle = 0;
    }
done:
    if (p6 != 0)
        fn_828F9CB0(ctx.sub, p6);
    if (errors != 0) {
        errors->vt->Release(errors);
        errors = 0;
    }
    if (shader != 0) {
        shader->vt->Release(shader);
        shader = 0;
    }
    fn_828F5C88(&ctx);
    return hr;
}
