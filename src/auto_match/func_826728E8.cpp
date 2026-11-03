// ScaleformMovieView's SubstituteTexture (name, texture): on the render thread
// it looks the image resource up in the movie definition and replaces its
// image with one made from the texture; elsewhere it queues a
// ScaleformCommandSubstituteTexture. ScaleformMovieView's members are still C,
// so this keeps its fn_ name.
#include "Scaleform/ScaleformMovieView.h"

extern "C" {
unsigned int fn_82A1BB18(void);          // GetCurrentThreadId
extern unsigned int lbl_831E7B44;        // the render thread's ID
extern void **lbl_831E7B40;              // the command queue
void fn_82BFE128(void *queue, ScaleformMovieView::ScaleformCommand *command);
void *fn_8266EC60(void);
long _InterlockedExchangeAdd(long volatile *p, long v);
void fn_8267C4F0(void *p); // releases a GFx reference-counted object
void fn_82670230(void *p); // releases an image
}

class Image_826728E8 {
public:
    virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C(); virtual void vf10();
    virtual void vf14(); virtual void vf18(); virtual void vf1C(); virtual void vf20(); virtual void vf24();
    virtual void vf28(); virtual void vf2C(); virtual void vf30();
    virtual void vf34(unsigned int texture, ScaleformMovieView *view, unsigned int unk);
    long refCount;
};

struct GPtr_826728E8 {
    void *p;
};

extern "C" GPtr_826728E8 *fn_8266C8A0(GPtr_826728E8 *result, void *unk);

class ImageCreator_826728E8 {
public:
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual Image_826728E8 *vf0C(void *unk);
};

class ImageResource_826728E8 {
public:
    virtual void vf00(); virtual void vf04();
    virtual unsigned int vf08(); // the resource type
    char unk04[8];
    ImageCreator_826728E8 *unk0C;
};

extern "C" void fn_82689768(ImageCreator_826728E8 *creator, Image_826728E8 *image);

class MovieDef_826728E8 {
public:
    virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C(); virtual void vf10();
    virtual void vf14(); virtual void vf18(); virtual void vf1C(); virtual void vf20(); virtual void vf24();
    virtual void vf28(); virtual void vf2C(); virtual void vf30(); virtual void vf34(); virtual void vf38();
    virtual void vf3C(); virtual void vf40(); virtual void vf44(); virtual void vf48(); virtual void vf4C();
    virtual void vf50(); virtual void vf54(); virtual void vf58(); virtual void vf5C();
    virtual ImageResource_826728E8 *vf60(const char *name);
};

struct ImagePtr_826728E8 {
    Image_826728E8 *p;
    __forceinline ImagePtr_826728E8() : p(0) {}
    __forceinline void Set(Image_826728E8 *q)
    {
        p = q;
        if (p) {
            _InterlockedExchangeAdd(&p->refCount, 1);
        }
    }
    __forceinline ~ImagePtr_826728E8()
    {
        if (p) {
            fn_82670230(p);
        }
    }
};

struct TempPtr_826728E8 : GPtr_826728E8 {
    __forceinline ~TempPtr_826728E8()
    {
        if (p) {
            fn_8267C4F0(p);
        }
    }
};

extern "C" void fn_826728E8(ScaleformMovieView *self, const char *name, unsigned int texture)
{
    if (fn_82A1BB18() == lbl_831E7B44) {
        ImageResource_826728E8 *res = ((MovieDef_826728E8 *)self->unk0C)->vf60(name);
        if (res == 0 || (res->vf08() & 0xFF00) != 0x100) {
            return;
        }
        ImageCreator_826728E8 *creator = res->unk0C;
        if (creator == 0) {
            return;
        }
        ImagePtr_826728E8 image;
        {
            TempPtr_826728E8 tmp;
            void *unk = fn_8266C8A0(&tmp, fn_8266EC60())->p;
            image.Set(creator->vf0C(unk));
        }
        if (image.p) {
            image.p->vf34(texture, self, 0);
            fn_82689768(creator, image.p);
        }
    } else if (self->unkE8 == 0) {
        ScaleformMovieView::ScaleformCommand *command = new ScaleformMovieView::ScaleformCommandSubstituteTexture(
            ScaleformMovieView::SharedPtr(self->unk04, self->unk08), name, texture);
        fn_82BFE128(*lbl_831E7B40, command);
    }
}
