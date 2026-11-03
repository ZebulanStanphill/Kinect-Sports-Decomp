// ScaleformMovieView's texture clean-up: on the render thread it frees unused
// textures and marks them cleaned up; elsewhere it queues a
// ScaleformCommandCleanUpTextures (unless the view is shutting down).
// ScaleformMovieView's members are still C, so this keeps its fn_ name.
#include "Scaleform/ScaleformMovieView.h"

extern "C" {
unsigned int fn_82A1BB18(void);          // GetCurrentThreadId
extern unsigned int lbl_831E7B44;        // the render thread's ID
extern void **lbl_831E7B40;              // the command queue
void fn_82BFE128(void *queue, ScaleformMovieView::ScaleformCommand *command);
void *fn_8266EC60(void);
void fn_8266C9B0(void *unk);
}

extern "C" void fn_82673040(ScaleformMovieView *self)
{
    if (fn_82A1BB18() == lbl_831E7B44) {
        self->unk10->vf8C(0.0001f, 2);
        fn_8266C9B0(fn_8266EC60());
        self->unkF4 = 1;
    } else if (self->unkE8 == 0) {
        fn_82BFE128(*lbl_831E7B40, new ScaleformMovieView::ScaleformCommandCleanUpTextures(self));
    }
}
