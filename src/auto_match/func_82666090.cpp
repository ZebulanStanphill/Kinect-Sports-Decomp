// std::string::substr(off, count) from Visual C++ 2010's <xstring>, as the
// XLip library built it (without inlining): returns
// basic_string(*this, off, count, get_allocator()).
//
// Both callees keep their fn_ names; objects.json renames this unit's two
// references ("pool_aliases"). get_allocator() returns the empty allocator
// through a hidden pointer, and the linker folded it with every other function
// that only returns its first argument (fn_82F93778, which 13 Matching C units
// call as an allocator's copy constructor and the like). The constructor
// basic_string(right, off, count, al) is func_826667A0.c, a Matching C unit
// whose own callees (_Tidy, assign) are shared with many C units.
// The two specialisations are declarations only, so that the header's bodies
// are not compiled into this unit.
#include <string>

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

template <> String::basic_string(const String &, String::size_type, String::size_type, const String::allocator_type &);
template <> String::allocator_type String::get_allocator() const;

template String String::substr(String::size_type, String::size_type) const;
