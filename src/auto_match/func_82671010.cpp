// ScaleformCommandLoadMovieDef deleting destructor. The class's constructor is
// only inlined into a member that is still C, so this keeps its fn_ name.
#include "Scaleform/ScaleformMovieView.h"

typedef ScaleformMovieView::ScaleformCommandLoadMovieDef LoadMovieDef_82671010;

extern "C" LoadMovieDef_82671010 *fn_82671010(LoadMovieDef_82671010 *self, unsigned int flags)
{
    self->LoadMovieDef_82671010::~ScaleformCommandLoadMovieDef();
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
