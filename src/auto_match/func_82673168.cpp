// ScaleformCommandSubstituteTexture slot 0x04: substitutes the texture
// (fn_826728E8) once the movie exists.
#include "Scaleform/ScaleformMovieView.h"

extern "C" void fn_826728E8(ScaleformMovieView *movie, const char *name, unsigned int texture);

int ScaleformMovieView::ScaleformCommandSubstituteTexture::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    if (movie->unkF0) {
        fn_826728E8(movie, unk14.c_str(), unk30);
        return 0;
    }
    return 1;
}
