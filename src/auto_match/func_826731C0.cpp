#include "Scaleform/ScaleformMovieView.h"

extern "C" void fn_82672AB8(ScaleformMovieView *movie, const char *name, void *args, unsigned int count);

bool ScaleformMovieView::ScaleformCommandCallActionScriptCallback::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    if (movie->unkF0) {
        fn_82672AB8(movie, unk14.c_str(), unk30.items, unk30.count);
        return false;
    }
    return true;
}
