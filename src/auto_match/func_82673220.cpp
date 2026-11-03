#include "Scaleform/ScaleformMovieView.h"

extern "C" void fn_82672F30(ScaleformMovieView *movie, const char *name, unsigned int type, void *values, unsigned int count, unsigned int index);

int ScaleformMovieView::ScaleformCommandSetVariableArray::vf04()
{
    ScaleformMovieView *movie = unk04.ptr;
    if (movie->unkF0) {
        fn_82672F30(movie, unk14.c_str(), unk30, unk34.items, unk34.count, unk3C);
        return 0;
    }
    return 1;
}
