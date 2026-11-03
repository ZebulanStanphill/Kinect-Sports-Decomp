// ScaleformCommandAdvance constructor (view, time step). Its caller
// (func_826735B0) is still C, so it keeps its fn_ name.
#include "Scaleform/ScaleformMovieView.h"

typedef ScaleformMovieView::ScaleformCommandAdvance Advance_82671278;

extern "C" Advance_82671278 *fn_82671278(Advance_82671278 *self, const void *view, float delta)
{
    self->Advance_82671278::ScaleformCommandAdvance(view, delta);
    return self;
}
