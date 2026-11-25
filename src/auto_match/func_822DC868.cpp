// boost::algorithm::detail::token_finderF<is_any_ofF<char> >::operator() (boost/algorithm/string
// finder.hpp): finds the first character of the set and, in compress mode, extends the token
// over the following characters of the set. is_any_ofF's copy constructor is fn_822DB770.
#include <algorithm>

namespace boost
{

template <class IteratorT> class iterator_range
{
  public:
    iterator_range(IteratorT Begin, IteratorT End) : m_Begin(Begin), m_End(End)
    {
    }

  private:
    IteratorT m_Begin;
    IteratorT m_End;
};

template <class IteratorT>
inline iterator_range<IteratorT> make_iterator_range(IteratorT Begin, IteratorT End)
{
    return iterator_range<IteratorT>(Begin, End);
}

namespace algorithm
{

enum token_compress_mode_type {
    token_compress_on,
    token_compress_off
};

namespace detail
{

template <typename CharT> struct is_any_ofF {
  private:
    typedef CharT set_value_type;

  public:
    is_any_ofF(const is_any_ofF &Other);

    ~is_any_ofF()
    {
        if (!use_fixed_storage(m_Size) && m_Storage.m_dynSet != 0) {
            delete[] m_Storage.m_dynSet;
        }
    }

    template <typename Char2T> bool operator()(Char2T Ch) const
    {
        const set_value_type *Storage =
            (use_fixed_storage(m_Size)) ? &m_Storage.m_fixSet[0] : m_Storage.m_dynSet;

        return ::std::binary_search(Storage, Storage + m_Size, Ch);
    }

  private:
    static bool use_fixed_storage(std::size_t size)
    {
        return size <= sizeof(set_value_type *) * 2;
    }

    union {
        set_value_type *m_dynSet;
        set_value_type m_fixSet[sizeof(set_value_type *) * 2];
    } m_Storage;

    ::std::size_t m_Size;
};

template <typename PredicateT> struct token_finderF {
    template <typename ForwardIteratorT>
    iterator_range<ForwardIteratorT> operator()(ForwardIteratorT Begin, ForwardIteratorT End) const
    {
        ForwardIteratorT It = ::std::find_if(Begin, End, m_Pred);

        if (It == End) {
            return make_iterator_range(End, End);
        } else {
            ForwardIteratorT It2 = It;

            if (m_eCompress == token_compress_on) {
                while (It2 != End && m_Pred(*It2)) {
                    ++It2;
                }
            } else {
                ++It2;
            }

            return make_iterator_range(It, It2);
        }
    }

  private:
    PredicateT m_Pred;
    token_compress_mode_type m_eCompress;
};

} // namespace detail
} // namespace algorithm
} // namespace boost

template boost::iterator_range<const char *>
boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::operator()(
    const char *Begin, const char *End) const;
