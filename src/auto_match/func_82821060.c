typedef unsigned int uint;
static __forceinline void swap_82821060(uint *p) {
 uint v = *p;
 *p = (v >> 24) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | (v << 24);
}
void fn_82821060(uint *p)
{
 swap_82821060(p + 0);
 swap_82821060(p + 3);
 swap_82821060(p + 6);
 swap_82821060(p + 9);
 swap_82821060(p + 1);
 swap_82821060(p + 4);
 swap_82821060(p + 7);
 swap_82821060(p + 10);
 swap_82821060(p + 2);
 swap_82821060(p + 5);
 swap_82821060(p + 8);
 swap_82821060(p + 11);
}
