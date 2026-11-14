typedef struct Renderer_82A8B678 Renderer_82A8B678;
typedef struct RendererVt_82A8B678 {
    void *f0;
    void *f4;
    int (*Prepare)(Renderer_82A8B678 *self);
} RendererVt_82A8B678;
struct Renderer_82A8B678 {
    RendererVt_82A8B678 *vt;
    char pad4[0x20];
    char impl[1];
};

extern void fn_82A92220(void *impl, void *desc, float t, void *a, void *b, unsigned int c, void *d,
                        unsigned int e, void *f, void *g, void *h);

int fn_82A8B678(Renderer_82A8B678 *self, void *desc, float t, void *a, void *b, unsigned int c, void *d,
                unsigned int e, void *f, void *g, void *h)
{
    int hr;

    if (desc == 0)
        return 0x80070057;
    hr = self->vt->Prepare(self);
    if (hr >= 0)
        fn_82A92220(self->impl, desc, t, a, b, c, d, e, f, g, h);
    return hr;
}
