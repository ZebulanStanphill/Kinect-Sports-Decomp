#include "Scaleform/ScaleformMovieView.h"

extern "C" void fn_82671F28(ScaleformMovieView *movie, void *texture);

int ScaleformMovieView::ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    if (movie->unkF0) {
        fn_82671F28(movie, unk14);
        return 0;
    }
    return 1;
}
