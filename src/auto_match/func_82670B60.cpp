// ScaleformCommandCallActionScriptCallback destructor: clears the value array in the body, then
// the name string and the ScaleformCommand base are destroyed.
#include "Scaleform/ScaleformMovieView.h"

ScaleformMovieView::ScaleformCommandCallActionScriptCallback::~ScaleformCommandCallActionScriptCallback()
{
    fn_8266FF40(&unk30, unk30.count);
}
