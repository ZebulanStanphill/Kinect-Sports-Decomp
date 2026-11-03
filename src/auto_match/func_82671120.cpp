// ScaleformCommandLoadMovie deleting destructor. The class's constructor
// (func_82671070) is still C, so this keeps its fn_ name.
#include "Scaleform/ScaleformMovieView.h"

typedef ScaleformMovieView::ScaleformCommandLoadMovie LoadMovie_82671120;

extern "C" LoadMovie_82671120 *fn_82671120(LoadMovie_82671120 *self, unsigned int flags)
{
    self->LoadMovie_82671120::~ScaleformCommandLoadMovie();
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
