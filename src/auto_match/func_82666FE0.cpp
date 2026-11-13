// std::vector<T>::const_iterator::operator+= from Visual C++ 2010's <vector>,
// for the vector of game/Element_82666FE0.h. The XLip library was built
// without inlining (/Ob0 in objects.json), so every member is a function of
// its own.
#include <vector>
#include "game/Element_82666FE0.h"

typedef Vector_82666FE0::const_iterator Iterator;

template Iterator &Iterator::operator+=(difference_type);
