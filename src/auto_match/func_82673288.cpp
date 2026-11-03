// ScaleformCommandCleanUpTextures slot 0x04: cleans up the movie's textures
// (fn_82673040) once the movie exists.
#include "Scaleform/ScaleformMovieView.h"

extern "C" void fn_82673040(ScaleformMovieView *movie);

int ScaleformMovieView::ScaleformCommandCleanUpTextures::vf04()
{
    ScaleformMovieView *movie = unk0C;
    if (movie->unkF0) {
        fn_82673040(movie);
        return 0;
    }
    return 1;
}
