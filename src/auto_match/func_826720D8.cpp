// ScaleformCommandInvoke constructor: ScaleformCommand base, vtable, method name, argument array.
#include "Scaleform/ScaleformMovieView.h"

ScaleformMovieView::ScaleformCommandInvoke::ScaleformCommandInvoke(const void *view, const char *method, const void *args, unsigned int count)
    : ScaleformCommand(view), unk14(method), unk30(args, count)
{
}
