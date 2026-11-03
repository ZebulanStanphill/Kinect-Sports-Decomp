// ScaleformCommandAdvance slot 0x04: advances the movie by the time step
// (fn_826735B0) once it exists.
#include "Scaleform/ScaleformMovieView.h"

extern "C" void fn_826735B0(ScaleformMovieView *movie, float delta);

int ScaleformMovieView::ScaleformCommandAdvance::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    if (movie->unkF0) {
        fn_826735B0(movie, unk14);
    }
    return 0;
}
