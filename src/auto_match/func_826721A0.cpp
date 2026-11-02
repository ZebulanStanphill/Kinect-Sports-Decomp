// ScaleformCommandSetVariableArray constructor.
#include "Scaleform/ScaleformMovieView.h"

ScaleformMovieView::ScaleformCommandSetVariableArray::ScaleformCommandSetVariableArray(const void *view, const char *name, unsigned int type, const void *values, unsigned int count, unsigned int index)
    : ScaleformCommand(view), unk14(name)
{
    unk34.count = count;
    unk30 = type;
    unk3C = index;
    fn_826700E0(&unk34, values, count);
}
