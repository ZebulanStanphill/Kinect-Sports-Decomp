/* /Od forwarder (Dinkumware-style _Uninit_copy dispatch): the tag argument is a
   value-initialised empty-struct temporary, the category comes straight from
   the category call on the destination. */
struct Tag_82F90088 { };
struct Cat_82F90088 { };

extern "C" Cat_82F90088 fn_82F901A0(void **dest);
extern "C" void *fn_82F90110(void **it);
extern "C" void fn_82F90290(void *first, void *last, void *dest, void *al, Cat_82F90088 cat, Tag_82F90088 tag);

extern "C" void fn_82F90088(void *first, void *last, void *dest, void *al)
{
    fn_82F90290(fn_82F90110(&first), fn_82F90110(&last), dest, al, fn_82F901A0(&dest), Tag_82F90088());
}
