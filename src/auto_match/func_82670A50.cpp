// ScaleformMovieView::ScaleformCommand destructor: releases the weak pointer
// to the movie view (reset, then the member's own destructor).
#include "Scaleform/ScaleformMovieView.h"

ScaleformMovieView::ScaleformCommand::~ScaleformCommand()
{
    unk04.reset();
}
