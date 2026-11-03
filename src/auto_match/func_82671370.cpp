// ScaleformCommandSetViewport constructor (view, viewport). Its caller
// (func_82671D48) is still C, so it keeps its fn_ name.
#include "Scaleform/ScaleformMovieView.h"

typedef ScaleformMovieView::ScaleformCommandSetViewport SetViewport_82671370;

extern "C" SetViewport_82671370 *fn_82671370(SetViewport_82671370 *self, const void *view,
                                            const ScaleformMovieView::Viewport &viewport)
{
    self->SetViewport_82671370::ScaleformCommandSetViewport(view, viewport);
    return self;
}
