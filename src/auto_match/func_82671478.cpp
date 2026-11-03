// ScaleformCommandCleanUpTextures deleting destructor. The class's constructor
// is only inlined into a member that is still C, so this keeps its fn_ name.
#include "Scaleform/ScaleformMovieView.h"

typedef ScaleformMovieView::ScaleformCommandCleanUpTextures CleanUpTextures_82671478;

extern "C" CleanUpTextures_82671478 *fn_82671478(CleanUpTextures_82671478 *self, unsigned int flags)
{
    self->CleanUpTextures_82671478::~ScaleformCommandCleanUpTextures();
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
