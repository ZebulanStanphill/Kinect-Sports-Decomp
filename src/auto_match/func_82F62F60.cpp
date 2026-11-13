#include <xiosbase>

extern "C" char lbl_83263324[];
extern "C" void fn_82F62E30(std::ios_base *self);
extern "C" void *fn_8223DA98(std::locale *loc, unsigned int flags);

void std::ios_base::_Ios_base_dtor(ios_base *self)
{
    if (0 < self->_Stdstr && 0 < --lbl_83263324[self->_Stdstr])
        return;
    fn_82F62E30(self);
    if (self->_Ploc != 0)
        fn_8223DA98(self->_Ploc, 1);
}
