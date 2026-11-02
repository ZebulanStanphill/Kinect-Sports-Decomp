// ScaleformCommandSetVariableArray destructor: clears the value array in the body, then the
// name string and the ScaleformCommand base are destroyed.
#include "Scaleform/ScaleformMovieView.h"

ScaleformMovieView::ScaleformCommandSetVariableArray::~ScaleformCommandSetVariableArray()
{
    fn_8266FF40(&unk34, unk34.count);
}
