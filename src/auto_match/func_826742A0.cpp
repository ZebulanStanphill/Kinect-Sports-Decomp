// ScaleformFontLib destructor: removes the fonts one by one, then the array and
// the GFxFontLib base are destroyed.
#include "Scaleform/ScaleformFontLib.h"

ScaleformFontLib::~ScaleformFontLib()
{
    unk10.Clear();
}
