// ScaleformCommandLoadMovie constructor (view, path, two values, optional
// viewport, one more value). Its caller (func_82673CF0) is still C, so it keeps
// its fn_ name.
#include "Scaleform/ScaleformMovieView.h"

typedef ScaleformMovieView::ScaleformCommandLoadMovie LoadMovie_82671070;

extern "C" LoadMovie_82671070 *fn_82671070(LoadMovie_82671070 *self, const void *view, const char *path,
                                          unsigned int unk1, unsigned int unk2,
                                          const ScaleformMovieView::Viewport *viewport, unsigned int unk3)
{
    self->LoadMovie_82671070::ScaleformCommandLoadMovie(view, path, unk1, unk2, viewport, unk3);
    return self;
}
