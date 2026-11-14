/* /Od forwarder (Dinkumware-style _Uninit_fill_n dispatch, like fn_82F903F0): the
   end pointer is computed and dropped, the tag argument is a value-initialised
   empty-struct temporary, the allocator and category arrive as empty structs. */
struct Tag_82F90378 { };
struct Alloc_82F90378 { };
struct Cat_82F90378 { };

extern "C" void *fn_82F90110(void **it);
extern "C" void fn_82F90478(void *first, unsigned int count, const void *value, Tag_82F90378 tag);

extern "C" void fn_82F90378(void **first, unsigned int count, const void *value, Alloc_82F90378 al, Cat_82F90378 cat)
{
    void **last = first + count;
    fn_82F90478(fn_82F90110((void **)&first), count, value, Tag_82F90378());
}
