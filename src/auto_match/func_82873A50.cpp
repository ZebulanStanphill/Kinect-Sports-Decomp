struct Element_8286D3A0 { int data; };
namespace std {
template<class T> class allocator {};
template<class T, class A> class _List_val {};
template<class T> class _List_const_iterator { public: void *node; };
template<class T, class A> class list {
public:
  typedef _List_const_iterator<_List_val<T, A> > const_iterator;
  void _Insert(const_iterator, const T &);
};
}
typedef std::list<Element_8286D3A0, std::allocator<Element_8286D3A0> > List;
extern "C" void fn_82865170();
extern "C" int *fn_82866400();
extern "C" unsigned int fn_82873A50(int *self, int value) {
  List *l = (List *)(self + 1);
  List::const_iterator it = { (void *)self[1] };
  Element_8286D3A0 v = {value};
  l->_Insert(it, v);
  fn_82865170();
  int *p = fn_82866400() + 3;
  ++*p;
  return 0x20120000;
}
