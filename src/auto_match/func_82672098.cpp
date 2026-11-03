// ScaleformCommandLoadMovieDef slot 0x04: loads the movie definition
// (fn_826718E8); 2 when that fails.
#include "Scaleform/ScaleformMovieView.h"

extern "C" int fn_826718E8(ScaleformMovieView *movie, const char *path, unsigned int unk);

int ScaleformMovieView::ScaleformCommandLoadMovieDef::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    return fn_826718E8(movie, unk14, unk18) ? 0 : 2;
}
