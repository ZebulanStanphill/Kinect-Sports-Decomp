/* /Od forwarder (Dinkumware-style _Uninit_copy dispatch): the tag argument is a
   value-initialised empty-struct temporary, the category comes straight from
   the _Ptr_cat call. */
struct Tag_82F903F0 { };
struct Cat_82F903F0 { };

extern "C" Cat_82F903F0 fn_8265D598(void **first, void **dest);
extern "C" void *fn_82F90110(void **it);
extern "C" void fn_82F904C8(void *first, void *last, void *dest, void *al, Cat_82F903F0 cat, Tag_82F903F0 tag);

extern "C" void fn_82F903F0(void *first, void *last, void *dest, void *al)
{
    fn_82F904C8(fn_82F90110(&first), fn_82F90110(&last), dest, al, fn_8265D598(&first, &dest), Tag_82F903F0());
}
