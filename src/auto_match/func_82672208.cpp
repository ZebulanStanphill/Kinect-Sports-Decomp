// ScaleformCommandSetViewport slot 0x04: sets the viewport (fn_82671D48) once
// the movie exists.
#include "Scaleform/ScaleformMovieView.h"

extern "C" void fn_82671D48(ScaleformMovieView *movie, const ScaleformMovieView::Viewport *viewport);

int ScaleformMovieView::ScaleformCommandSetViewport::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    if (movie->unkF0) {
        fn_82671D48(movie, &unk14);
        return 0;
    }
    return 1;
}
