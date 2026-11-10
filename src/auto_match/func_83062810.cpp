#include <set>
struct Element_822AC640 {int data[2];};
typedef std::set<Element_822AC640>::_Mybase Tree_83062810;
typedef Tree_83062810::_Node Node_83062810;
typedef Tree_83062810::iterator Iter_83062810;
struct Access_83062810 : Tree_83062810 {using Tree_83062810::_Myhead;using Tree_83062810::_Insert;};
struct Pair_83062810 {
 Iter_83062810 first;bool second;
 Pair_83062810(const Iter_83062810 &a,bool b):first(a),second(b) {}
};
extern "C" __declspec(noalias) void fn_82829C48(Iter_83062810 *);
extern "C" void fn_8265CA20(void *);
extern "C" bool fn_8305FDB8(Tree_83062810 *,int,int);
template <> Tree_83062810::iterator Tree_83062810::_Insert(bool,_Nodeptr,_Nodeptr);
extern "C" Pair_83062810 fn_83062810(Access_83062810 *tree,Node_83062810 *node,bool leftish) {
 Node_83062810 *next=tree->_Myhead->_Parent;
 Node_83062810 *where=tree->_Myhead;
 bool left=true;
 while(!next->_Isnil) {
  where=next;
  if(leftish) left=!fn_8305FDB8(tree,next->_Myval.data[0],node->_Myval.data[0]);
  else left=fn_8305FDB8(tree,node->_Myval.data[0],next->_Myval.data[0]);
  next=left?next->_Left:next->_Right;
 }
 Iter_83062810 it(where,tree);
 if(left) {
  if(it==tree->begin()) return Pair_83062810(tree->_Insert(true,where,node),true);
  fn_82829C48(&it);
 }
 if(fn_8305FDB8(tree,it._Ptr->_Myval.data[0],node->_Myval.data[0]))
  return Pair_83062810(tree->_Insert(left,where,node),true);
 fn_8265CA20(node);
 return Pair_83062810(it,false);
}
