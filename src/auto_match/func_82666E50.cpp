// std::vector<T>::const_iterator::operator+ from Visual C++ 2010's <vector>,
// for the vector of game/Element_82666FE0.h. It copies the iterator and calls
// operator+= (func_82666FE0.cpp).
#include <vector>
#include "game/Element_82666FE0.h"

typedef Vector_82666FE0::const_iterator Iterator;

template <> Iterator &Iterator::operator+=(difference_type);
template Iterator Iterator::operator+(difference_type) const;
