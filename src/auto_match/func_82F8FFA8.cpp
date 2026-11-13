/* /Od forwarder (Dinkumware-style dispatch, like func_82F903F0): the tag is a
   value-initialised empty-struct temporary; the pointer category is a non-POD
   empty struct, so its getter returns it through a hidden pointer. */
struct Tag_82F8FFA8 { };
struct Cat_82F8FFA8 { };
struct PtrCat_82F8FFA8 { PtrCat_82F8FFA8() {} };

extern "C" Cat_82F8FFA8 fn_82F901A0(void **it);
extern "C" PtrCat_82F8FFA8 fn_82F90188(void **first, void **dest);
extern "C" void *fn_82F90110(void **it);
extern "C" void fn_82F901B0(void *first, void *last, void *dest, PtrCat_82F8FFA8 ptrCat, Cat_82F8FFA8 cat, Tag_82F8FFA8 tag);

extern "C" void fn_82F8FFA8(void *first, void *last, void *dest)
{
    fn_82F901B0(fn_82F90110(&first), fn_82F90110(&last), dest, fn_82F90188(&first, &dest), fn_82F901A0(&dest), Tag_82F8FFA8());
}
