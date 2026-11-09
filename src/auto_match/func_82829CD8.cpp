#include <set>
struct Element_82830DF0 { unsigned data[5]; };
typedef std::set<Element_82830DF0>::_Mybase Tree_82829CD8;
typedef Tree_82829CD8::_Node Node_82829CD8;
typedef Tree_82829CD8::iterator Iter_82829CD8;
struct Access_82829CD8 : Tree_82829CD8 {
 using Tree_82829CD8::_Myhead;
 using Tree_82829CD8::_Insert;
};
struct Pair_82829CD8 {
 Iter_82829CD8 first; bool second;
 Pair_82829CD8(const Iter_82829CD8 &a,bool b) : first(a),second(b) {}
};
extern "C" __declspec(noalias) void fn_82830D60(Iter_82829CD8 *);
extern "C" void fn_8265CA20(void *);
template <> Tree_82829CD8::iterator Tree_82829CD8::_Insert(bool, _Nodeptr, _Nodeptr);
extern "C" Pair_82829CD8 fn_82829CD8(Access_82829CD8 *tree,Node_82829CD8 *node,bool leftish) {
 Node_82829CD8 *next=tree->_Myhead->_Parent;
 Node_82829CD8 *where=tree->_Myhead;
 bool left=true;
 while (!next->_Isnil) {
  where=next;
  if (leftish) left=!(next->_Myval.data[1]+next->_Myval.data[0] < node->_Myval.data[0]);
  else left=node->_Myval.data[1]+node->_Myval.data[0] < next->_Myval.data[0];
  next=left?next->_Left:next->_Right;
 }
 Iter_82829CD8 it(where,tree);
 if (left) {
  if (it==tree->begin()) return Pair_82829CD8(tree->_Insert(true,where,node),true);
  fn_82830D60(&it);
 }
 if (it._Ptr->_Myval.data[1]+it._Ptr->_Myval.data[0] < node->_Myval.data[0])
  return Pair_82829CD8(tree->_Insert(left,where,node),true);
 fn_8265CA20(node);
 return Pair_82829CD8(it,false);
}
