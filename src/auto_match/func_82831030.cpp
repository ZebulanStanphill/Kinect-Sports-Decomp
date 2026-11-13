#include <set>
struct Element_82830DF0 {int data[5];};
typedef std::set<Element_82830DF0>::_Mybase Tree_82831030;
typedef Tree_82831030::_Node Node_82831030;
typedef Tree_82831030::iterator Iter_82831030;
struct Access_82831030 : Tree_82831030 {using Tree_82831030::_Myhead;using Tree_82831030::_Insert;};
struct Pair_82831030 {
 Iter_82831030 first;bool second;
 Pair_82831030(const Iter_82831030 &a,bool b):first(a),second(b) {}
};
extern "C" __declspec(noalias) void fn_82830D60(Iter_82831030 *);
extern "C" void fn_8265CA20(void *);
extern "C" bool fn_828301D0(Tree_82831030 *,const Element_82830DF0 *,const Element_82830DF0 *);
template <> Tree_82831030::iterator Tree_82831030::_Insert(bool,_Nodeptr,_Nodeptr);
extern "C" Pair_82831030 fn_82831030(Access_82831030 *tree,Node_82831030 *node,bool leftish) {
 const Element_82830DF0 *val=&node->_Myval;
 Node_82831030 *next=tree->_Myhead->_Parent;
 Node_82831030 *where=tree->_Myhead;
 bool left=true;
 while(!next->_Isnil) {
  where=next;
  if(leftish) left=!fn_828301D0(tree,&next->_Myval,val);
  else left=fn_828301D0(tree,val,&next->_Myval);
  next=left?next->_Left:next->_Right;
 }
 Iter_82831030 it(where,tree);
 if(left) {
  if(it==tree->begin()) return Pair_82831030(tree->_Insert(true,where,node),true);
  fn_82830D60(&it);
 }
 if(fn_828301D0(tree,&it._Ptr->_Myval,val))
  return Pair_82831030(tree->_Insert(left,where,node),true);
 fn_8265CA20(node);
 return Pair_82831030(it,false);
}
