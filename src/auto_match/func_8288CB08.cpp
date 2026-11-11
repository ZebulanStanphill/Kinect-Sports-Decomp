#include <vector>

typedef std::vector<bool>::iterator VbIt;
template VbIt std::_Copy_backward<VbIt, VbIt>(VbIt, VbIt, VbIt, std::_Nonscalar_ptr_iterator_tag);
