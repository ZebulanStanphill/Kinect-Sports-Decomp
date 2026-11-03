// ScaleformCommandLoadMovie slot 0x04: loads the movie (fn_82673CF0); 2 when
// that fails.
#include "Scaleform/ScaleformMovieView.h"

extern "C" int fn_82673CF0(ScaleformMovieView *movie, const char *path, unsigned int unk1, unsigned int unk2,
                           const ScaleformMovieView::Viewport *viewport, unsigned int unk3);

int ScaleformMovieView::ScaleformCommandLoadMovie::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    return fn_82673CF0(movie, unk14, unk18, unk1C, &unk20, unk54) ? 0 : 2;
}
