#include "Scaleform/ScaleformMovieView.h"

extern "C" void fn_82671E20(ScaleformMovieView *movie, void *texture);

bool ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicTexture::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    if (movie->unkF0) {
        fn_82671E20(movie, unk14);
        return false;
    }
    return true;
}
