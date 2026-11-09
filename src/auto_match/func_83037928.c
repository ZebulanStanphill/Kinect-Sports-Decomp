/* Ring buffer shared with func_830379D8 and func_83037AB0 (both Matching,
   /O2), whose matched source declares b..e volatile. This function reloads
   every field after storing it, a included, so all five are volatile here. */
typedef struct Ring_830379D8 { volatile unsigned a, b, c, d, e; char pad[0x1c]; int cs[6]; } Ring_830379D8;
extern unsigned fn_82FA52E8(void *heap);

void fn_83037928(Ring_830379D8 *r, void *heap, int size)
{
    r->c = fn_82FA52E8(heap);
    r->a = r->c;
    r->b = r->c;
    r->e = r->c + size;
    r->d = r->e;
}
