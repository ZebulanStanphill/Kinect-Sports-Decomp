// ScaleformCommandCallActionScriptCallback constructor: ScaleformCommand base, vtable, name,
// the argument array (empty, then filled by fn_826700E0 after the flag is cleared).
#include "Scaleform/ScaleformMovieView.h"

ScaleformMovieView::ScaleformCommandCallActionScriptCallback::ScaleformCommandCallActionScriptCallback(const void *view, const char *name, const void *args, unsigned int count)
    : ScaleformCommand(view), unk14(name), unk30(count)
{
    unk10 = false;
    fn_826700E0(&unk30, args, count);
}
